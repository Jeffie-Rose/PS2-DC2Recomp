#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StrCmp__FPcPc
// Address: 0x1375c0 - 0x1376b4
void StrCmp__FPcPc_0x1375c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StrCmp__FPcPc_0x1375c0");
#endif

    switch (ctx->pc) {
        case 0x1375ecu: goto label_1375ec;
        case 0x137624u: goto label_137624;
        case 0x137678u: goto label_137678;
        default: break;
    }

    ctx->pc = 0x1375c0u;

    // 0x1375c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1375C0u;
    {
        const bool branch_taken_0x1375c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375C0u;
            // 0x1375c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375c0) {
            ctx->pc = 0x1375D0u;
            goto label_1375d0;
        }
    }
    ctx->pc = 0x1375C8u;
    // 0x1375c8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1375C8u;
    {
        const bool branch_taken_0x1375c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1375CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375C8u;
            // 0x1375cc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375c8) {
            ctx->pc = 0x1375D8u;
            goto label_1375d8;
        }
    }
    ctx->pc = 0x1375D0u;
label_1375d0:
    // 0x1375d0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1375D0u;
    {
        const bool branch_taken_0x1375d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1375d0) {
            ctx->pc = 0x1376ACu;
            goto label_1376ac;
        }
    }
    ctx->pc = 0x1375D8u;
label_1375d8:
    // 0x1375d8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1375d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1375dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1375e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1375e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1375E4u;
    {
        const bool branch_taken_0x1375e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1375E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1375E4u;
            // 0x1375e8: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375e4) {
            ctx->pc = 0x137610u;
            goto label_137610;
        }
    }
    ctx->pc = 0x1375ECu;
label_1375ec:
    // 0x1375ec: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1375ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1375f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1375f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1375f4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1375F4u;
    {
        const bool branch_taken_0x1375f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1375f4) {
            ctx->pc = 0x137608u;
            goto label_137608;
        }
    }
    ctx->pc = 0x1375FCu;
    // 0x1375fc: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x1375fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x137600: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x137600u;
    {
        const bool branch_taken_0x137600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x137600) {
            ctx->pc = 0x137650u;
            goto label_137650;
        }
    }
    ctx->pc = 0x137608u;
label_137608:
    // 0x137608: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x137608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13760c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13760cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_137610:
    // 0x137610: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x137610u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x137614: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x137614u;
    {
        const bool branch_taken_0x137614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137614) {
            ctx->pc = 0x1375ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1375ec;
        }
    }
    ctx->pc = 0x13761Cu;
    // 0x13761c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13761Cu;
    {
        const bool branch_taken_0x13761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13761c) {
            ctx->pc = 0x137650u;
            goto label_137650;
        }
    }
    ctx->pc = 0x137624u;
label_137624:
    // 0x137624: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x137624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x137628: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x137628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x13762c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x13762cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x137630: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x137630u;
    {
        const bool branch_taken_0x137630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x137630) {
            ctx->pc = 0x137644u;
            goto label_137644;
        }
    }
    ctx->pc = 0x137638u;
    // 0x137638: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x137638u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x13763c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13763Cu;
    {
        const bool branch_taken_0x13763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x13763c) {
            ctx->pc = 0x13765Cu;
            goto label_13765c;
        }
    }
    ctx->pc = 0x137644u;
label_137644:
    // 0x137644: 0x0  nop
    ctx->pc = 0x137644u;
    // NOP
    // 0x137648: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x137648u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13764c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x13764cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_137650:
    // 0x137650: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x137650u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x137654: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x137654u;
    {
        const bool branch_taken_0x137654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137654) {
            ctx->pc = 0x137624u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137624;
        }
    }
    ctx->pc = 0x13765Cu;
label_13765c:
    // 0x13765c: 0x0  nop
    ctx->pc = 0x13765cu;
    // NOP
    // 0x137660: 0x11090003  beq         $t0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x137660u;
    {
        const bool branch_taken_0x137660 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x137664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137660u;
            // 0x137664: 0x8082a  slt         $at, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137660) {
            ctx->pc = 0x137670u;
            goto label_137670;
        }
    }
    ctx->pc = 0x137668u;
    // 0x137668: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x137668u;
    {
        const bool branch_taken_0x137668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13766Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137668u;
            // 0x13766c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137668) {
            ctx->pc = 0x1376ACu;
            goto label_1376ac;
        }
    }
    ctx->pc = 0x137670u;
label_137670:
    // 0x137670: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x137670u;
    {
        const bool branch_taken_0x137670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x137674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137670u;
            // 0x137674: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137670) {
            ctx->pc = 0x1376A4u;
            goto label_1376a4;
        }
    }
    ctx->pc = 0x137678u;
label_137678:
    // 0x137678: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x137678u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13767c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x13767cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137680: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137680u;
    {
        const bool branch_taken_0x137680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x137684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137680u;
            // 0x137684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137680) {
            ctx->pc = 0x137690u;
            goto label_137690;
        }
    }
    ctx->pc = 0x137688u;
    // 0x137688: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x137688u;
    {
        const bool branch_taken_0x137688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137688) {
            ctx->pc = 0x1376ACu;
            goto label_1376ac;
        }
    }
    ctx->pc = 0x137690u;
label_137690:
    // 0x137690: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x137690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x137694: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x137694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x137698: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x137698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x13769c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x13769Cu;
    {
        const bool branch_taken_0x13769c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1376A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13769Cu;
            // 0x1376a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13769c) {
            ctx->pc = 0x137678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_137678;
        }
    }
    ctx->pc = 0x1376A4u;
label_1376a4:
    // 0x1376a4: 0x0  nop
    ctx->pc = 0x1376a4u;
    // NOP
    // 0x1376a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1376a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1376ac:
    // 0x1376ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1376ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1376B4u;
}
