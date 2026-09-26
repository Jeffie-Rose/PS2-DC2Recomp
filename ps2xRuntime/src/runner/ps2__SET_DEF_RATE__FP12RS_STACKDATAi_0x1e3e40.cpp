#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DEF_RATE__FP12RS_STACKDATAi
// Address: 0x1e3e40 - 0x1e3ebc
void ps2__SET_DEF_RATE__FP12RS_STACKDATAi_0x1e3e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DEF_RATE__FP12RS_STACKDATAi_0x1e3e40");
#endif

    switch (ctx->pc) {
        case 0x1e3e64u: goto label_1e3e64;
        case 0x1e3ea4u: goto label_1e3ea4;
        default: break;
    }

    ctx->pc = 0x1e3e40u;

    // 0x1e3e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3e4c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3E4Cu;
    {
        const bool branch_taken_0x1e3e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E3E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E4Cu;
            // 0x1e3e50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e4c) {
            ctx->pc = 0x1E3E5Cu;
            goto label_1e3e5c;
        }
    }
    ctx->pc = 0x1E3E54u;
    // 0x1e3e54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E3E54u;
    {
        const bool branch_taken_0x1e3e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E54u;
            // 0x1e3e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e54) {
            ctx->pc = 0x1E3EACu;
            goto label_1e3eac;
        }
    }
    ctx->pc = 0x1E3E5Cu;
label_1e3e5c:
    // 0x1e3e5c: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E3E64u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E64u; }
        if (ctx->pc != 0x1E3E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E64u; }
        if (ctx->pc != 0x1E3E64u) { return; }
    }
    ctx->pc = 0x1E3E64u;
label_1e3e64:
    // 0x1e3e64: 0x8f908e70  lw          $s0, -0x7190($gp)
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e3e68: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1e3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
    // 0x1e3e6c: 0x90420068  lbu         $v0, 0x68($v0)
    ctx->pc = 0x1e3e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1e3e70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3E70u;
    {
        const bool branch_taken_0x1e3e70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1E3E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E70u;
            // 0x1e3e74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e70) {
            ctx->pc = 0x1E3E84u;
            goto label_1e3e84;
        }
    }
    ctx->pc = 0x1E3E78u;
    // 0x1e3e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3e7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E3E7Cu;
    {
        const bool branch_taken_0x1e3e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E7Cu;
            // 0x1e3e80: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e7c) {
            ctx->pc = 0x1E3E9Cu;
            goto label_1e3e9c;
        }
    }
    ctx->pc = 0x1E3E84u;
label_1e3e84:
    // 0x1e3e84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e3e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e3e88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e3e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e3e8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e3e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3e90: 0x0  nop
    ctx->pc = 0x1e3e90u;
    // NOP
    // 0x1e3e94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e3e98: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e3e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e3e9c:
    // 0x1e3e9c: 0xc0a24b0  jal         func_2892C0
    ctx->pc = 0x1E3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E3EA4u);
    ctx->pc = 0x1E3EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E9Cu;
            // 0x1e3ea0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EA4u; }
        if (ctx->pc != 0x1E3EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EA4u; }
        if (ctx->pc != 0x1E3EA4u) { return; }
    }
    ctx->pc = 0x1E3EA4u;
label_1e3ea4:
    // 0x1e3ea4: 0xa6021326  sh          $v0, 0x1326($s0)
    ctx->pc = 0x1e3ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4902), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e3ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3eac:
    // 0x1e3eac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3eb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EB4u;
            // 0x1e3eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3EBCu;
}
