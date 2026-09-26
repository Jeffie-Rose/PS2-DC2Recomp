#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPT_INIT_SPRITE__FP12RS_STACKDATAi
// Address: 0x2e56b0 - 0x2e5834
void ps2__SPT_INIT_SPRITE__FP12RS_STACKDATAi_0x2e56b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPT_INIT_SPRITE__FP12RS_STACKDATAi_0x2e56b0");
#endif

    switch (ctx->pc) {
        case 0x2e56d8u: goto label_2e56d8;
        case 0x2e56f0u: goto label_2e56f0;
        case 0x2e5700u: goto label_2e5700;
        case 0x2e5708u: goto label_2e5708;
        default: break;
    }

    ctx->pc = 0x2e56b0u;

    // 0x2e56b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e56b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e56b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e56b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e56b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e56b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e56bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e56bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e56c0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x2e56c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2e56c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e56c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e56c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e56c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e56ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e56d0: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E56D0u;
    SET_GPR_U32(ctx, 31, 0x2E56D8u);
    ctx->pc = 0x2E56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56D0u;
            // 0x2e56d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E56D8u; }
        if (ctx->pc != 0x2E56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E56D8u; }
        if (ctx->pc != 0x2E56D8u) { return; }
    }
    ctx->pc = 0x2E56D8u;
label_2e56d8:
    // 0x2e56d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e56d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56dc: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2e56dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e56e0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E56E0u;
    {
        const bool branch_taken_0x2e56e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E56E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56E0u;
            // 0x2e56e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56e0) {
            ctx->pc = 0x2E56F8u;
            goto label_2e56f8;
        }
    }
    ctx->pc = 0x2E56E8u;
    // 0x2e56e8: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E56E8u;
    SET_GPR_U32(ctx, 31, 0x2E56F0u);
    ctx->pc = 0x2E56ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56E8u;
            // 0x2e56ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E56F0u; }
        if (ctx->pc != 0x2E56F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E56F0u; }
        if (ctx->pc != 0x2E56F0u) { return; }
    }
    ctx->pc = 0x2E56F0u;
label_2e56f0:
    // 0x2e56f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e56f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e56f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e56f8:
    // 0x2e56f8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2E56F8u;
    {
        const bool branch_taken_0x2e56f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56f8) {
            ctx->pc = 0x2E5808u;
            goto label_2e5808;
        }
    }
    ctx->pc = 0x2E5700u;
label_2e5700:
    // 0x2e5700: 0xc0b8c90  jal         func_2E3240
    ctx->pc = 0x2E5700u;
    SET_GPR_U32(ctx, 31, 0x2E5708u);
    ctx->pc = 0x2E5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5700u;
            // 0x2e5704: 0x8f849ed0  lw          $a0, -0x6130($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3240u;
    if (runtime->hasFunction(0x2E3240u)) {
        auto targetFn = runtime->lookupFunction(0x2E3240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5708u; }
        if (ctx->pc != 0x2E5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpritePtr__FP11_EFF_SCRIPTi_0x2e3240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5708u; }
        if (ctx->pc != 0x2E5708u) { return; }
    }
    ctx->pc = 0x2E5708u;
label_2e5708:
    // 0x2e5708: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5708u;
    {
        const bool branch_taken_0x2e5708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5708) {
            ctx->pc = 0x2E5718u;
            goto label_2e5718;
        }
    }
    ctx->pc = 0x2E5710u;
    // 0x2e5710: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2E5710u;
    {
        const bool branch_taken_0x2e5710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5710u;
            // 0x2e5714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5710) {
            ctx->pc = 0x2E5818u;
            goto label_2e5818;
        }
    }
    ctx->pc = 0x2E5718u;
label_2e5718:
    // 0x2e5718: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e5718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e571c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e571cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5720: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2e5720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2e5724: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2e5724u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5728: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x2e5728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2e572c: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2e572cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2e5730: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2e5730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2e5734: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2e5734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2e5738: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2e5738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2e573c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e573cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e5740: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x2e5740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x2e5744: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x2e5744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2e5748: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x2e5748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x2e574c: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x2e574cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x2e5750: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2e5750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2e5754: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x2e5754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x2e5758: 0xac440034  sw          $a0, 0x34($v0)
    ctx->pc = 0x2e5758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 4));
    // 0x2e575c: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x2e575cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
    // 0x2e5760: 0xac44003c  sw          $a0, 0x3C($v0)
    ctx->pc = 0x2e5760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 4));
    // 0x2e5764: 0xac460044  sw          $a2, 0x44($v0)
    ctx->pc = 0x2e5764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 6));
    // 0x2e5768: 0xac460040  sw          $a2, 0x40($v0)
    ctx->pc = 0x2e5768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 6));
    // 0x2e576c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x2e576cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x2e5770: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x2e5770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x2e5774: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2e5774u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2e5778: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2e5778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2e577c: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x2e577cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
    // 0x2e5780: 0xac400068  sw          $zero, 0x68($v0)
    ctx->pc = 0x2e5780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
    // 0x2e5784: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x2e5784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
    // 0x2e5788: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x2e5788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
    // 0x2e578c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x2e578cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    // 0x2e5790: 0xac400078  sw          $zero, 0x78($v0)
    ctx->pc = 0x2e5790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
    // 0x2e5794: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x2e5794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
    // 0x2e5798: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x2e5798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
    // 0x2e579c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x2e579cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x2e57a0: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x2e57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x2e57a4: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x2e57a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
    // 0x2e57a8: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x2e57a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x2e57ac: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x2e57acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x2e57b0: 0xac400098  sw          $zero, 0x98($v0)
    ctx->pc = 0x2e57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 0));
    // 0x2e57b4: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x2e57b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x2e57b8: 0xac4000d0  sw          $zero, 0xD0($v0)
    ctx->pc = 0x2e57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 0));
    // 0x2e57bc: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x2e57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x2e57c0: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x2e57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x2e57c4: 0xac4000dc  sw          $zero, 0xDC($v0)
    ctx->pc = 0x2e57c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 0));
    // 0x2e57c8: 0xac4300e0  sw          $v1, 0xE0($v0)
    ctx->pc = 0x2e57c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 3));
    // 0x2e57cc: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x2e57ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x2e57d0: 0xac4000a0  sw          $zero, 0xA0($v0)
    ctx->pc = 0x2e57d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 0));
    // 0x2e57d4: 0xac4000ac  sw          $zero, 0xAC($v0)
    ctx->pc = 0x2e57d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 0));
    // 0x2e57d8: 0xac4000a8  sw          $zero, 0xA8($v0)
    ctx->pc = 0x2e57d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 0));
    // 0x2e57dc: 0xac4000b4  sw          $zero, 0xB4($v0)
    ctx->pc = 0x2e57dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 0));
    // 0x2e57e0: 0xac4000b0  sw          $zero, 0xB0($v0)
    ctx->pc = 0x2e57e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
    // 0x2e57e4: 0xac4000bc  sw          $zero, 0xBC($v0)
    ctx->pc = 0x2e57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 0));
    // 0x2e57e8: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x2e57e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x2e57ec: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x2e57ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x2e57f0: 0xac4000f0  sw          $zero, 0xF0($v0)
    ctx->pc = 0x2e57f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 0));
    // 0x2e57f4: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x2e57f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x2e57f8: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x2e57f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
    // 0x2e57fc: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x2e57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x2e5800: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x2e5800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x2e5804: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x2e5804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 0));
label_2e5808:
    // 0x2e5808: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2e5808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2e580c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2e580cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e5810: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x2E5810u;
    {
        const bool branch_taken_0x2e5810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5810u;
            // 0x2e5814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5810) {
            ctx->pc = 0x2E5700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5700;
        }
    }
    ctx->pc = 0x2E5818u;
label_2e5818:
    // 0x2e5818: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e581c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e581cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e582c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E582Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E582Cu;
            // 0x2e5830: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5834u;
}
