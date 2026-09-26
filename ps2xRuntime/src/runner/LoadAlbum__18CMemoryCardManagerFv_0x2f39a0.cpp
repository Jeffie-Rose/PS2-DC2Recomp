#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadAlbum__18CMemoryCardManagerFv
// Address: 0x2f39a0 - 0x2f3c68
void LoadAlbum__18CMemoryCardManagerFv_0x2f39a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadAlbum__18CMemoryCardManagerFv_0x2f39a0");
#endif

    switch (ctx->pc) {
        case 0x2f39f4u: goto label_2f39f4;
        case 0x2f3a04u: goto label_2f3a04;
        case 0x2f3a10u: goto label_2f3a10;
        case 0x2f3a24u: goto label_2f3a24;
        case 0x2f3a44u: goto label_2f3a44;
        case 0x2f3a58u: goto label_2f3a58;
        case 0x2f3a78u: goto label_2f3a78;
        case 0x2f3a94u: goto label_2f3a94;
        case 0x2f3ab0u: goto label_2f3ab0;
        case 0x2f3adcu: goto label_2f3adc;
        case 0x2f3af8u: goto label_2f3af8;
        case 0x2f3b5cu: goto label_2f3b5c;
        case 0x2f3ba0u: goto label_2f3ba0;
        case 0x2f3bb8u: goto label_2f3bb8;
        case 0x2f3bd4u: goto label_2f3bd4;
        case 0x2f3c38u: goto label_2f3c38;
        default: break;
    }

    ctx->pc = 0x2f39a0u;

    // 0x2f39a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f39a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f39a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f39a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f39ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f39acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f39b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f39b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f39b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f39b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f39b8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x2f39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2f39bc: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2F39BCu;
    {
        const bool branch_taken_0x2f39bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F39C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39BCu;
            // 0x2f39c0: 0x263004d0  addiu       $s0, $s1, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39bc) {
            ctx->pc = 0x2F3BA8u;
            goto label_2f3ba8;
        }
    }
    ctx->pc = 0x2F39C4u;
    // 0x2f39c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f39c8: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2F39C8u;
    {
        const bool branch_taken_0x2f39c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F39CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39C8u;
            // 0x2f39cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39c8) {
            ctx->pc = 0x2F3AD0u;
            goto label_2f3ad0;
        }
    }
    ctx->pc = 0x2F39D0u;
    // 0x2f39d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f39d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f39d4: 0x10640026  beq         $v1, $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F39D4u;
    {
        const bool branch_taken_0x2f39d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F39D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39D4u;
            // 0x2f39d8: 0x27a500b8  addiu       $a1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39d4) {
            ctx->pc = 0x2F3A70u;
            goto label_2f3a70;
        }
    }
    ctx->pc = 0x2F39DCu;
    // 0x2f39dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F39DCu;
    {
        const bool branch_taken_0x2f39dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39DCu;
            // 0x2f39e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39dc) {
            ctx->pc = 0x2F39ECu;
            goto label_2f39ec;
        }
    }
    ctx->pc = 0x2F39E4u;
    // 0x2f39e4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2F39E4u;
    {
        const bool branch_taken_0x2f39e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39E4u;
            // 0x2f39e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39e4) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F39ECu;
label_2f39ec:
    // 0x2f39ec: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F39ECu;
    SET_GPR_U32(ctx, 31, 0x2F39F4u);
    ctx->pc = 0x2F39F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39ECu;
            // 0x2f39f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F39F4u; }
        if (ctx->pc != 0x2F39F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F39F4u; }
        if (ctx->pc != 0x2F39F4u) { return; }
    }
    ctx->pc = 0x2F39F4u;
label_2f39f4:
    // 0x2f39f4: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x2F39F4u;
    {
        const bool branch_taken_0x2f39f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F39F4u;
            // 0x2f39f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39f4) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F39FCu;
    // 0x2f39fc: 0xc0bc64c  jal         func_2F1930
    ctx->pc = 0x2F39FCu;
    SET_GPR_U32(ctx, 31, 0x2F3A04u);
    ctx->pc = 0x2F1930u;
    if (runtime->hasFunction(0x2F1930u)) {
        auto targetFn = runtime->lookupFunction(0x2F1930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A04u; }
        if (ctx->pc != 0x2F3A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitError__18CMemoryCardManagerFv_0x2f1930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A04u; }
        if (ctx->pc != 0x2F3A04u) { return; }
    }
    ctx->pc = 0x2F3A04u;
label_2f3a04:
    // 0x2f3a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f3a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3a08: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2F3A08u;
    SET_GPR_U32(ctx, 31, 0x2F3A10u);
    ctx->pc = 0x2F3A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A08u;
            // 0x2f3a0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A10u; }
        if (ctx->pc != 0x2F3A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A10u; }
        if (ctx->pc != 0x2F3A10u) { return; }
    }
    ctx->pc = 0x2F3A10u;
label_2f3a10:
    // 0x2f3a10: 0xae220918  sw          $v0, 0x918($s1)
    ctx->pc = 0x2f3a10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2328), GPR_U32(ctx, 2));
    // 0x2f3a14: 0x8e2408f4  lw          $a0, 0x8F4($s1)
    ctx->pc = 0x2f3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2292)));
    // 0x2f3a18: 0x8e260918  lw          $a2, 0x918($s1)
    ctx->pc = 0x2f3a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x2f3a1c: 0xc049c86  jal         func_127218
    ctx->pc = 0x2F3A1Cu;
    SET_GPR_U32(ctx, 31, 0x2F3A24u);
    ctx->pc = 0x2F3A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A1Cu;
            // 0x2f3a20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A24u; }
        if (ctx->pc != 0x2F3A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A24u; }
        if (ctx->pc != 0x2F3A24u) { return; }
    }
    ctx->pc = 0x2F3A24u;
label_2f3a24:
    // 0x2f3a24: 0xae20091c  sw          $zero, 0x91C($s1)
    ctx->pc = 0x2f3a24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2332), GPR_U32(ctx, 0));
    // 0x2f3a28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2f3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3a2c: 0xae200910  sw          $zero, 0x910($s1)
    ctx->pc = 0x2f3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
    // 0x2f3a30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3a34: 0xae200914  sw          $zero, 0x914($s1)
    ctx->pc = 0x2f3a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2324), GPR_U32(ctx, 0));
    // 0x2f3a38: 0x8e2208f4  lw          $v0, 0x8F4($s1)
    ctx->pc = 0x2f3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2292)));
    // 0x2f3a3c: 0xc0bc53c  jal         func_2F14F0
    ctx->pc = 0x2F3A3Cu;
    SET_GPR_U32(ctx, 31, 0x2F3A44u);
    ctx->pc = 0x2F3A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A3Cu;
            // 0x2f3a40: 0xae2204e8  sw          $v0, 0x4E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F14F0u;
    if (runtime->hasFunction(0x2F14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A44u; }
        if (ctx->pc != 0x2F3A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMemoryCardAlbumName__FPci_0x2f14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A44u; }
        if (ctx->pc != 0x2F3A44u) { return; }
    }
    ctx->pc = 0x2F3A44u;
label_2f3a44:
    // 0x2f3a44: 0x8e2404c8  lw          $a0, 0x4C8($s1)
    ctx->pc = 0x2f3a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1224)));
    // 0x2f3a48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3a4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2f3a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2f3a50: 0xc0489d2  jal         func_122748
    ctx->pc = 0x2F3A50u;
    SET_GPR_U32(ctx, 31, 0x2F3A58u);
    ctx->pc = 0x2F3A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A50u;
            // 0x2f3a54: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122748u;
    if (runtime->hasFunction(0x122748u)) {
        auto targetFn = runtime->lookupFunction(0x122748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A58u; }
        if (ctx->pc != 0x2F3A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcOpen_0x122748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A58u; }
        if (ctx->pc != 0x2F3A58u) { return; }
    }
    ctx->pc = 0x2F3A58u;
label_2f3a58:
    // 0x2f3a58: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x2f3a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f3a5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2f3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2f3a60: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x2F3A60u;
    {
        const bool branch_taken_0x2f3a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A60u;
            // 0x2f3a64: 0xae230058  sw          $v1, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a60) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3A68u;
    // 0x2f3a68: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2F3A68u;
    {
        const bool branch_taken_0x2f3a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A68u;
            // 0x2f3a6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a68) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3A70u;
label_2f3a70:
    // 0x2f3a70: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3A70u;
    SET_GPR_U32(ctx, 31, 0x2F3A78u);
    ctx->pc = 0x2F3A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A70u;
            // 0x2f3a74: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A78u; }
        if (ctx->pc != 0x2F3A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A78u; }
        if (ctx->pc != 0x2F3A78u) { return; }
    }
    ctx->pc = 0x2F3A78u;
label_2f3a78:
    // 0x2f3a78: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2F3A78u;
    {
        const bool branch_taken_0x2f3a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a78) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3A80u;
    // 0x2f3a80: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2f3a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2f3a84: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3A84u;
    {
        const bool branch_taken_0x2f3a84 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F3A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A84u;
            // 0x2f3a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a84) {
            ctx->pc = 0x2F3A9Cu;
            goto label_2f3a9c;
        }
    }
    ctx->pc = 0x2F3A8Cu;
    // 0x2f3a8c: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3A8Cu;
    SET_GPR_U32(ctx, 31, 0x2F3A94u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A94u; }
        if (ctx->pc != 0x2F3A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3A94u; }
        if (ctx->pc != 0x2F3A94u) { return; }
    }
    ctx->pc = 0x2F3A94u;
label_2f3a94:
    // 0x2f3a94: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2F3A94u;
    {
        const bool branch_taken_0x2f3a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3A94u;
            // 0x2f3a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a94) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3A9Cu;
label_2f3a9c:
    // 0x2f3a9c: 0xae25005c  sw          $a1, 0x5C($s1)
    ctx->pc = 0x2f3a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 5));
    // 0x2f3aa0: 0x8e2504e8  lw          $a1, 0x4E8($s1)
    ctx->pc = 0x2f3aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1256)));
    // 0x2f3aa4: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2f3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2f3aa8: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F3AA8u;
    SET_GPR_U32(ctx, 31, 0x2F3AB0u);
    ctx->pc = 0x2F3AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3AA8u;
            // 0x2f3aac: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3AB0u; }
        if (ctx->pc != 0x2F3AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3AB0u; }
        if (ctx->pc != 0x2F3AB0u) { return; }
    }
    ctx->pc = 0x2F3AB0u;
label_2f3ab0:
    // 0x2f3ab0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3AB0u;
    {
        const bool branch_taken_0x2f3ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3AB0u;
            // 0x2f3ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ab0) {
            ctx->pc = 0x2F3AC8u;
            goto label_2f3ac8;
        }
    }
    ctx->pc = 0x2F3AB8u;
    // 0x2f3ab8: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f3abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3ac0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2F3AC0u;
    {
        const bool branch_taken_0x2f3ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3AC0u;
            // 0x2f3ac4: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ac0) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3AC8u;
label_2f3ac8:
    // 0x2f3ac8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2F3AC8u;
    {
        const bool branch_taken_0x2f3ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3AC8u;
            // 0x2f3acc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ac8) {
            ctx->pc = 0x2F3C58u;
            goto label_2f3c58;
        }
    }
    ctx->pc = 0x2F3AD0u;
label_2f3ad0:
    // 0x2f3ad0: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x2f3ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2f3ad4: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3AD4u;
    SET_GPR_U32(ctx, 31, 0x2F3ADCu);
    ctx->pc = 0x2F3AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3AD4u;
            // 0x2f3ad8: 0x2626091c  addiu       $a2, $s1, 0x91C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3ADCu; }
        if (ctx->pc != 0x2F3ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3ADCu; }
        if (ctx->pc != 0x2F3ADCu) { return; }
    }
    ctx->pc = 0x2F3ADCu;
label_2f3adc:
    // 0x2f3adc: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F3ADCu;
    {
        const bool branch_taken_0x2f3adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3adc) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3AE4u;
    // 0x2f3ae4: 0x8e25091c  lw          $a1, 0x91C($s1)
    ctx->pc = 0x2f3ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2332)));
    // 0x2f3ae8: 0x1ca0000e  bgtz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F3AE8u;
    {
        const bool branch_taken_0x2f3ae8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2F3AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3AE8u;
            // 0x2f3aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ae8) {
            ctx->pc = 0x2F3B24u;
            goto label_2f3b24;
        }
    }
    ctx->pc = 0x2F3AF0u;
    // 0x2f3af0: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3AF0u;
    SET_GPR_U32(ctx, 31, 0x2F3AF8u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3AF8u; }
        if (ctx->pc != 0x2F3AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3AF8u; }
        if (ctx->pc != 0x2F3AF8u) { return; }
    }
    ctx->pc = 0x2F3AF8u;
label_2f3af8:
    // 0x2f3af8: 0x8e230910  lw          $v1, 0x910($s1)
    ctx->pc = 0x2f3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x2f3afc: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x2f3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x2f3b00: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f3b00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f3b04: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3B04u;
    {
        const bool branch_taken_0x2f3b04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B04u;
            // 0x2f3b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b04) {
            ctx->pc = 0x2F3B1Cu;
            goto label_2f3b1c;
        }
    }
    ctx->pc = 0x2F3B0Cu;
    // 0x2f3b0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f3b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f3b10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3b14: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2F3B14u;
    {
        const bool branch_taken_0x2f3b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B14u;
            // 0x2f3b18: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b14) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3B1Cu;
label_2f3b1c:
    // 0x2f3b1c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2F3B1Cu;
    {
        const bool branch_taken_0x2f3b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3b1c) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3B24u;
label_2f3b24:
    // 0x2f3b24: 0x8e220910  lw          $v0, 0x910($s1)
    ctx->pc = 0x2f3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x2f3b28: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2f3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f3b2c: 0xae220910  sw          $v0, 0x910($s1)
    ctx->pc = 0x2f3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 2));
    // 0x2f3b30: 0x8e230914  lw          $v1, 0x914($s1)
    ctx->pc = 0x2f3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2324)));
    // 0x2f3b34: 0x8e22091c  lw          $v0, 0x91C($s1)
    ctx->pc = 0x2f3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2332)));
    // 0x2f3b38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f3b3c: 0xae220914  sw          $v0, 0x914($s1)
    ctx->pc = 0x2f3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2324), GPR_U32(ctx, 2));
    // 0x2f3b40: 0x8e230910  lw          $v1, 0x910($s1)
    ctx->pc = 0x2f3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x2f3b44: 0x8e240918  lw          $a0, 0x918($s1)
    ctx->pc = 0x2f3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x2f3b48: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2f3b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2f3b4c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F3B4Cu;
    {
        const bool branch_taken_0x2f3b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B4Cu;
            // 0x2f3b50: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b4c) {
            ctx->pc = 0x2F3B80u;
            goto label_2f3b80;
        }
    }
    ctx->pc = 0x2F3B54u;
    // 0x2f3b54: 0xc048a2e  jal         func_1228B8
    ctx->pc = 0x2F3B54u;
    SET_GPR_U32(ctx, 31, 0x2F3B5Cu);
    ctx->pc = 0x2F3B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B54u;
            // 0x2f3b58: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1228B8u;
    if (runtime->hasFunction(0x1228B8u)) {
        auto targetFn = runtime->lookupFunction(0x1228B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3B5Cu; }
        if (ctx->pc != 0x2F3B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcClose_0x1228b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3B5Cu; }
        if (ctx->pc != 0x2F3B5Cu) { return; }
    }
    ctx->pc = 0x2F3B5Cu;
label_2f3b5c:
    // 0x2f3b5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3B5Cu;
    {
        const bool branch_taken_0x2f3b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B5Cu;
            // 0x2f3b60: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b5c) {
            ctx->pc = 0x2F3B74u;
            goto label_2f3b74;
        }
    }
    ctx->pc = 0x2F3B64u;
    // 0x2f3b64: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x2f3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2f3b68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2f3b6c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2F3B6Cu;
    {
        const bool branch_taken_0x2f3b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B6Cu;
            // 0x2f3b70: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b6c) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3B74u;
label_2f3b74:
    // 0x2f3b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3b78: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2F3B78u;
    {
        const bool branch_taken_0x2f3b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B78u;
            // 0x2f3b7c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b78) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3B80u;
label_2f3b80:
    // 0x2f3b80: 0x28411000  slti        $at, $v0, 0x1000
    ctx->pc = 0x2f3b80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2f3b84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3B84u;
    {
        const bool branch_taken_0x2f3b84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B84u;
            // 0x2f3b88: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b84) {
            ctx->pc = 0x2F3B90u;
            goto label_2f3b90;
        }
    }
    ctx->pc = 0x2F3B8Cu;
    // 0x2f3b8c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f3b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b90:
    // 0x2f3b90: 0x8e2204e8  lw          $v0, 0x4E8($s1)
    ctx->pc = 0x2f3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1256)));
    // 0x2f3b94: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x2f3b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x2f3b98: 0xc048ab6  jal         func_122AD8
    ctx->pc = 0x2F3B98u;
    SET_GPR_U32(ctx, 31, 0x2F3BA0u);
    ctx->pc = 0x2F3B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3B98u;
            // 0x2f3b9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122AD8u;
    if (runtime->hasFunction(0x122AD8u)) {
        auto targetFn = runtime->lookupFunction(0x122AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BA0u; }
        if (ctx->pc != 0x2F3BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcRead_0x122ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BA0u; }
        if (ctx->pc != 0x2F3BA0u) { return; }
    }
    ctx->pc = 0x2F3BA0u;
label_2f3ba0:
    // 0x2f3ba0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2F3BA0u;
    {
        const bool branch_taken_0x2f3ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ba0) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3BA8u;
label_2f3ba8:
    // 0x2f3ba8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3bac: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x2f3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2f3bb0: 0xc048b7a  jal         func_122DE8
    ctx->pc = 0x2F3BB0u;
    SET_GPR_U32(ctx, 31, 0x2F3BB8u);
    ctx->pc = 0x2F3BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3BB0u;
            // 0x2f3bb4: 0x27a600bc  addiu       $a2, $sp, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122DE8u;
    if (runtime->hasFunction(0x122DE8u)) {
        auto targetFn = runtime->lookupFunction(0x122DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BB8u; }
        if (ctx->pc != 0x2F3BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x122de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BB8u; }
        if (ctx->pc != 0x2F3BB8u) { return; }
    }
    ctx->pc = 0x2F3BB8u;
label_2f3bb8:
    // 0x2f3bb8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F3BB8u;
    {
        const bool branch_taken_0x2f3bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3bb8) {
            ctx->pc = 0x2F3C50u;
            goto label_2f3c50;
        }
    }
    ctx->pc = 0x2F3BC0u;
    // 0x2f3bc0: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2f3bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2f3bc4: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3BC4u;
    {
        const bool branch_taken_0x2f3bc4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F3BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3BC4u;
            // 0x2f3bc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bc4) {
            ctx->pc = 0x2F3BDCu;
            goto label_2f3bdc;
        }
    }
    ctx->pc = 0x2F3BCCu;
    // 0x2f3bcc: 0xc0bd2e8  jal         func_2F4BA0
    ctx->pc = 0x2F3BCCu;
    SET_GPR_U32(ctx, 31, 0x2F3BD4u);
    ctx->pc = 0x2F4BA0u;
    if (runtime->hasFunction(0x2F4BA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F4BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BD4u; }
        if (ctx->pc != 0x2F3BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        McError__18CMemoryCardManagerFi_0x2f4ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3BD4u; }
        if (ctx->pc != 0x2F3BD4u) { return; }
    }
    ctx->pc = 0x2F3BD4u;
label_2f3bd4:
    // 0x2f3bd4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2F3BD4u;
    {
        const bool branch_taken_0x2f3bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3BD4u;
            // 0x2f3bd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bd4) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3BDCu;
label_2f3bdc:
    // 0x2f3bdc: 0x8e230910  lw          $v1, 0x910($s1)
    ctx->pc = 0x2f3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2320)));
    // 0x2f3be0: 0x8e220918  lw          $v0, 0x918($s1)
    ctx->pc = 0x2f3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2328)));
    // 0x2f3be4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f3be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f3be8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3BE8u;
    {
        const bool branch_taken_0x2f3be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3BE8u;
            // 0x2f3bec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3be8) {
            ctx->pc = 0x2F3BF4u;
            goto label_2f3bf4;
        }
    }
    ctx->pc = 0x2F3BF0u;
    // 0x2f3bf0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f3bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f3bf4:
    // 0x2f3bf4: 0x8e2308f4  lw          $v1, 0x8F4($s1)
    ctx->pc = 0x2f3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2292)));
    // 0x2f3bf8: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f3bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f3bfc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2f3bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2f3c00: 0x8c3144b0  lw          $s1, 0x44B0($at)
    ctx->pc = 0x2f3c00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17584)));
    // 0x2f3c04: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F3C04u;
    {
        const bool branch_taken_0x2f3c04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C04u;
            // 0x2f3c08: 0x3c010006  lui         $at, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c04) {
            ctx->pc = 0x2F3C24u;
            goto label_2f3c24;
        }
    }
    ctx->pc = 0x2F3C0Cu;
    // 0x2f3c0c: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f3c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x2f3c10: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2f3c10u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
    // 0x2f3c14: 0x8c2244b4  lw          $v0, 0x44B4($at)
    ctx->pc = 0x2f3c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17588)));
    // 0x2f3c18: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F3C18u;
    {
        const bool branch_taken_0x2f3c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C18u;
            // 0x2f3c1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c18) {
            ctx->pc = 0x2F3C48u;
            goto label_2f3c48;
        }
    }
    ctx->pc = 0x2F3C20u;
    // 0x2f3c20: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x2f3c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_2f3c24:
    // 0x2f3c24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3c28: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x2f3c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x2f3c2c: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x2f3c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x2f3c30: 0xc0bc550  jal         func_2F1540
    ctx->pc = 0x2F3C30u;
    SET_GPR_U32(ctx, 31, 0x2F3C38u);
    ctx->pc = 0x2F3C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C30u;
            // 0x2f3c34: 0x612821  addu        $a1, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1540u;
    if (runtime->hasFunction(0x2F1540u)) {
        auto targetFn = runtime->lookupFunction(0x2F1540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3C38u; }
        if (ctx->pc != 0x2F3C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeCheckDigit__FiPci_0x2f1540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3C38u; }
        if (ctx->pc != 0x2F3C38u) { return; }
    }
    ctx->pc = 0x2F3C38u;
label_2f3c38:
    // 0x2f3c38: 0x12220002  beq         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3C38u;
    {
        const bool branch_taken_0x2f3c38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C38u;
            // 0x2f3c3c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c38) {
            ctx->pc = 0x2F3C44u;
            goto label_2f3c44;
        }
    }
    ctx->pc = 0x2F3C40u;
    // 0x2f3c40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f3c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2f3c44:
    // 0x2f3c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3c48:
    // 0x2f3c48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F3C48u;
    {
        const bool branch_taken_0x2f3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c48) {
            ctx->pc = 0x2F3C54u;
            goto label_2f3c54;
        }
    }
    ctx->pc = 0x2F3C50u;
label_2f3c50:
    // 0x2f3c50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f3c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c54:
    // 0x2f3c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f3c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3c58:
    // 0x2f3c58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3c5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f3c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3c60: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F3C60u;
            // 0x2f3c64: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F3C68u;
}
