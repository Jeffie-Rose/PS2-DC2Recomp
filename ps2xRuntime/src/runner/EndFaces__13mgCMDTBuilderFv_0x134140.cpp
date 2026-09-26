#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndFaces__13mgCMDTBuilderFv
// Address: 0x134140 - 0x134180
void EndFaces__13mgCMDTBuilderFv_0x134140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndFaces__13mgCMDTBuilderFv_0x134140");
#endif

    ctx->pc = 0x134140u;

    // 0x134140: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x134140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x134144: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x134144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x134148: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x134148u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x13414c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134150: 0xac650024  sw          $a1, 0x24($v1)
    ctx->pc = 0x134150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x134154: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x134154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x134158: 0x3065000f  andi        $a1, $v1, 0xF
    ctx->pc = 0x134158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x13415c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13415Cu;
    {
        const bool branch_taken_0x13415c = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x13415c) {
            ctx->pc = 0x134170u;
            goto label_134170;
        }
    }
    ctx->pc = 0x134164u;
    // 0x134164: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x134164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x134168: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x134168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13416c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x13416cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_134170:
    // 0x134170: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x134170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x134174: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x134174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x134178: 0x3e00008  jr          $ra
    ctx->pc = 0x134178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134180u;
}
