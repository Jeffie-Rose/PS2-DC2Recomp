#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetIMGHeaderNum__FPc
// Address: 0x12e0e0 - 0x12e174
void mgGetIMGHeaderNum__FPc_0x12e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetIMGHeaderNum__FPc_0x12e0e0");
#endif

    switch (ctx->pc) {
        case 0x12e10cu: goto label_12e10c;
        default: break;
    }

    ctx->pc = 0x12e0e0u;

    // 0x12e0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12e0e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12e0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12e0ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e0ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0f0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E0F0u;
    {
        const bool branch_taken_0x12e0f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e0f0) {
            ctx->pc = 0x12E104u;
            goto label_12e104;
        }
    }
    ctx->pc = 0x12E0F8u;
    // 0x12e0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e0fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12E0FCu;
    {
        const bool branch_taken_0x12e0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e0fc) {
            ctx->pc = 0x12E160u;
            goto label_12e160;
        }
    }
    ctx->pc = 0x12E104u;
label_12e104:
    // 0x12e104: 0xc04b800  jal         func_12E000
    ctx->pc = 0x12E104u;
    SET_GPR_U32(ctx, 31, 0x12E10Cu);
    ctx->pc = 0x12E000u;
    if (runtime->hasFunction(0x12E000u)) {
        auto targetFn = runtime->lookupFunction(0x12E000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E10Cu; }
        if (ctx->pc != 0x12E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIMGVersion__FPc_0x12e000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E10Cu; }
        if (ctx->pc != 0x12E10Cu) { return; }
    }
    ctx->pc = 0x12E10Cu;
label_12e10c:
    // 0x12e10c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E10Cu;
    {
        const bool branch_taken_0x12e10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e10c) {
            ctx->pc = 0x12E120u;
            goto label_12e120;
        }
    }
    ctx->pc = 0x12E114u;
    // 0x12e114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e118: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12E118u;
    {
        const bool branch_taken_0x12e118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e118) {
            ctx->pc = 0x12E160u;
            goto label_12e160;
        }
    }
    ctx->pc = 0x12E120u;
label_12e120:
    // 0x12e120: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12e120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12e124: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E124u;
    {
        const bool branch_taken_0x12e124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12e124) {
            ctx->pc = 0x12E138u;
            goto label_12e138;
        }
    }
    ctx->pc = 0x12E12Cu;
    // 0x12e12c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e130: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E130u;
    {
        const bool branch_taken_0x12e130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12e130) {
            ctx->pc = 0x12E144u;
            goto label_12e144;
        }
    }
    ctx->pc = 0x12E138u;
label_12e138:
    // 0x12e138: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e13c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12E13Cu;
    {
        const bool branch_taken_0x12e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e13c) {
            ctx->pc = 0x12E160u;
            goto label_12e160;
        }
    }
    ctx->pc = 0x12E144u;
label_12e144:
    // 0x12e144: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e148: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E148u;
    {
        const bool branch_taken_0x12e148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x12e148) {
            ctx->pc = 0x12E15Cu;
            goto label_12e15c;
        }
    }
    ctx->pc = 0x12E150u;
    // 0x12e150: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12e150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12e154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12E154u;
    {
        const bool branch_taken_0x12e154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e154) {
            ctx->pc = 0x12E160u;
            goto label_12e160;
        }
    }
    ctx->pc = 0x12E15Cu;
label_12e15c:
    // 0x12e15c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12e15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12e160:
    // 0x12e160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12e160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12e164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e168: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12e168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12e16c: 0x3e00008  jr          $ra
    ctx->pc = 0x12E16Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12E174u;
}
