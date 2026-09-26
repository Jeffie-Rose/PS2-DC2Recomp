#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneGameObj__6CSceneFi
// Address: 0x283480 - 0x2834b4
void GetSceneGameObj__6CSceneFi_0x283480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneGameObj__6CSceneFi_0x283480");
#endif

    ctx->pc = 0x283480u;

    // 0x283480: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283480u;
    {
        const bool branch_taken_0x283480 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x283484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283480u;
            // 0x283484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283480) {
            ctx->pc = 0x28349Cu;
            goto label_28349c;
        }
    }
    ctx->pc = 0x283488u;
    // 0x283488: 0x8c8229a8  lw          $v0, 0x29A8($a0)
    ctx->pc = 0x283488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10664)));
    // 0x28348c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28348cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283490: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283490u;
    {
        const bool branch_taken_0x283490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283490u;
            // 0x283494: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283490) {
            ctx->pc = 0x2834A4u;
            goto label_2834a4;
        }
    }
    ctx->pc = 0x283498u;
    // 0x283498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28349c:
    // 0x28349c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28349Cu;
    {
        const bool branch_taken_0x28349c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28349c) {
            ctx->pc = 0x2834ACu;
            goto label_2834ac;
        }
    }
    ctx->pc = 0x2834A4u;
label_2834a4:
    // 0x2834a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2834a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2834a8: 0x244229ac  addiu       $v0, $v0, 0x29AC
    ctx->pc = 0x2834a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10668));
label_2834ac:
    // 0x2834ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2834ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2834B4u;
}
