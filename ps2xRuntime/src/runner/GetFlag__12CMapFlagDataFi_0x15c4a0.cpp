#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetFlag__12CMapFlagDataFi
// Address: 0x15c4a0 - 0x15c504
void GetFlag__12CMapFlagDataFi_0x15c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetFlag__12CMapFlagDataFi_0x15c4a0");
#endif

    ctx->pc = 0x15c4a0u;

    // 0x15c4a0: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15C4A0u;
    {
        const bool branch_taken_0x15c4a0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x15C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4A0u;
            // 0x15c4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4a0) {
            ctx->pc = 0x15C4B8u;
            goto label_15c4b8;
        }
    }
    ctx->pc = 0x15C4A8u;
    // 0x15c4a8: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x15c4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x15c4ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C4ACu;
    {
        const bool branch_taken_0x15c4ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4ACu;
            // 0x15c4b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4ac) {
            ctx->pc = 0x15C4C0u;
            goto label_15c4c0;
        }
    }
    ctx->pc = 0x15C4B4u;
    // 0x15c4b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c4b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c4b8:
    // 0x15c4b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15C4B8u;
    {
        const bool branch_taken_0x15c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c4b8) {
            ctx->pc = 0x15C4FCu;
            goto label_15c4fc;
        }
    }
    ctx->pc = 0x15C4C0u;
label_15c4c0:
    // 0x15c4c0: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C4C0u;
    {
        const bool branch_taken_0x15c4c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15C4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4C0u;
            // 0x15c4c4: 0x30a2001f  andi        $v0, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4c0) {
            ctx->pc = 0x15C4D4u;
            goto label_15c4d4;
        }
    }
    ctx->pc = 0x15C4C8u;
    // 0x15c4c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15C4C8u;
    {
        const bool branch_taken_0x15c4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c4c8) {
            ctx->pc = 0x15C4D4u;
            goto label_15c4d4;
        }
    }
    ctx->pc = 0x15C4D0u;
    // 0x15c4d0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x15c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_15c4d4:
    // 0x15c4d4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x15c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x15c4d8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C4D8u;
    {
        const bool branch_taken_0x15c4d8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15C4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C4D8u;
            // 0x15c4dc: 0x51143  sra         $v0, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c4d8) {
            ctx->pc = 0x15C4E8u;
            goto label_15c4e8;
        }
    }
    ctx->pc = 0x15C4E0u;
    // 0x15c4e0: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x15c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x15c4e4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x15c4e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_15c4e8:
    // 0x15c4e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15c4ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x15c4f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c4f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15c4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15c4f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x15c4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15c4fc:
    // 0x15c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C504u;
}
