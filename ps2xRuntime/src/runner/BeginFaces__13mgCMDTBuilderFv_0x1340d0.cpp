#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BeginFaces__13mgCMDTBuilderFv
// Address: 0x1340d0 - 0x134140
void BeginFaces__13mgCMDTBuilderFv_0x1340d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BeginFaces__13mgCMDTBuilderFv_0x1340d0");
#endif

    switch (ctx->pc) {
        case 0x13410cu: goto label_13410c;
        default: break;
    }

    ctx->pc = 0x1340d0u;

    // 0x1340d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1340d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1340d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1340d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1340d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1340d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1340dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1340dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1340e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1340e4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1340e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1340e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1340e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1340ec: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x1340ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
    // 0x1340f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1340f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1340f4: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1340f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1340f8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x1340f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1340fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1340fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134100: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x134100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134104: 0xc049c86  jal         func_127218
    ctx->pc = 0x134104u;
    SET_GPR_U32(ctx, 31, 0x13410Cu);
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13410Cu; }
        if (ctx->pc != 0x13410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13410Cu; }
        if (ctx->pc != 0x13410Cu) { return; }
    }
    ctx->pc = 0x13410Cu;
label_13410c:
    // 0x13410c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x13410cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134110: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x134110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x134114: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x134114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x134118: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x134118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13411c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x13411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134120: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x134120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x134124: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x134124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134128: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x134128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x13412c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13412cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134134: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x134134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x134138: 0x3e00008  jr          $ra
    ctx->pc = 0x134138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134140u;
}
