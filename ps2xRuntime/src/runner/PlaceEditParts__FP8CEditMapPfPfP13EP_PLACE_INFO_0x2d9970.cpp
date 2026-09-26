#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceEditParts__FP8CEditMapPfPfP13EP_PLACE_INFO
// Address: 0x2d9970 - 0x2d9b24
void PlaceEditParts__FP8CEditMapPfPfP13EP_PLACE_INFO_0x2d9970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceEditParts__FP8CEditMapPfPfP13EP_PLACE_INFO_0x2d9970");
#endif

    switch (ctx->pc) {
        case 0x2d99b0u: goto label_2d99b0;
        case 0x2d99f0u: goto label_2d99f0;
        case 0x2d9a10u: goto label_2d9a10;
        case 0x2d9a30u: goto label_2d9a30;
        case 0x2d9a64u: goto label_2d9a64;
        case 0x2d9a74u: goto label_2d9a74;
        case 0x2d9a80u: goto label_2d9a80;
        case 0x2d9a8cu: goto label_2d9a8c;
        case 0x2d9a94u: goto label_2d9a94;
        case 0x2d9abcu: goto label_2d9abc;
        case 0x2d9accu: goto label_2d9acc;
        case 0x2d9adcu: goto label_2d9adc;
        default: break;
    }

    ctx->pc = 0x2d9970u;

    // 0x2d9970: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2d9970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2d9974: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2d9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2d9978: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2d9978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2d997c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2d997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2d9980: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2d9980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2d9984: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2d9984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2d9988: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d9988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d998c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d9990: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d9990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9994: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d9994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d9998: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d9998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d999c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d999cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d99a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d99a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d99a4: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d99a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d99a8: 0xc06c2d4  jal         func_1B0B50
    ctx->pc = 0x2D99A8u;
    SET_GPR_U32(ctx, 31, 0x2D99B0u);
    ctx->pc = 0x2D99ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99A8u;
            // 0x2d99ac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B50u;
    if (runtime->hasFunction(0x1B0B50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D99B0u; }
        if (ctx->pc != 0x2D99B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtID__8CEditMapFi_0x1b0b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D99B0u; }
        if (ctx->pc != 0x2D99B0u) { return; }
    }
    ctx->pc = 0x2D99B0u;
label_2d99b0:
    // 0x2d99b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d99b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99b4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D99B4u;
    {
        const bool branch_taken_0x2d99b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D99B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99B4u;
            // 0x2d99b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99b4) {
            ctx->pc = 0x2D99C4u;
            goto label_2d99c4;
        }
    }
    ctx->pc = 0x2D99BCu;
    // 0x2d99bc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2D99BCu;
    {
        const bool branch_taken_0x2d99bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99BCu;
            // 0x2d99c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99bc) {
            ctx->pc = 0x2D9AF8u;
            goto label_2d9af8;
        }
    }
    ctx->pc = 0x2D99C4u;
label_2d99c4:
    // 0x2d99c4: 0x27b70094  addiu       $s7, $sp, 0x94
    ctx->pc = 0x2d99c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x2d99c8: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x2d99c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x2d99cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2d99ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99d0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x2d99d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x2d99d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d99d8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d99d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d99dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D99DCu;
    {
        const bool branch_taken_0x2d99dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99DCu;
            // 0x2d99e0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99dc) {
            ctx->pc = 0x2D9A04u;
            goto label_2d9a04;
        }
    }
    ctx->pc = 0x2D99E4u;
    // 0x2d99e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d99e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d99e8: 0xc06c874  jal         func_1B21D0
    ctx->pc = 0x2D99E8u;
    SET_GPR_U32(ctx, 31, 0x2D99F0u);
    ctx->pc = 0x2D99ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99E8u;
            // 0x2d99ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B21D0u;
    if (runtime->hasFunction(0x1B21D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B21D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D99F0u; }
        if (ctx->pc != 0x2D99F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceRiverParts__8CEditMapFPf_0x1b21d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D99F0u; }
        if (ctx->pc != 0x2D99F0u) { return; }
    }
    ctx->pc = 0x2D99F0u;
label_2d99f0:
    // 0x2d99f0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D99F0u;
    {
        const bool branch_taken_0x2d99f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99F0u;
            // 0x2d99f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99f0) {
            ctx->pc = 0x2D9A44u;
            goto label_2d9a44;
        }
    }
    ctx->pc = 0x2D99F8u;
    // 0x2d99f8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2d99f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d99fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D99FCu;
    {
        const bool branch_taken_0x2d99fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99FCu;
            // 0x2d9a00: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99fc) {
            ctx->pc = 0x2D9A44u;
            goto label_2d9a44;
        }
    }
    ctx->pc = 0x2D9A04u;
label_2d9a04:
    // 0x2d9a04: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d9a08: 0xc06c528  jal         func_1B14A0
    ctx->pc = 0x2D9A08u;
    SET_GPR_U32(ctx, 31, 0x2D9A10u);
    ctx->pc = 0x2D9A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A08u;
            // 0x2d9a0c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14A0u;
    if (runtime->hasFunction(0x1B14A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A10u; }
        if (ctx->pc != 0x2D9A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildEditParts__8CEditMapFi_0x1b14a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A10u; }
        if (ctx->pc != 0x2D9A10u) { return; }
    }
    ctx->pc = 0x2D9A10u;
label_2d9a10:
    // 0x2d9a10: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d9a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d9a18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a1c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2d9a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d9a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a24: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2d9a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a28: 0xc06c800  jal         func_1B2000
    ctx->pc = 0x2D9A28u;
    SET_GPR_U32(ctx, 31, 0x2D9A30u);
    ctx->pc = 0x2D9A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A28u;
            // 0x2d9a2c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2000u;
    if (runtime->hasFunction(0x1B2000u)) {
        auto targetFn = runtime->lookupFunction(0x1B2000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A30u; }
        if (ctx->pc != 0x2D9A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__8CEditMapFiP13EP_PLACE_INFOPfPfPi_0x1b2000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A30u; }
        if (ctx->pc != 0x2D9A30u) { return; }
    }
    ctx->pc = 0x2D9A30u;
label_2d9a30:
    // 0x2d9a30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a34: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9A34u;
    {
        const bool branch_taken_0x2d9a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a34) {
            ctx->pc = 0x2D9A44u;
            goto label_2d9a44;
        }
    }
    ctx->pc = 0x2D9A3Cu;
    // 0x2d9a3c: 0xaef50000  sw          $s5, 0x0($s7)
    ctx->pc = 0x2d9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
    // 0x2d9a40: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2d9a40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9a44:
    // 0x2d9a44: 0x12c0002a  beqz        $s6, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D9A44u;
    {
        const bool branch_taken_0x2d9a44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9a44) {
            ctx->pc = 0x2D9AF0u;
            goto label_2d9af0;
        }
    }
    ctx->pc = 0x2D9A4Cu;
    // 0x2d9a4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9a50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d9a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d9a54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9A54u;
    {
        const bool branch_taken_0x2d9a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A54u;
            // 0x2d9a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a54) {
            ctx->pc = 0x2D9A78u;
            goto label_2d9a78;
        }
    }
    ctx->pc = 0x2D9A5Cu;
    // 0x2d9a5c: 0xc064218  jal         func_190860
    ctx->pc = 0x2D9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A64u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A64u; }
        if (ctx->pc != 0x2D9A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A64u; }
        if (ctx->pc != 0x2D9A64u) { return; }
    }
    ctx->pc = 0x2D9A64u;
label_2d9a64:
    // 0x2d9a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a68: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d9a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d9a6c: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D9A6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A74u);
    ctx->pc = 0x2D9A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A6Cu;
            // 0x2d9a70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A74u; }
        if (ctx->pc != 0x2D9A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A74u; }
        if (ctx->pc != 0x2D9A74u) { return; }
    }
    ctx->pc = 0x2D9A74u;
label_2d9a74:
    // 0x2d9a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a78:
    // 0x2d9a78: 0xc0b62c8  jal         func_2D8B20
    ctx->pc = 0x2D9A78u;
    SET_GPR_U32(ctx, 31, 0x2D9A80u);
    ctx->pc = 0x2D9A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A78u;
            // 0x2d9a7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8B20u;
    if (runtime->hasFunction(0x2D8B20u)) {
        auto targetFn = runtime->lookupFunction(0x2D8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A80u; }
        if (ctx->pc != 0x2D9A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditStartPlaceEffect__FP10CEditPartsPf_0x2d8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A80u; }
        if (ctx->pc != 0x2D9A80u) { return; }
    }
    ctx->pc = 0x2D9A80u;
label_2d9a80:
    // 0x2d9a80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a84: 0xc0bbc2c  jal         func_2EF0B0
    ctx->pc = 0x2D9A84u;
    SET_GPR_U32(ctx, 31, 0x2D9A8Cu);
    ctx->pc = 0x2D9A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A84u;
            // 0x2d9a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0B0u;
    if (runtime->hasFunction(0x2EF0B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A8Cu; }
        if (ctx->pc != 0x2D9A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GroundBalance__8CEditMapFi_0x2ef0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A8Cu; }
        if (ctx->pc != 0x2D9A8Cu) { return; }
    }
    ctx->pc = 0x2D9A8Cu;
label_2d9a8c:
    // 0x2d9a8c: 0xc0bbbb0  jal         func_2EEEC0
    ctx->pc = 0x2D9A8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9A94u);
    ctx->pc = 0x2D9A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A8Cu;
            // 0x2d9a90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EEEC0u;
    if (runtime->hasFunction(0x2EEEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2EEEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A94u; }
        if (ctx->pc != 0x2D9A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateHouse__8CEditMapFv_0x2eeec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A94u; }
        if (ctx->pc != 0x2D9A94u) { return; }
    }
    ctx->pc = 0x2D9A94u;
label_2d9a94:
    // 0x2d9a94: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d9a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d9a98: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2d9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d9a9c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x2d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d9aa0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2d9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2d9aa4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2d9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2d9aa8: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x2d9aa8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d9aac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x2d9aacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x2d9ab0: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2d9ab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9ab4: 0xc0b661c  jal         func_2D9870
    ctx->pc = 0x2D9AB4u;
    SET_GPR_U32(ctx, 31, 0x2D9ABCu);
    ctx->pc = 0x2D9AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AB4u;
            // 0x2d9ab8: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9870u;
    if (runtime->hasFunction(0x2D9870u)) {
        auto targetFn = runtime->lookupFunction(0x2D9870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ABCu; }
        if (ctx->pc != 0x2D9ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StackUndoData__FP9UNDO_DATA_0x2d9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ABCu; }
        if (ctx->pc != 0x2D9ABCu) { return; }
    }
    ctx->pc = 0x2D9ABCu;
label_2d9abc:
    // 0x2d9abc: 0x8f829e28  lw          $v0, -0x61D8($gp)
    ctx->pc = 0x2d9abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942248)));
    // 0x2d9ac0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9ac4: 0xc064220  jal         func_190880
    ctx->pc = 0x2D9AC4u;
    SET_GPR_U32(ctx, 31, 0x2D9ACCu);
    ctx->pc = 0x2D9AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AC4u;
            // 0x2d9ac8: 0xaf829e28  sw          $v0, -0x61D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ACCu; }
        if (ctx->pc != 0x2D9ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ACCu; }
        if (ctx->pc != 0x2D9ACCu) { return; }
    }
    ctx->pc = 0x2D9ACCu;
label_2d9acc:
    // 0x2d9acc: 0x8f859e24  lw          $a1, -0x61DC($gp)
    ctx->pc = 0x2d9accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942244)));
    // 0x2d9ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ad4: 0xc0bd988  jal         func_2F6620
    ctx->pc = 0x2D9AD4u;
    SET_GPR_U32(ctx, 31, 0x2D9ADCu);
    ctx->pc = 0x2D9AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AD4u;
            // 0x2d9ad8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6620u;
    if (runtime->hasFunction(0x2F6620u)) {
        auto targetFn = runtime->lookupFunction(0x2F6620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ADCu; }
        if (ctx->pc != 0x2D9ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddBuildPartsNum__9CSaveDataFii_0x2f6620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9ADCu; }
        if (ctx->pc != 0x2D9ADCu) { return; }
    }
    ctx->pc = 0x2D9ADCu;
label_2d9adc:
    // 0x2d9adc: 0x8f829e28  lw          $v0, -0x61D8($gp)
    ctx->pc = 0x2d9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942248)));
    // 0x2d9ae0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9AE0u;
    {
        const bool branch_taken_0x2d9ae0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AE0u;
            // 0x2d9ae4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ae0) {
            ctx->pc = 0x2D9AF0u;
            goto label_2d9af0;
        }
    }
    ctx->pc = 0x2D9AE8u;
    // 0x2d9ae8: 0xaf809e28  sw          $zero, -0x61D8($gp)
    ctx->pc = 0x2d9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942248), GPR_U32(ctx, 0));
    // 0x2d9aec: 0xaf829e24  sw          $v0, -0x61DC($gp)
    ctx->pc = 0x2d9aecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942244), GPR_U32(ctx, 2));
label_2d9af0:
    // 0x2d9af0: 0xaf809e2c  sw          $zero, -0x61D4($gp)
    ctx->pc = 0x2d9af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942252), GPR_U32(ctx, 0));
    // 0x2d9af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d9af8:
    // 0x2d9af8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2d9af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9afc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2d9afcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9b00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2d9b00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d9b04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2d9b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9b08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2d9b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d9b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d9b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d9b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B1Cu;
            // 0x2d9b20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9B24u;
}
