#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Play__8CGamePadFP10PAD_STATUS
// Address: 0x14b690 - 0x14b6f4
void Play__8CGamePadFP10PAD_STATUS_0x14b690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Play__8CGamePadFP10PAD_STATUS_0x14b690");
#endif

    ctx->pc = 0x14b690u;

    // 0x14b690: 0x8c870474  lw          $a3, 0x474($a0)
    ctx->pc = 0x14b690u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x14b694: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x14b694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x14b698: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x14b698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x14b69c: 0xe1082b  sltu        $at, $a3, $at
    ctx->pc = 0x14b69cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14b6a0: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B6A0u;
    {
        const bool branch_taken_0x14b6a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B6A0u;
            // 0x14b6a4: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b6a0) {
            ctx->pc = 0x14B6ECu;
            goto label_14b6ec;
        }
    }
    ctx->pc = 0x14B6A8u;
    // 0x14b6a8: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x14b6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x14b6ac: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14b6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x14b6b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x14b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x14b6b4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14b6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14b6b8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x14b6b8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14b6bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x14b6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x14b6c0: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x14b6c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x14b6c4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14b6c8: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x14b6c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x14b6cc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x14b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x14b6d0: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x14b6d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14b6d4: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x14b6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x14b6d8: 0x90c30005  lbu         $v1, 0x5($a2)
    ctx->pc = 0x14b6d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x14b6dc: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x14b6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x14b6e0: 0x8c830474  lw          $v1, 0x474($a0)
    ctx->pc = 0x14b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x14b6e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b6e8: 0xac830474  sw          $v1, 0x474($a0)
    ctx->pc = 0x14b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 3));
label_14b6ec:
    // 0x14b6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x14B6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B6F4u;
}
