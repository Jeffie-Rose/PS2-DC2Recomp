#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetChgStepWait__11CCharacter2Fv
// Address: 0x173890 - 0x1738bc
void GetChgStepWait__11CCharacter2Fv_0x173890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetChgStepWait__11CCharacter2Fv_0x173890");
#endif

    ctx->pc = 0x173890u;

    // 0x173890: 0x8c830384  lw          $v1, 0x384($a0)
    ctx->pc = 0x173890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x173894: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x173894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x173898: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173898u;
    {
        const bool branch_taken_0x173898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17389Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173898u;
            // 0x17389c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173898) {
            ctx->pc = 0x1738ACu;
            goto label_1738ac;
        }
    }
    ctx->pc = 0x1738A0u;
    // 0x1738a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1738a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1738a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1738A4u;
    {
        const bool branch_taken_0x1738a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1738a4) {
            ctx->pc = 0x1738B4u;
            goto label_1738b4;
        }
    }
    ctx->pc = 0x1738ACu;
label_1738ac:
    // 0x1738ac: 0xc4800508  lwc1        $f0, 0x508($a0)
    ctx->pc = 0x1738acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1738b0: 0x0  nop
    ctx->pc = 0x1738b0u;
    // NOP
label_1738b4:
    // 0x1738b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1738B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1738BCu;
}
