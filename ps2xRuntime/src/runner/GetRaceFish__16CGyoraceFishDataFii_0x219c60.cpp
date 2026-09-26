#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRaceFish__16CGyoraceFishDataFii
// Address: 0x219c60 - 0x219cd4
void GetRaceFish__16CGyoraceFishDataFii_0x219c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRaceFish__16CGyoraceFishDataFii_0x219c60");
#endif

    ctx->pc = 0x219c60u;

    // 0x219c60: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x219C60u;
    {
        const bool branch_taken_0x219c60 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x219C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C60u;
            // 0x219c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c60) {
            ctx->pc = 0x219C74u;
            goto label_219c74;
        }
    }
    ctx->pc = 0x219C68u;
    // 0x219c68: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x219c68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x219c6c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x219C6Cu;
    {
        const bool branch_taken_0x219c6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x219c6c) {
            ctx->pc = 0x219C7Cu;
            goto label_219c7c;
        }
    }
    ctx->pc = 0x219C74u;
label_219c74:
    // 0x219c74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x219C74u;
    {
        const bool branch_taken_0x219c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219c74) {
            ctx->pc = 0x219CCCu;
            goto label_219ccc;
        }
    }
    ctx->pc = 0x219C7Cu;
label_219c7c:
    // 0x219c7c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x219c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x219c80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x219c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x219c84: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219c88: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219C88u;
    {
        const bool branch_taken_0x219c88 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x219C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C88u;
            // 0x219c8c: 0xc2082a  slt         $at, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c88) {
            ctx->pc = 0x219C98u;
            goto label_219c98;
        }
    }
    ctx->pc = 0x219C90u;
    // 0x219c90: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x219C90u;
    {
        const bool branch_taken_0x219c90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x219C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C90u;
            // 0x219c94: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c90) {
            ctx->pc = 0x219CA0u;
            goto label_219ca0;
        }
    }
    ctx->pc = 0x219C98u;
label_219c98:
    // 0x219c98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x219C98u;
    {
        const bool branch_taken_0x219c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C98u;
            // 0x219c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c98) {
            ctx->pc = 0x219CCCu;
            goto label_219ccc;
        }
    }
    ctx->pc = 0x219CA0u;
label_219ca0:
    // 0x219ca0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x219ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x219ca4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x219ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x219ca8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219CA8u;
    {
        const bool branch_taken_0x219ca8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219CA8u;
            // 0x219cac: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca8) {
            ctx->pc = 0x219CB8u;
            goto label_219cb8;
        }
    }
    ctx->pc = 0x219CB0u;
    // 0x219cb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x219CB0u;
    {
        const bool branch_taken_0x219cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219CB0u;
            // 0x219cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219cb0) {
            ctx->pc = 0x219CCCu;
            goto label_219ccc;
        }
    }
    ctx->pc = 0x219CB8u;
label_219cb8:
    // 0x219cb8: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x219cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x219cbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x219cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x219cc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x219cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x219cc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x219cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x219cc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x219cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_219ccc:
    // 0x219ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x219CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x219CD4u;
}
