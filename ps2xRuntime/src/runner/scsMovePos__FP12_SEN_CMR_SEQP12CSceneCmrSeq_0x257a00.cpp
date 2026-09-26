#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMovePos__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257a00 - 0x257ab0
void scsMovePos__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMovePos__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257a00");
#endif

    switch (ctx->pc) {
        case 0x257a34u: goto label_257a34;
        case 0x257a58u: goto label_257a58;
        case 0x257a6cu: goto label_257a6c;
        case 0x257a84u: goto label_257a84;
        default: break;
    }

    ctx->pc = 0x257a00u;

    // 0x257a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x257a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x257a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a14: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x257a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x257a18: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x257a1c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x257a20: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x257A20u;
    {
        const bool branch_taken_0x257a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257A20u;
            // 0x257a24: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a20) {
            ctx->pc = 0x257A40u;
            goto label_257a40;
        }
    }
    ctx->pc = 0x257A28u;
    // 0x257a28: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x257a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x257a2c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257A2Cu;
    SET_GPR_U32(ctx, 31, 0x257A34u);
    ctx->pc = 0x257A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A2Cu;
            // 0x257a30: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A34u; }
        if (ctx->pc != 0x257A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A34u; }
        if (ctx->pc != 0x257A34u) { return; }
    }
    ctx->pc = 0x257A34u;
label_257a34:
    // 0x257a34: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x257a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x257a38: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x257A38u;
    {
        const bool branch_taken_0x257a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257A38u;
            // 0x257a3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a38) {
            ctx->pc = 0x257A9Cu;
            goto label_257a9c;
        }
    }
    ctx->pc = 0x257A40u;
label_257a40:
    // 0x257a40: 0x1c60000d  bgtz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x257A40u;
    {
        const bool branch_taken_0x257a40 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x257A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257A40u;
            // 0x257a44: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a40) {
            ctx->pc = 0x257A78u;
            goto label_257a78;
        }
    }
    ctx->pc = 0x257A48u;
    // 0x257a48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x257a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257a4c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x257a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x257a50: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x257A50u;
    SET_GPR_U32(ctx, 31, 0x257A58u);
    ctx->pc = 0x257A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A50u;
            // 0x257a54: 0x26060050  addiu       $a2, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A58u; }
        if (ctx->pc != 0x257A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A58u; }
        if (ctx->pc != 0x257A58u) { return; }
    }
    ctx->pc = 0x257A58u;
label_257a58:
    // 0x257a58: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x257a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257a5c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x257a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x257a60: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x257a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x257a64: 0xc041c1e  jal         func_107078
    ctx->pc = 0x257A64u;
    SET_GPR_U32(ctx, 31, 0x257A6Cu);
    ctx->pc = 0x257A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A64u;
            // 0x257a68: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A6Cu; }
        if (ctx->pc != 0x257A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A6Cu; }
        if (ctx->pc != 0x257A6Cu) { return; }
    }
    ctx->pc = 0x257A6Cu;
label_257a6c:
    // 0x257a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257a70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x257A70u;
    {
        const bool branch_taken_0x257a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x257A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257A70u;
            // 0x257a74: 0xae0200dc  sw          $v0, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257a70) {
            ctx->pc = 0x257A8Cu;
            goto label_257a8c;
        }
    }
    ctx->pc = 0x257A78u;
label_257a78:
    // 0x257a78: 0x260600d0  addiu       $a2, $s0, 0xD0
    ctx->pc = 0x257a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x257a7c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x257A7Cu;
    SET_GPR_U32(ctx, 31, 0x257A84u);
    ctx->pc = 0x257A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257A7Cu;
            // 0x257a80: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A84u; }
        if (ctx->pc != 0x257A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257A84u; }
        if (ctx->pc != 0x257A84u) { return; }
    }
    ctx->pc = 0x257A84u;
label_257a84:
    // 0x257a84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x257a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x257a88: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x257a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_257a8c:
    // 0x257a8c: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x257a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x257a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257a94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257a98: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x257a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_257a9c:
    // 0x257a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x257AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257AA8u;
            // 0x257aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257AB0u;
}
