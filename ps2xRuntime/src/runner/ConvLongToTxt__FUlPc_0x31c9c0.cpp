#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ConvLongToTxt__FUlPc
// Address: 0x31c9c0 - 0x31ca8c
void ConvLongToTxt__FUlPc_0x31c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ConvLongToTxt__FUlPc_0x31c9c0");
#endif

    switch (ctx->pc) {
        case 0x31c9e4u: goto label_31c9e4;
        case 0x31ca18u: goto label_31ca18;
        case 0x31ca28u: goto label_31ca28;
        case 0x31ca64u: goto label_31ca64;
        default: break;
    }

    ctx->pc = 0x31c9c0u;

    // 0x31c9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31c9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31c9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31c9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31c9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31c9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31c9d0: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x31c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x31c9d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x31c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x31c9d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31c9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c9dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31C9DCu;
    {
        const bool branch_taken_0x31c9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c9dc) {
            ctx->pc = 0x31C9FCu;
            goto label_31c9fc;
        }
    }
    ctx->pc = 0x31C9E4u;
label_31c9e4:
    // 0x31c9e4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x31c9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x31c9e8: 0x8024e8c0  lb          $a0, -0x1740($at)
    ctx->pc = 0x31c9e8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294961344)));
    // 0x31c9ec: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x31c9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31c9f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x31c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31c9f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x31c9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31c9f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31c9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31c9fc:
    // 0x31c9fc: 0x0  nop
    ctx->pc = 0x31c9fcu;
    // NOP
    // 0x31ca00: 0x2a03000b  slti        $v1, $s0, 0xB
    ctx->pc = 0x31ca00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x31ca04: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31CA04u;
    {
        const bool branch_taken_0x31ca04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ca04) {
            ctx->pc = 0x31C9E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31c9e4;
        }
    }
    ctx->pc = 0x31CA0Cu;
    // 0x31ca0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31ca0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31CA10u;
    {
        const bool branch_taken_0x31ca10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ca10) {
            ctx->pc = 0x31CA68u;
            goto label_31ca68;
        }
    }
    ctx->pc = 0x31CA18u;
label_31ca18:
    // 0x31ca18: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x31ca18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ca1c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x31ca1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x31ca20: 0xc0a1d7a  jal         func_2875E8
    ctx->pc = 0x31CA20u;
    SET_GPR_U32(ctx, 31, 0x31CA28u);
    ctx->pc = 0x2875E8u;
    if (runtime->hasFunction(0x2875E8u)) {
        auto targetFn = runtime->lookupFunction(0x2875E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CA28u; }
        if (ctx->pc != 0x31CA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___umoddi3_0x2875e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CA28u; }
        if (ctx->pc != 0x31CA28u) { return; }
    }
    ctx->pc = 0x31CA28u;
label_31ca28:
    // 0x31ca28: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x31ca28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31ca2c: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x31ca2cu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x31ca30: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x31ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x31ca34: 0x2442e8c0  addiu       $v0, $v0, -0x1740
    ctx->pc = 0x31ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961344));
    // 0x31ca38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31ca3c: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x31ca3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ca40: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x31ca40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca44: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x31ca44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31ca48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x31ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ca4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31ca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31ca50: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x31ca50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x31ca54: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x31ca54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ca58: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x31ca58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x31ca5c: 0xc0a1c06  jal         func_287018
    ctx->pc = 0x31CA5Cu;
    SET_GPR_U32(ctx, 31, 0x31CA64u);
    ctx->pc = 0x287018u;
    if (runtime->hasFunction(0x287018u)) {
        auto targetFn = runtime->lookupFunction(0x287018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CA64u; }
        if (ctx->pc != 0x31CA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___udivdi3_0x287018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31CA64u; }
        if (ctx->pc != 0x31CA64u) { return; }
    }
    ctx->pc = 0x31CA64u;
label_31ca64:
    // 0x31ca64: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x31ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
label_31ca68:
    // 0x31ca68: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x31ca68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ca6c: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31CA6Cu;
    {
        const bool branch_taken_0x31ca6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ca6c) {
            ctx->pc = 0x31CA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31ca18;
        }
    }
    ctx->pc = 0x31CA74u;
    // 0x31ca74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ca78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ca78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ca7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31ca7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ca80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x31ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31ca84: 0x3e00008  jr          $ra
    ctx->pc = 0x31CA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31CA8Cu;
}
