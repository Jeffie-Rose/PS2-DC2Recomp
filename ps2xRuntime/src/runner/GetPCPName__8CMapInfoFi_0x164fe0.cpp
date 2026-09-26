#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPCPName__8CMapInfoFi
// Address: 0x164fe0 - 0x165018
void GetPCPName__8CMapInfoFi_0x164fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPCPName__8CMapInfoFi_0x164fe0");
#endif

    ctx->pc = 0x164fe0u;

    // 0x164fe0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x164FE0u;
    {
        const bool branch_taken_0x164fe0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x164FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164FE0u;
            // 0x164fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164fe0) {
            ctx->pc = 0x164FFCu;
            goto label_164ffc;
        }
    }
    ctx->pc = 0x164FE8u;
    // 0x164fe8: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x164fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x164fec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x164fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x164ff0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164FF0u;
    {
        const bool branch_taken_0x164ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164FF0u;
            // 0x164ff4: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164ff0) {
            ctx->pc = 0x165004u;
            goto label_165004;
        }
    }
    ctx->pc = 0x164FF8u;
    // 0x164ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164ffc:
    // 0x164ffc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164FFCu;
    {
        const bool branch_taken_0x164ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x164ffc) {
            ctx->pc = 0x165010u;
            goto label_165010;
        }
    }
    ctx->pc = 0x165004u;
label_165004:
    // 0x165004: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x165004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x165008: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x165008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x16500c: 0x0  nop
    ctx->pc = 0x16500cu;
    // NOP
label_165010:
    // 0x165010: 0x3e00008  jr          $ra
    ctx->pc = 0x165010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165018u;
}
