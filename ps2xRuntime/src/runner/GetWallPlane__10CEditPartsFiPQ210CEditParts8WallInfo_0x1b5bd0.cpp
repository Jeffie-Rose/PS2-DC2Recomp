#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWallPlane__10CEditPartsFiPQ210CEditParts8WallInfo
// Address: 0x1b5bd0 - 0x1b5db4
void GetWallPlane__10CEditPartsFiPQ210CEditParts8WallInfo_0x1b5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWallPlane__10CEditPartsFiPQ210CEditParts8WallInfo_0x1b5bd0");
#endif

    switch (ctx->pc) {
        case 0x1b5c04u: goto label_1b5c04;
        case 0x1b5c30u: goto label_1b5c30;
        case 0x1b5c3cu: goto label_1b5c3c;
        case 0x1b5c58u: goto label_1b5c58;
        case 0x1b5c64u: goto label_1b5c64;
        case 0x1b5c84u: goto label_1b5c84;
        case 0x1b5ca8u: goto label_1b5ca8;
        case 0x1b5cc4u: goto label_1b5cc4;
        case 0x1b5cd4u: goto label_1b5cd4;
        case 0x1b5ce0u: goto label_1b5ce0;
        case 0x1b5cecu: goto label_1b5cec;
        case 0x1b5d2cu: goto label_1b5d2c;
        case 0x1b5d58u: goto label_1b5d58;
        case 0x1b5d68u: goto label_1b5d68;
        default: break;
    }

    ctx->pc = 0x1b5bd0u;

    // 0x1b5bd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b5bd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b5bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1b5bd8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b5bdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b5be0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b5be0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5be4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b5be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b5be8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b5be8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5bec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b5becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b5bf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b5bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b5bf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b5bfc: 0xc06d6a4  jal         func_1B5A90
    ctx->pc = 0x1B5BFCu;
    SET_GPR_U32(ctx, 31, 0x1B5C04u);
    ctx->pc = 0x1B5C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5BFCu;
            // 0x1b5c00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5A90u;
    if (runtime->hasFunction(0x1B5A90u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C04u; }
        if (ctx->pc != 0x1B5C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsWallParts__10CEditPartsFv_0x1b5a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C04u; }
        if (ctx->pc != 0x1B5C04u) { return; }
    }
    ctx->pc = 0x1B5C04u;
label_1b5c04:
    // 0x1b5c04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5C04u;
    {
        const bool branch_taken_0x1b5c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C04u;
            // 0x1b5c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c04) {
            ctx->pc = 0x1B5C14u;
            goto label_1b5c14;
        }
    }
    ctx->pc = 0x1B5C0Cu;
    // 0x1b5c0c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1B5C0Cu;
    {
        const bool branch_taken_0x1b5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C0Cu;
            // 0x1b5c10: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c0c) {
            ctx->pc = 0x1B5D90u;
            goto label_1b5d90;
        }
    }
    ctx->pc = 0x1B5C14u;
label_1b5c14:
    // 0x1b5c14: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x1b5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1b5c18: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5c1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b5c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c20: 0x8c5301a4  lw          $s3, 0x1A4($v0)
    ctx->pc = 0x1b5c20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x1b5c24: 0x8c5401a0  lw          $s4, 0x1A0($v0)
    ctx->pc = 0x1b5c24u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1b5c28: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1B5C28u;
    SET_GPR_U32(ctx, 31, 0x1B5C30u);
    ctx->pc = 0x1B5C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C28u;
            // 0x1b5c2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C30u; }
        if (ctx->pc != 0x1B5C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C30u; }
        if (ctx->pc != 0x1B5C30u) { return; }
    }
    ctx->pc = 0x1B5C30u;
label_1b5c30:
    // 0x1b5c30: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x1b5c30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b5c34: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x1B5C34u;
    {
        const bool branch_taken_0x1b5c34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C34u;
            // 0x1b5c38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c34) {
            ctx->pc = 0x1B5D00u;
            goto label_1b5d00;
        }
    }
    ctx->pc = 0x1B5C3Cu;
label_1b5c3c:
    // 0x1b5c3c: 0x86820046  lh          $v0, 0x46($s4)
    ctx->pc = 0x1b5c3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 70)));
    // 0x1b5c40: 0x1456002b  bne         $v0, $s6, . + 4 + (0x2B << 2)
    ctx->pc = 0x1B5C40u;
    {
        const bool branch_taken_0x1b5c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1b5c40) {
            ctx->pc = 0x1B5CF0u;
            goto label_1b5cf0;
        }
    }
    ctx->pc = 0x1B5C48u;
    // 0x1b5c48: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B5C48u;
    {
        const bool branch_taken_0x1b5c48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C48u;
            // 0x1b5c4c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c48) {
            ctx->pc = 0x1B5C8Cu;
            goto label_1b5c8c;
        }
    }
    ctx->pc = 0x1B5C50u;
    // 0x1b5c50: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1B5C50u;
    SET_GPR_U32(ctx, 31, 0x1B5C58u);
    ctx->pc = 0x1B5C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C50u;
            // 0x1b5c54: 0x26850030  addiu       $a1, $s4, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C58u; }
        if (ctx->pc != 0x1B5C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C58u; }
        if (ctx->pc != 0x1B5C58u) { return; }
    }
    ctx->pc = 0x1B5C58u;
label_1b5c58:
    // 0x1b5c58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b5c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c5c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x1B5C5Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C64u);
    ctx->pc = 0x1B5C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C5Cu;
            // 0x1b5c60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C64u; }
        if (ctx->pc != 0x1B5C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C64u; }
        if (ctx->pc != 0x1B5C64u) { return; }
    }
    ctx->pc = 0x1B5C64u;
label_1b5c64:
    // 0x1b5c64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b5c64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b5c68: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b5c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b5c6c: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x1b5c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x1b5c70: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b5c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b5c74: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b5c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c78: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x1b5c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1b5c7c: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1B5C7Cu;
    SET_GPR_U32(ctx, 31, 0x1B5C84u);
    ctx->pc = 0x1B5C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C7Cu;
            // 0x1b5c80: 0x26880020  addiu       $t0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C84u; }
        if (ctx->pc != 0x1B5C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5C84u; }
        if (ctx->pc != 0x1B5C84u) { return; }
    }
    ctx->pc = 0x1B5C84u;
label_1b5c84:
    // 0x1b5c84: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1B5C84u;
    {
        const bool branch_taken_0x1b5c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5C84u;
            // 0x1b5c88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c84) {
            ctx->pc = 0x1B5CC4u;
            goto label_1b5cc4;
        }
    }
    ctx->pc = 0x1B5C8Cu;
label_1b5c8c:
    // 0x1b5c8c: 0x0  nop
    ctx->pc = 0x1b5c8cu;
    // NOP
    // 0x1b5c90: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1b5c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b5c94: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1b5c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1b5c98: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1b5c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c9c: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x1b5c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1b5ca0: 0xc04bd34  jal         func_12F4D0
    ctx->pc = 0x1B5CA0u;
    SET_GPR_U32(ctx, 31, 0x1B5CA8u);
    ctx->pc = 0x1B5CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CA0u;
            // 0x1b5ca4: 0x26880020  addiu       $t0, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F4D0u;
    if (runtime->hasFunction(0x12F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CA8u; }
        if (ctx->pc != 0x1B5CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPf_0x12f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CA8u; }
        if (ctx->pc != 0x1B5CA8u) { return; }
    }
    ctx->pc = 0x1B5CA8u;
label_1b5ca8:
    // 0x1b5ca8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b5ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b5cac: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b5cb0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b5cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1b5cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5cb8: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x1b5cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1b5cbc: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x1B5CBCu;
    SET_GPR_U32(ctx, 31, 0x1B5CC4u);
    ctx->pc = 0x1B5CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CBCu;
            // 0x1b5cc0: 0x27a900c0  addiu       $t1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CC4u; }
        if (ctx->pc != 0x1B5CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CC4u; }
        if (ctx->pc != 0x1B5CC4u) { return; }
    }
    ctx->pc = 0x1B5CC4u;
label_1b5cc4:
    // 0x1b5cc4: 0x0  nop
    ctx->pc = 0x1b5cc4u;
    // NOP
    // 0x1b5cc8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5ccc: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1B5CCCu;
    SET_GPR_U32(ctx, 31, 0x1B5CD4u);
    ctx->pc = 0x1B5CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CCCu;
            // 0x1b5cd0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CD4u; }
        if (ctx->pc != 0x1B5CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CD4u; }
        if (ctx->pc != 0x1B5CD4u) { return; }
    }
    ctx->pc = 0x1B5CD4u;
label_1b5cd4:
    // 0x1b5cd4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5cd8: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1B5CD8u;
    SET_GPR_U32(ctx, 31, 0x1B5CE0u);
    ctx->pc = 0x1B5CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CD8u;
            // 0x1b5cdc: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CE0u; }
        if (ctx->pc != 0x1B5CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CE0u; }
        if (ctx->pc != 0x1B5CE0u) { return; }
    }
    ctx->pc = 0x1B5CE0u;
label_1b5ce0:
    // 0x1b5ce0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1b5ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5ce4: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x1B5CE4u;
    SET_GPR_U32(ctx, 31, 0x1B5CECu);
    ctx->pc = 0x1B5CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CE4u;
            // 0x1b5ce8: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CECu; }
        if (ctx->pc != 0x1B5CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5CECu; }
        if (ctx->pc != 0x1B5CECu) { return; }
    }
    ctx->pc = 0x1B5CECu;
label_1b5cec:
    // 0x1b5cec: 0x26310003  addiu       $s1, $s1, 0x3
    ctx->pc = 0x1b5cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_1b5cf0:
    // 0x1b5cf0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b5cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1b5cf4: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x1b5cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1b5cf8: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1B5CF8u;
    {
        const bool branch_taken_0x1b5cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5CF8u;
            // 0x1b5cfc: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5cf8) {
            ctx->pc = 0x1B5C3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5c3c;
        }
    }
    ctx->pc = 0x1B5D00u;
label_1b5d00:
    // 0x1b5d00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5d04: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1b5d04u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5d08: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x1b5d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1b5d0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b5d0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b5d10: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1b5d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b5d14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b5d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b5d18: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1b5d18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b5d1c: 0x0  nop
    ctx->pc = 0x1b5d1cu;
    // NOP
    // 0x1b5d20: 0x0  nop
    ctx->pc = 0x1b5d20u;
    // NOP
    // 0x1b5d24: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1B5D24u;
    SET_GPR_U32(ctx, 31, 0x1B5D2Cu);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D2Cu; }
        if (ctx->pc != 0x1B5D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D2Cu; }
        if (ctx->pc != 0x1B5D2Cu) { return; }
    }
    ctx->pc = 0x1B5D2Cu;
label_1b5d2c:
    // 0x1b5d2c: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x1b5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5d30: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b5d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b5d34: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1b5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5d38: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x1b5d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x1b5d3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b5d40: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x1b5d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x1b5d44: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x1b5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b5d48: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1b5d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b5d4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b5d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b5d50: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x1B5D50u;
    SET_GPR_U32(ctx, 31, 0x1B5D58u);
    ctx->pc = 0x1B5D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D50u;
            // 0x1b5d54: 0xe6a00034  swc1        $f0, 0x34($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D58u; }
        if (ctx->pc != 0x1B5D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D58u; }
        if (ctx->pc != 0x1B5D58u) { return; }
    }
    ctx->pc = 0x1B5D58u;
label_1b5d58:
    // 0x1b5d58: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x1b5d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x1b5d5c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b5d60: 0xc04c028  jal         func_1300A0
    ctx->pc = 0x1B5D60u;
    SET_GPR_U32(ctx, 31, 0x1B5D68u);
    ctx->pc = 0x1B5D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D60u;
            // 0x1b5d64: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D68u; }
        if (ctx->pc != 0x1B5D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D68u; }
        if (ctx->pc != 0x1B5D68u) { return; }
    }
    ctx->pc = 0x1B5D68u;
label_1b5d68:
    // 0x1b5d68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1b5d68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1b5d6c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b5d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5d70: 0xe6a00030  swc1        $f0, 0x30($s5)
    ctx->pc = 0x1b5d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 48), bits); }
    // 0x1b5d74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b5d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d78: 0xaea00028  sw          $zero, 0x28($s5)
    ctx->pc = 0x1b5d78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 0));
    // 0x1b5d7c: 0xaea00038  sw          $zero, 0x38($s5)
    ctx->pc = 0x1b5d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 0));
    // 0x1b5d80: 0xaea3002c  sw          $v1, 0x2C($s5)
    ctx->pc = 0x1b5d80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
    // 0x1b5d84: 0xaea3003c  sw          $v1, 0x3C($s5)
    ctx->pc = 0x1b5d84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
    // 0x1b5d88: 0xaea3001c  sw          $v1, 0x1C($s5)
    ctx->pc = 0x1b5d88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
    // 0x1b5d8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b5d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b5d90:
    // 0x1b5d90: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b5d90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b5d94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b5d94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b5d98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b5d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b5d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b5d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b5da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b5da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b5da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5dac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DACu;
            // 0x1b5db0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5DB4u;
}
