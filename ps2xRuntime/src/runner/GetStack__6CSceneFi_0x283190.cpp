#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStack__6CSceneFi
// Address: 0x283190 - 0x2831c8
void GetStack__6CSceneFi_0x283190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStack__6CSceneFi_0x283190");
#endif

    ctx->pc = 0x283190u;

    // 0x283190: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283190u;
    {
        const bool branch_taken_0x283190 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x283194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283190u;
            // 0x283194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283190) {
            ctx->pc = 0x2831ACu;
            goto label_2831ac;
        }
    }
    ctx->pc = 0x283198u;
    // 0x283198: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x283198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28319c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28319cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2831a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2831A0u;
    {
        const bool branch_taken_0x2831a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2831A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2831A0u;
            // 0x2831a4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2831a0) {
            ctx->pc = 0x2831B4u;
            goto label_2831b4;
        }
    }
    ctx->pc = 0x2831A8u;
    // 0x2831a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2831a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2831ac:
    // 0x2831ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2831ACu;
    {
        const bool branch_taken_0x2831ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831ac) {
            ctx->pc = 0x2831C0u;
            goto label_2831c0;
        }
    }
    ctx->pc = 0x2831B4u;
label_2831b4:
    // 0x2831b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2831b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2831b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2831bc: 0x0  nop
    ctx->pc = 0x2831bcu;
    // NOP
label_2831c0:
    // 0x2831c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2831C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2831C8u;
}
