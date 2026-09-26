#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DEL_PORT__6CSoundFi
// Address: 0x189710 - 0x189a74
void DEL_PORT__6CSoundFi_0x189710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DEL_PORT__6CSoundFi_0x189710");
#endif

    switch (ctx->pc) {
        case 0x189748u: goto label_189748;
        case 0x189770u: goto label_189770;
        case 0x1897b4u: goto label_1897b4;
        case 0x1897c0u: goto label_1897c0;
        case 0x1897c8u: goto label_1897c8;
        case 0x1897d4u: goto label_1897d4;
        case 0x189840u: goto label_189840;
        case 0x189888u: goto label_189888;
        case 0x189894u: goto label_189894;
        case 0x18989cu: goto label_18989c;
        case 0x1898ccu: goto label_1898cc;
        case 0x189968u: goto label_189968;
        case 0x18999cu: goto label_18999c;
        case 0x1899e0u: goto label_1899e0;
        case 0x1899ecu: goto label_1899ec;
        case 0x1899f8u: goto label_1899f8;
        case 0x189a08u: goto label_189a08;
        default: break;
    }

    ctx->pc = 0x189710u;

    // 0x189710: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x189710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x189714: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x189714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x189718: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x189718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18971c: 0x248446b0  addiu       $a0, $a0, 0x46B0
    ctx->pc = 0x18971cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18096));
    // 0x189720: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x189720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x189724: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x189724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x189728: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x189728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18972c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x189730: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189734: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18973c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189740: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x189740u;
    SET_GPR_U32(ctx, 31, 0x189748u);
    ctx->pc = 0x189744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189740u;
            // 0x189744: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189748u; }
        if (ctx->pc != 0x189748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189748u; }
        if (ctx->pc != 0x189748u) { return; }
    }
    ctx->pc = 0x189748u;
label_189748:
    // 0x189748: 0x2602fff9  addiu       $v0, $s0, -0x7
    ctx->pc = 0x189748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x18974c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18974Cu;
    {
        const bool branch_taken_0x18974c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18974Cu;
            // 0x189750: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18974c) {
            ctx->pc = 0x189768u;
            goto label_189768;
        }
    }
    ctx->pc = 0x189754u;
    // 0x189754: 0x21a40  sll         $v1, $v0, 9
    ctx->pc = 0x189754u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x189758: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x189758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x18975c: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x18975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x189760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189764: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x189764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_189768:
    // 0x189768: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189768u;
    SET_GPR_U32(ctx, 31, 0x189770u);
    ctx->pc = 0x18976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189768u;
            // 0x18976c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189770u; }
        if (ctx->pc != 0x189770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189770u; }
        if (ctx->pc != 0x189770u) { return; }
    }
    ctx->pc = 0x189770u;
label_189770:
    // 0x189770: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x189770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x189774: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189778: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x189778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x18977c: 0x24632484  addiu       $v1, $v1, 0x2484
    ctx->pc = 0x18977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9348));
    // 0x189780: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189784: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x189784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x189788: 0x49080  sll         $s2, $a0, 2
    ctx->pc = 0x189788u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18978c: 0x72a021  addu        $s4, $v1, $s2
    ctx->pc = 0x18978cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x189790: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x189790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x189794: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x189794u;
    {
        const bool branch_taken_0x189794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x189794) {
            ctx->pc = 0x1897B4u;
            goto label_1897b4;
        }
    }
    ctx->pc = 0x18979Cu;
    // 0x18979c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x1897a0: 0x24422458  addiu       $v0, $v0, 0x2458
    ctx->pc = 0x1897a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x1897a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1897a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1897a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1897a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1897ac: 0xc062c94  jal         func_18B250
    ctx->pc = 0x1897ACu;
    SET_GPR_U32(ctx, 31, 0x1897B4u);
    ctx->pc = 0x1897B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897ACu;
            // 0x1897b0: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897B4u; }
        if (ctx->pc != 0x1897B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897B4u; }
        if (ctx->pc != 0x1897B4u) { return; }
    }
    ctx->pc = 0x1897B4u;
label_1897b4:
    // 0x1897b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1897b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1897b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1897B8u;
    {
        const bool branch_taken_0x1897b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1897BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1897B8u;
            // 0x1897bc: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897b8) {
            ctx->pc = 0x1897DCu;
            goto label_1897dc;
        }
    }
    ctx->pc = 0x1897C0u;
label_1897c0:
    // 0x1897c0: 0xc045c0e  jal         func_117038
    ctx->pc = 0x1897C0u;
    SET_GPR_U32(ctx, 31, 0x1897C8u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897C8u; }
        if (ctx->pc != 0x1897C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897C8u; }
        if (ctx->pc != 0x1897C8u) { return; }
    }
    ctx->pc = 0x1897C8u;
label_1897c8:
    // 0x1897c8: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1897c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1897cc: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x1897CCu;
    SET_GPR_U32(ctx, 31, 0x1897D4u);
    ctx->pc = 0x1897D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1897CCu;
            // 0x1897d0: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897D4u; }
        if (ctx->pc != 0x1897D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1897D4u; }
        if (ctx->pc != 0x1897D4u) { return; }
    }
    ctx->pc = 0x1897D4u;
label_1897d4:
    // 0x1897d4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1897d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1897d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1897d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1897dc:
    // 0x1897dc: 0x0  nop
    ctx->pc = 0x1897dcu;
    // NOP
    // 0x1897e0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x1897e4: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
    // 0x1897e8: 0x729821  addu        $s3, $v1, $s2
    ctx->pc = 0x1897e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1897ec: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x1897ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
    // 0x1897f0: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1897f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1897f4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1897F4u;
    {
        const bool branch_taken_0x1897f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1897F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1897F4u;
            // 0x1897f8: 0x3c03003d  lui         $v1, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897f4) {
            ctx->pc = 0x1897C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1897c0;
        }
    }
    ctx->pc = 0x1897FCu;
    // 0x1897fc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1897fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x189800: 0x24632398  addiu       $v1, $v1, 0x2398
    ctx->pc = 0x189800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9112));
    // 0x189804: 0x729021  addu        $s2, $v1, $s2
    ctx->pc = 0x189804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x189808: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x189808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18980c: 0x4600054  bltz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x18980Cu;
    {
        const bool branch_taken_0x18980c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x189810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18980Cu;
            // 0x189810: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18980c) {
            ctx->pc = 0x189960u;
            goto label_189960;
        }
    }
    ctx->pc = 0x189814u;
    // 0x189814: 0x2462fff9  addiu       $v0, $v1, -0x7
    ctx->pc = 0x189814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x189818: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189818u;
    {
        const bool branch_taken_0x189818 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189818u;
            // 0x18981c: 0x21a40  sll         $v1, $v0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189818) {
            ctx->pc = 0x189830u;
            goto label_189830;
        }
    }
    ctx->pc = 0x189820u;
    // 0x189820: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x189820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x189824: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x189824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x189828: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18982c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18982cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_189830:
    // 0x189830: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x189830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189834: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189838: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189838u;
    SET_GPR_U32(ctx, 31, 0x189840u);
    ctx->pc = 0x18983Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189838u;
            // 0x18983c: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189840u; }
        if (ctx->pc != 0x189840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189840u; }
        if (ctx->pc != 0x189840u) { return; }
    }
    ctx->pc = 0x189840u;
label_189840:
    // 0x189840: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x189840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189844: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189848: 0x24632484  addiu       $v1, $v1, 0x2484
    ctx->pc = 0x189848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9348));
    // 0x18984c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18984cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x189850: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x189850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x189854: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189858: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x189858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18985c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x18985cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189860: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x189860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x189864: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x189864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x189868: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x189868u;
    {
        const bool branch_taken_0x189868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189868u;
            // 0x18986c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189868) {
            ctx->pc = 0x18988Cu;
            goto label_18988c;
        }
    }
    ctx->pc = 0x189870u;
    // 0x189870: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x189870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x189874: 0x24422458  addiu       $v0, $v0, 0x2458
    ctx->pc = 0x189874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x189878: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x189878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18987c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18987cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189880: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189880u;
    SET_GPR_U32(ctx, 31, 0x189888u);
    ctx->pc = 0x189884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189880u;
            // 0x189884: 0x24c40040  addiu       $a0, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189888u; }
        if (ctx->pc != 0x189888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189888u; }
        if (ctx->pc != 0x189888u) { return; }
    }
    ctx->pc = 0x189888u;
label_189888:
    // 0x189888: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x189888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18988c:
    // 0x18988c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18988Cu;
    {
        const bool branch_taken_0x18988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18988Cu;
            // 0x189890: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18988c) {
            ctx->pc = 0x189900u;
            goto label_189900;
        }
    }
    ctx->pc = 0x189894u;
label_189894:
    // 0x189894: 0xc045c0e  jal         func_117038
    ctx->pc = 0x189894u;
    SET_GPR_U32(ctx, 31, 0x18989Cu);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18989Cu; }
        if (ctx->pc != 0x18989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18989Cu; }
        if (ctx->pc != 0x18989Cu) { return; }
    }
    ctx->pc = 0x18989Cu;
label_18989c:
    // 0x18989c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x18989cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1898a0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x1898a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x1898a4: 0x24422390  addiu       $v0, $v0, 0x2390
    ctx->pc = 0x1898a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9104));
    // 0x1898a8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1898a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1898ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1898acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1898b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1898b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1898b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1898b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1898b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1898b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1898bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1898bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1898c0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1898c4: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x1898C4u;
    SET_GPR_U32(ctx, 31, 0x1898CCu);
    ctx->pc = 0x1898C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1898C4u;
            // 0x1898c8: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1898CCu; }
        if (ctx->pc != 0x1898CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1898CCu; }
        if (ctx->pc != 0x1898CCu) { return; }
    }
    ctx->pc = 0x1898CCu;
label_1898cc:
    // 0x1898cc: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1898ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1898d0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x1898d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x1898d4: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x1898d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
    // 0x1898d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1898d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1898dc: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1898dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1898e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1898e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1898e4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1898e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1898e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1898e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1898ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1898ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1898f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1898f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1898f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1898f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1898f8: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x1898f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x1898fc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1898fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_189900:
    // 0x189900: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x189900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x189904: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x189908: 0x24632390  addiu       $v1, $v1, 0x2390
    ctx->pc = 0x189908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9104));
    // 0x18990c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18990cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189910: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189914: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x189918: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18991c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18991cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189920: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189924: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x189928: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x189928u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18992c: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x18992Cu;
    {
        const bool branch_taken_0x18992c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18992Cu;
            // 0x189930: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18992c) {
            ctx->pc = 0x189894u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189894;
        }
    }
    ctx->pc = 0x189934u;
    // 0x189934: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x189934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x189938: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x189938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x18993c: 0x24632484  addiu       $v1, $v1, 0x2484
    ctx->pc = 0x18993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9348));
    // 0x189940: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x189944: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x189944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189948: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18994c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18994cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x189950: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x189950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x189954: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x189954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189958: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x189958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x18995c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18995cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189960:
    // 0x189960: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x189960u;
    {
        const bool branch_taken_0x189960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189960u;
            // 0x189964: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189960) {
            ctx->pc = 0x189A34u;
            goto label_189a34;
        }
    }
    ctx->pc = 0x189968u;
label_189968:
    // 0x189968: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x18996c: 0x8c50000c  lw          $s0, 0xC($v0)
    ctx->pc = 0x18996cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x189970: 0x2602fff9  addiu       $v0, $s0, -0x7
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    // 0x189974: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x189974u;
    {
        const bool branch_taken_0x189974 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x189978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189974u;
            // 0x189978: 0x21a40  sll         $v1, $v0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189974) {
            ctx->pc = 0x18998Cu;
            goto label_18998c;
        }
    }
    ctx->pc = 0x18997Cu;
    // 0x18997c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x18997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x189980: 0x24421140  addiu       $v0, $v0, 0x1140
    ctx->pc = 0x189980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4416));
    // 0x189984: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x189984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189988: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x189988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_18998c:
    // 0x18998c: 0x0  nop
    ctx->pc = 0x18998cu;
    // NOP
    // 0x189990: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x189994: 0xc062c94  jal         func_18B250
    ctx->pc = 0x189994u;
    SET_GPR_U32(ctx, 31, 0x18999Cu);
    ctx->pc = 0x189998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189994u;
            // 0x189998: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18999Cu; }
        if (ctx->pc != 0x18999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18999Cu; }
        if (ctx->pc != 0x18999Cu) { return; }
    }
    ctx->pc = 0x18999Cu;
label_18999c:
    // 0x18999c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x18999cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1899a0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x1899a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x1899a4: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x1899a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1899a8: 0x24842390  addiu       $a0, $a0, 0x2390
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9104));
    // 0x1899ac: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x1899acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x1899b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1899b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1899b4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x1899b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1899b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1899b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1899bc: 0x85a021  addu        $s4, $a0, $a1
    ctx->pc = 0x1899bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1899c0: 0xae830094  sw          $v1, 0x94($s4)
    ctx->pc = 0x1899c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 3));
    // 0x1899c4: 0xae83009c  sw          $v1, 0x9C($s4)
    ctx->pc = 0x1899c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 3));
    // 0x1899c8: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x1899c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x1899cc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1899CCu;
    {
        const bool branch_taken_0x1899cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1899CCu;
            // 0x1899d0: 0x269600f4  addiu       $s6, $s4, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899cc) {
            ctx->pc = 0x1899E0u;
            goto label_1899e0;
        }
    }
    ctx->pc = 0x1899D4u;
    // 0x1899d4: 0x8e8500c8  lw          $a1, 0xC8($s4)
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x1899d8: 0xc062c94  jal         func_18B250
    ctx->pc = 0x1899D8u;
    SET_GPR_U32(ctx, 31, 0x1899E0u);
    ctx->pc = 0x1899DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1899D8u;
            // 0x1899dc: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B250u;
    if (runtime->hasFunction(0x18B250u)) {
        auto targetFn = runtime->lookupFunction(0x18B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899E0u; }
        if (ctx->pc != 0x1899E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ezMidi__Fii_0x18b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899E0u; }
        if (ctx->pc != 0x1899E0u) { return; }
    }
    ctx->pc = 0x1899E0u;
label_1899e0:
    // 0x1899e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1899e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1899e4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1899E4u;
    {
        const bool branch_taken_0x1899e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1899E4u;
            // 0x1899e8: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899e4) {
            ctx->pc = 0x189A14u;
            goto label_189a14;
        }
    }
    ctx->pc = 0x1899ECu;
label_1899ec:
    // 0x1899ec: 0x0  nop
    ctx->pc = 0x1899ecu;
    // NOP
    // 0x1899f0: 0xc045c0e  jal         func_117038
    ctx->pc = 0x1899F0u;
    SET_GPR_U32(ctx, 31, 0x1899F8u);
    ctx->pc = 0x117038u;
    if (runtime->hasFunction(0x117038u)) {
        auto targetFn = runtime->lookupFunction(0x117038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899F8u; }
        if (ctx->pc != 0x1899F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifInitIopHeap_0x117038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1899F8u; }
        if (ctx->pc != 0x1899F8u) { return; }
    }
    ctx->pc = 0x1899F8u;
label_1899f8:
    // 0x1899f8: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1899f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1899fc: 0x8c4400a0  lw          $a0, 0xA0($v0)
    ctx->pc = 0x1899fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x189a00: 0xc045c6c  jal         func_1171B0
    ctx->pc = 0x189A00u;
    SET_GPR_U32(ctx, 31, 0x189A08u);
    ctx->pc = 0x189A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189A00u;
            // 0x189a04: 0x245500a0  addiu       $s5, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1171B0u;
    if (runtime->hasFunction(0x1171B0u)) {
        auto targetFn = runtime->lookupFunction(0x1171B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189A08u; }
        if (ctx->pc != 0x189A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeSysMemory_0x1171b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189A08u; }
        if (ctx->pc != 0x189A08u) { return; }
    }
    ctx->pc = 0x189A08u;
label_189a08:
    // 0x189a08: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x189a08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x189a0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x189a0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x189a10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x189a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_189a14:
    // 0x189a14: 0x0  nop
    ctx->pc = 0x189a14u;
    // NOP
    // 0x189a18: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x189a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x189a1c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x189a1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189a20: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x189A20u;
    {
        const bool branch_taken_0x189a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a20) {
            ctx->pc = 0x1899ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1899ec;
        }
    }
    ctx->pc = 0x189A28u;
    // 0x189a28: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x189a28u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x189a2c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x189a2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x189a30: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x189a30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_189a34:
    // 0x189a34: 0x0  nop
    ctx->pc = 0x189a34u;
    // NOP
    // 0x189a38: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x189a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x189a3c: 0x2e3182a  slt         $v1, $s7, $v1
    ctx->pc = 0x189a3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x189a40: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x189A40u;
    {
        const bool branch_taken_0x189a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x189a40) {
            ctx->pc = 0x189968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_189968;
        }
    }
    ctx->pc = 0x189A48u;
    // 0x189a48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x189a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x189a4c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x189a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x189a50: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x189a50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x189a54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x189a54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x189a58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x189a58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189a5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x189a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189a60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x189a60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x189a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189a68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x189A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189A6Cu;
            // 0x189a70: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189A74u;
}
