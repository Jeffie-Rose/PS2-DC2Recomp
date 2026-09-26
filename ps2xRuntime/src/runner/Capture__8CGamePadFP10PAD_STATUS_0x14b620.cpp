#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Capture__8CGamePadFP10PAD_STATUS
// Address: 0x14b620 - 0x14b684
void Capture__8CGamePadFP10PAD_STATUS_0x14b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Capture__8CGamePadFP10PAD_STATUS_0x14b620");
#endif

    ctx->pc = 0x14b620u;

    // 0x14b620: 0x8c880474  lw          $t0, 0x474($a0)
    ctx->pc = 0x14b620u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x14b624: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x14b624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x14b628: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x14b628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x14b62c: 0x101082b  sltu        $at, $t0, $at
    ctx->pc = 0x14b62cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14b630: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x14B630u;
    {
        const bool branch_taken_0x14b630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B630u;
            // 0x14b634: 0x3c070300  lui         $a3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b630) {
            ctx->pc = 0x14B67Cu;
            goto label_14b67c;
        }
    }
    ctx->pc = 0x14B638u;
    // 0x14b638: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x14b638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b63c: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x14b63cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x14b640: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x14b640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x14b644: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x14b644u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14b648: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x14b648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14b64c: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x14b64cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b650: 0x80a30004  lb          $v1, 0x4($a1)
    ctx->pc = 0x14b650u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x14b654: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x14b654u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b658: 0x80a30008  lb          $v1, 0x8($a1)
    ctx->pc = 0x14b658u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x14b65c: 0xa0e30003  sb          $v1, 0x3($a3)
    ctx->pc = 0x14b65cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b660: 0x80a3000c  lb          $v1, 0xC($a1)
    ctx->pc = 0x14b660u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x14b664: 0xa0e30004  sb          $v1, 0x4($a3)
    ctx->pc = 0x14b664u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b668: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x14b668u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14b66c: 0xa0e30005  sb          $v1, 0x5($a3)
    ctx->pc = 0x14b66cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b670: 0x8c830474  lw          $v1, 0x474($a0)
    ctx->pc = 0x14b670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1140)));
    // 0x14b674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14b674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14b678: 0xac830474  sw          $v1, 0x474($a0)
    ctx->pc = 0x14b678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1140), GPR_U32(ctx, 3));
label_14b67c:
    // 0x14b67c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B684u;
}
