#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetColor__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bec0 - 0x25bfac
void scsSetColor__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetColor__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bec0");
#endif

    switch (ctx->pc) {
        case 0x25befcu: goto label_25befc;
        case 0x25bf24u: goto label_25bf24;
        case 0x25bf34u: goto label_25bf34;
        case 0x25bf48u: goto label_25bf48;
        case 0x25bf64u: goto label_25bf64;
        case 0x25bf74u: goto label_25bf74;
        case 0x25bf88u: goto label_25bf88;
        default: break;
    }

    ctx->pc = 0x25bec0u;

    // 0x25bec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25bec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25bec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25bec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25becc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25beccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25bed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25bed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25bed4: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25bed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25bed8: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x25bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x25bedc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25bedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25bee0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25BEE0u;
    {
        const bool branch_taken_0x25bee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25BEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BEE0u;
            // 0x25bee4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bee0) {
            ctx->pc = 0x25BF08u;
            goto label_25bf08;
        }
    }
    ctx->pc = 0x25BEE8u;
    // 0x25bee8: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25bee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25beec: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25beecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bef0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x25bef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25bef4: 0xc097be8  jal         func_25EFA0
    ctx->pc = 0x25BEF4u;
    SET_GPR_U32(ctx, 31, 0x25BEFCu);
    ctx->pc = 0x25BEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BEF4u;
            // 0x25bef8: 0x2484e880  addiu       $a0, $a0, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFA0u;
    if (runtime->hasFunction(0x25EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x25EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BEFCu; }
        if (ctx->pc != 0x25BEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__10CEohMotherFiPf_0x25efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BEFCu; }
        if (ctx->pc != 0x25BEFCu) { return; }
    }
    ctx->pc = 0x25BEFCu;
label_25befc:
    // 0x25befc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x25befcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x25bf00: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x25BF00u;
    {
        const bool branch_taken_0x25bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF00u;
            // 0x25bf04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf00) {
            ctx->pc = 0x25BF98u;
            goto label_25bf98;
        }
    }
    ctx->pc = 0x25BF08u;
label_25bf08:
    // 0x25bf08: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x25BF08u;
    {
        const bool branch_taken_0x25bf08 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x25bf08) {
            ctx->pc = 0x25BF50u;
            goto label_25bf50;
        }
    }
    ctx->pc = 0x25BF10u;
    // 0x25bf10: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25bf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25bf14: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bf18: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25bf1c: 0xc097c04  jal         func_25F010
    ctx->pc = 0x25BF1Cu;
    SET_GPR_U32(ctx, 31, 0x25BF24u);
    ctx->pc = 0x25BF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF1Cu;
            // 0x25bf20: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F010u;
    if (runtime->hasFunction(0x25F010u)) {
        auto targetFn = runtime->lookupFunction(0x25F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF24u; }
        if (ctx->pc != 0x25BF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__10CEohMotherFiPf_0x25f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF24u; }
        if (ctx->pc != 0x25BF24u) { return; }
    }
    ctx->pc = 0x25BF24u;
label_25bf24:
    // 0x25bf24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25bf28: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25bf2c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25BF2Cu;
    SET_GPR_U32(ctx, 31, 0x25BF34u);
    ctx->pc = 0x25BF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF2Cu;
            // 0x25bf30: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF34u; }
        if (ctx->pc != 0x25BF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF34u; }
        if (ctx->pc != 0x25BF34u) { return; }
    }
    ctx->pc = 0x25BF34u;
label_25bf34:
    // 0x25bf34: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x25bf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bf38: 0x26040120  addiu       $a0, $s0, 0x120
    ctx->pc = 0x25bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x25bf3c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x25bf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25bf40: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25BF40u;
    SET_GPR_U32(ctx, 31, 0x25BF48u);
    ctx->pc = 0x25BF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF40u;
            // 0x25bf44: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF48u; }
        if (ctx->pc != 0x25BF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF48u; }
        if (ctx->pc != 0x25BF48u) { return; }
    }
    ctx->pc = 0x25BF48u;
label_25bf48:
    // 0x25bf48: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x25BF48u;
    {
        const bool branch_taken_0x25bf48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF48u;
            // 0x25bf4c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bf48) {
            ctx->pc = 0x25BF8Cu;
            goto label_25bf8c;
        }
    }
    ctx->pc = 0x25BF50u;
label_25bf50:
    // 0x25bf50: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25bf50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25bf54: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bf58: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25bf5c: 0xc097c04  jal         func_25F010
    ctx->pc = 0x25BF5Cu;
    SET_GPR_U32(ctx, 31, 0x25BF64u);
    ctx->pc = 0x25BF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF5Cu;
            // 0x25bf60: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F010u;
    if (runtime->hasFunction(0x25F010u)) {
        auto targetFn = runtime->lookupFunction(0x25F010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF64u; }
        if (ctx->pc != 0x25BF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColor__10CEohMotherFiPf_0x25f010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF64u; }
        if (ctx->pc != 0x25BF64u) { return; }
    }
    ctx->pc = 0x25BF64u;
label_25bf64:
    // 0x25bf64: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25bf68: 0x26060120  addiu       $a2, $s0, 0x120
    ctx->pc = 0x25bf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x25bf6c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25BF6Cu;
    SET_GPR_U32(ctx, 31, 0x25BF74u);
    ctx->pc = 0x25BF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF6Cu;
            // 0x25bf70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF74u; }
        if (ctx->pc != 0x25BF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF74u; }
        if (ctx->pc != 0x25BF74u) { return; }
    }
    ctx->pc = 0x25BF74u;
label_25bf74:
    // 0x25bf74: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x25bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x25bf78: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x25bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x25bf7c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x25bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x25bf80: 0xc097be8  jal         func_25EFA0
    ctx->pc = 0x25BF80u;
    SET_GPR_U32(ctx, 31, 0x25BF88u);
    ctx->pc = 0x25BF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25BF80u;
            // 0x25bf84: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFA0u;
    if (runtime->hasFunction(0x25EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x25EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF88u; }
        if (ctx->pc != 0x25BF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetColor__10CEohMotherFiPf_0x25efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BF88u; }
        if (ctx->pc != 0x25BF88u) { return; }
    }
    ctx->pc = 0x25BF88u;
label_25bf88:
    // 0x25bf88: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x25bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_25bf8c:
    // 0x25bf8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bf90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25bf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25bf94: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x25bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_25bf98:
    // 0x25bf98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25bf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25bf9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25bf9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25bfa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25bfa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25bfa4: 0x3e00008  jr          $ra
    ctx->pc = 0x25BFA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25BFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BFA4u;
            // 0x25bfa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BFACu;
}
