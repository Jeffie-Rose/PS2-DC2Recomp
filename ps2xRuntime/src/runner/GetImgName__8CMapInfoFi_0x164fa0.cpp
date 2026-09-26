#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetImgName__8CMapInfoFi
// Address: 0x164fa0 - 0x164fd8
void GetImgName__8CMapInfoFi_0x164fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetImgName__8CMapInfoFi_0x164fa0");
#endif

    ctx->pc = 0x164fa0u;

    // 0x164fa0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164FA0u;
    {
        const bool branch_taken_0x164fa0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x164FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164FA0u;
            // 0x164fa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fa0) {
            ctx->pc = 0x164FBCu;
            goto label_164fbc;
        }
    }
    ctx->pc = 0x164FA8u;
    // 0x164fa8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x164fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164fac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x164facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164fb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164FB0u;
    {
        const bool branch_taken_0x164fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164FB0u;
            // 0x164fb4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fb0) {
            ctx->pc = 0x164FC4u;
            goto label_164fc4;
        }
    }
    ctx->pc = 0x164FB8u;
    // 0x164fb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164fbc:
    // 0x164fbc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164FBCu;
    {
        const bool branch_taken_0x164fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164fbc) {
            ctx->pc = 0x164FD0u;
            goto label_164fd0;
        }
    }
    ctx->pc = 0x164FC4u;
label_164fc4:
    // 0x164fc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x164fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164fc8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x164fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x164fcc: 0x0  nop
    ctx->pc = 0x164fccu;
    // NOP
label_164fd0:
    // 0x164fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x164FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164FD8u;
}
