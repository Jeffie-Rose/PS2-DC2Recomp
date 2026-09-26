#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndDma__11mgCDrawPrimFv
// Address: 0x1345c0 - 0x134660
void EndDma__11mgCDrawPrimFv_0x1345c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndDma__11mgCDrawPrimFv_0x1345c0");
#endif

    ctx->pc = 0x1345c0u;

    // 0x1345c0: 0x8c8700dc  lw          $a3, 0xDC($a0)
    ctx->pc = 0x1345c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1345c4: 0x8c8800e0  lw          $t0, 0xE0($a0)
    ctx->pc = 0x1345c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x1345c8: 0xe82823  subu        $a1, $a3, $t0
    ctx->pc = 0x1345c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1345cc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1345CCu;
    {
        const bool branch_taken_0x1345cc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1345D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345CCu;
            // 0x1345d0: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345cc) {
            ctx->pc = 0x1345DCu;
            goto label_1345dc;
        }
    }
    ctx->pc = 0x1345D4u;
    // 0x1345d4: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1345d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1345d8: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1345d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1345dc:
    // 0x1345dc: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x1345dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1345e0: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x1345e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x1345e4: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x1345e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1345e8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1345E8u;
    {
        const bool branch_taken_0x1345e8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1345ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1345E8u;
            // 0x1345ec: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345e8) {
            ctx->pc = 0x1345F8u;
            goto label_1345f8;
        }
    }
    ctx->pc = 0x1345F0u;
    // 0x1345f0: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x1345f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1345f4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1345f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1345f8:
    // 0x1345f8: 0x2469ffff  addiu       $t1, $v1, -0x1
    ctx->pc = 0x1345f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1345fc: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x1345fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x134600: 0xe32823  subu        $a1, $a3, $v1
    ctx->pc = 0x134600u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x134604: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134604u;
    {
        const bool branch_taken_0x134604 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x134608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134604u;
            // 0x134608: 0x51903  sra         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134604) {
            ctx->pc = 0x134614u;
            goto label_134614;
        }
    }
    ctx->pc = 0x13460Cu;
    // 0x13460c: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x13460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x134610: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x134610u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_134614:
    // 0x134614: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x134614u;
    {
        const bool branch_taken_0x134614 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x134618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134614u;
            // 0x134618: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134614) {
            ctx->pc = 0x134624u;
            goto label_134624;
        }
    }
    ctx->pc = 0x13461Cu;
    // 0x13461c: 0x1d200003  bgtz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13461Cu;
    {
        const bool branch_taken_0x13461c = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x13461c) {
            ctx->pc = 0x13462Cu;
            goto label_13462c;
        }
    }
    ctx->pc = 0x134624u;
label_134624:
    // 0x134624: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x134624u;
    {
        const bool branch_taken_0x134624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134624u;
            // 0x134628: 0xac8800dc  sw          $t0, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134624) {
            ctx->pc = 0x134658u;
            goto label_134658;
        }
    }
    ctx->pc = 0x13462Cu;
label_13462c:
    // 0x13462c: 0x8c8700ec  lw          $a3, 0xEC($a0)
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x134630: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x134630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x134634: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x134634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x134638: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x134638u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x13463c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x134640: 0x1233025  or          $a2, $t1, $v1
    ctx->pc = 0x134640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x134644: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x134644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x134648: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x13464c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x13464cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x134650: 0x8c8300e8  lw          $v1, 0xE8($a0)
    ctx->pc = 0x134650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x134654: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x134654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_134658:
    // 0x134658: 0x3e00008  jr          $ra
    ctx->pc = 0x134658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134660u;
}
