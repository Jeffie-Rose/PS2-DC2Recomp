#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __umoddi3
// Address: 0x2875e8 - 0x287b28
void ps2___umoddi3_0x2875e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___umoddi3_0x2875e8");
#endif

    ctx->pc = 0x2875e8u;

    // 0x2875e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2875e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2875ec: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x2875ecu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2875f0: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x2875f0u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x2875f4: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x2875f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2875f8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x2875f8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x2875fc: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x2875fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x287600: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x287600u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x287604: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x287604u;
    {
        const bool branch_taken_0x287604 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x287608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287604u;
            // 0x287608: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287604) {
            ctx->pc = 0x2878D4u;
            goto label_2878d4;
        }
    }
    ctx->pc = 0x28760Cu;
    // 0x28760c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x28760cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287610: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x287610u;
    {
        const bool branch_taken_0x287610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287610u;
            // 0x287614: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287610) {
            ctx->pc = 0x2876A0u;
            goto label_2876a0;
        }
    }
    ctx->pc = 0x287618u;
    // 0x287618: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x287618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x28761c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28761Cu;
    {
        const bool branch_taken_0x28761c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28761Cu;
            // 0x287620: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28761c) {
            ctx->pc = 0x287638u;
            goto label_287638;
        }
    }
    ctx->pc = 0x287624u;
    // 0x287624: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x287624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x287628: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x287628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28762c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28762Cu;
    {
        const bool branch_taken_0x28762c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28762Cu;
            // 0x287630: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28762c) {
            ctx->pc = 0x287650u;
            goto label_287650;
        }
    }
    ctx->pc = 0x287634u;
    // 0x287634: 0x0  nop
    ctx->pc = 0x287634u;
    // NOP
label_287638:
    // 0x287638: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x287638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28763c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28763cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287640: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x287640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x287644: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x287644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287648: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x287648u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x28764c: 0x0  nop
    ctx->pc = 0x28764cu;
    // NOP
label_287650:
    // 0x287650: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x287650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x287654: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x287654u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x287658: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x287658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x28765c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x28765cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x287660: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x287660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x287664: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x287664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287668: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x287668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28766c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x28766cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287670: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x287670u;
    {
        const bool branch_taken_0x287670 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x287674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287670u;
            // 0x287674: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287670) {
            ctx->pc = 0x28768Cu;
            goto label_28768c;
        }
    }
    ctx->pc = 0x287678u;
    // 0x287678: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x287678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x28767c: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x28767cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x287680: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x287680u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x287684: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x287684u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287688: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x287688u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_28768c:
    // 0x28768c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x28768cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x287690: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x287690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x287694: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x287694u;
    {
        const bool branch_taken_0x287694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287694u;
            // 0x287698: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287694) {
            ctx->pc = 0x287818u;
            goto label_287818;
        }
    }
    ctx->pc = 0x28769Cu;
    // 0x28769c: 0x0  nop
    ctx->pc = 0x28769cu;
    // NOP
label_2876a0:
    // 0x2876a0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2876A0u;
    {
        const bool branch_taken_0x2876a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2876A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876A0u;
            // 0x2876a4: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876a0) {
            ctx->pc = 0x2876C8u;
            goto label_2876c8;
        }
    }
    ctx->pc = 0x2876A8u;
    // 0x2876a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2876a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2876ac: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2876ACu;
    {
        const bool branch_taken_0x2876ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2876ac) {
            ctx->pc = 0x2876B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2876ACu;
            // 0x2876b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2876B4u;
            goto label_2876b4;
        }
    }
    ctx->pc = 0x2876B4u;
label_2876b4:
    // 0x2876b4: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x2876b4u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2876b8: 0x1012  mflo        $v0
    ctx->pc = 0x2876b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2876bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2876bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2876c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2876c4: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2876c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_2876c8:
    // 0x2876c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2876C8u;
    {
        const bool branch_taken_0x2876c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2876CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876C8u;
            // 0x2876cc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876c8) {
            ctx->pc = 0x2876E0u;
            goto label_2876e0;
        }
    }
    ctx->pc = 0x2876D0u;
    // 0x2876d0: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x2876d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2876d4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2876d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2876D8u;
    {
        const bool branch_taken_0x2876d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2876D8u;
            // 0x2876dc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876d8) {
            ctx->pc = 0x2876F8u;
            goto label_2876f8;
        }
    }
    ctx->pc = 0x2876E0u;
label_2876e0:
    // 0x2876e0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2876e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2876e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2876e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2876e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2876e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2876ec: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x2876ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2876f0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2876f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x2876f4: 0x0  nop
    ctx->pc = 0x2876f4u;
    // NOP
label_2876f8:
    // 0x2876f8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2876f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2876fc: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x2876fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x287700: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x287700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x287704: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x287704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x287708: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x287708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28770c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28770cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287710: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x287710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x287714: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x287714u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287718: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x287718u;
    {
        const bool branch_taken_0x287718 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x28771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287718u;
            // 0x28771c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287718) {
            ctx->pc = 0x287730u;
            goto label_287730;
        }
    }
    ctx->pc = 0x287720u;
    // 0x287720: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x287720u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x287724: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x287724u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x287728: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x287728u;
    {
        const bool branch_taken_0x287728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28772Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287728u;
            // 0x28772c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287728) {
            ctx->pc = 0x28780Cu;
            goto label_28780c;
        }
    }
    ctx->pc = 0x287730u;
label_287730:
    // 0x287730: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x287730u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x287734: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x287734u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x287738: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x287738u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x28773c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x28773cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x287740: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x287740u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x287744: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x287744u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x287748: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x287748u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x28774c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x28774cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x287750: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x287750u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x287754: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x287754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287758: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x28775c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28775Cu;
    {
        const bool branch_taken_0x28775c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x28775c) {
            ctx->pc = 0x287760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28775Cu;
            // 0x287760: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287764u;
            goto label_287764;
        }
    }
    ctx->pc = 0x287764u;
label_287764:
    // 0x287764: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x287764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287768: 0x1012  mflo        $v0
    ctx->pc = 0x287768u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x28776c: 0x1810  mfhi        $v1
    ctx->pc = 0x28776cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287770: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x287770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287774: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287778: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287778u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28777c: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x28777cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x287780: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287784: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287784u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287788: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x287788u;
    {
        const bool branch_taken_0x287788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287788) {
            ctx->pc = 0x28778Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287788u;
            // 0x28778c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2877B4u;
            goto label_2877b4;
        }
    }
    ctx->pc = 0x287790u;
    // 0x287790: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x287790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x287794: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x287794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287798: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x287798u;
    {
        const bool branch_taken_0x287798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287798) {
            ctx->pc = 0x28779Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287798u;
            // 0x28779c: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2877B4u;
            goto label_2877b4;
        }
    }
    ctx->pc = 0x2877A0u;
    // 0x2877a0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2877a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2877a4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2877A4u;
    {
        const bool branch_taken_0x2877a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2877a4) {
            ctx->pc = 0x2877A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2877A4u;
            // 0x2877a8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2877B0u;
            goto label_2877b0;
        }
    }
    ctx->pc = 0x2877ACu;
    // 0x2877ac: 0x0  nop
    ctx->pc = 0x2877acu;
    // NOP
label_2877b0:
    // 0x2877b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2877b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2877b4:
    // 0x2877b4: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x2877b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x2877b8: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x2877b8u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2877bc: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2877BCu;
    {
        const bool branch_taken_0x2877bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877bc) {
            ctx->pc = 0x2877C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2877BCu;
            // 0x2877c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2877C4u;
            goto label_2877c4;
        }
    }
    ctx->pc = 0x2877C4u;
label_2877c4:
    // 0x2877c4: 0x1012  mflo        $v0
    ctx->pc = 0x2877c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2877c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2877c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2877cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2877ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2877d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2877d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2877d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2877d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2877d8: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x2877d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2877dc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2877dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2877e0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2877e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2877e4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2877E4u;
    {
        const bool branch_taken_0x2877e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2877e4) {
            ctx->pc = 0x2877E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2877E4u;
            // 0x2877e8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28780Cu;
            goto label_28780c;
        }
    }
    ctx->pc = 0x2877ECu;
    // 0x2877ec: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2877ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2877f0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2877f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2877f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2877F4u;
    {
        const bool branch_taken_0x2877f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2877F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2877F4u;
            // 0x2877f8: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2877f4) {
            ctx->pc = 0x28780Cu;
            goto label_28780c;
        }
    }
    ctx->pc = 0x2877FCu;
    // 0x2877fc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2877fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287800: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287800u;
    {
        const bool branch_taken_0x287800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287800) {
            ctx->pc = 0x287804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287800u;
            // 0x287804: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287808u;
            goto label_287808;
        }
    }
    ctx->pc = 0x287808u;
label_287808:
    // 0x287808: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x287808u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_28780c:
    // 0x28780c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x28780cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x287810: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x287810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287814: 0x0  nop
    ctx->pc = 0x287814u;
    // NOP
label_287818:
    // 0x287818: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x287818u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x28781c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28781Cu;
    {
        const bool branch_taken_0x28781c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28781c) {
            ctx->pc = 0x287820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28781Cu;
            // 0x287820: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287824u;
            goto label_287824;
        }
    }
    ctx->pc = 0x287824u;
label_287824:
    // 0x287824: 0x1012  mflo        $v0
    ctx->pc = 0x287824u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287828: 0x1810  mfhi        $v1
    ctx->pc = 0x287828u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28782c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28782cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287830: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287834: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287834u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287838: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x287838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x28783c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28783cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287840: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287844: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x287844u;
    {
        const bool branch_taken_0x287844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287844) {
            ctx->pc = 0x287848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287844u;
            // 0x287848: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28786Cu;
            goto label_28786c;
        }
    }
    ctx->pc = 0x28784Cu;
    // 0x28784c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28784cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x287850: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x287850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287854: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x287854u;
    {
        const bool branch_taken_0x287854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287854) {
            ctx->pc = 0x287858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287854u;
            // 0x287858: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28786Cu;
            goto label_28786c;
        }
    }
    ctx->pc = 0x28785Cu;
    // 0x28785c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28785cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287860: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287860u;
    {
        const bool branch_taken_0x287860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287860) {
            ctx->pc = 0x287864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287860u;
            // 0x287864: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287868u;
            goto label_287868;
        }
    }
    ctx->pc = 0x287868u;
label_287868:
    // 0x287868: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x287868u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_28786c:
    // 0x28786c: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x28786cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x287870: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x287870u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x287874: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287874u;
    {
        const bool branch_taken_0x287874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287874) {
            ctx->pc = 0x287878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287874u;
            // 0x287878: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28787Cu;
            goto label_28787c;
        }
    }
    ctx->pc = 0x28787Cu;
label_28787c:
    // 0x28787c: 0x1012  mflo        $v0
    ctx->pc = 0x28787cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287880: 0x1810  mfhi        $v1
    ctx->pc = 0x287880u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287884: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x287884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287888: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x28788c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28788cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287890: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x287890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x287894: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287898: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28789c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28789Cu;
    {
        const bool branch_taken_0x28789c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28789c) {
            ctx->pc = 0x2878BCu;
            goto label_2878bc;
        }
    }
    ctx->pc = 0x2878A4u;
    // 0x2878a4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2878a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2878a8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2878a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x2878ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2878ACu;
    {
        const bool branch_taken_0x2878ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2878B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2878ACu;
            // 0x2878b0: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878ac) {
            ctx->pc = 0x2878BCu;
            goto label_2878bc;
        }
    }
    ctx->pc = 0x2878B4u;
    // 0x2878b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2878B4u;
    {
        const bool branch_taken_0x2878b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2878b4) {
            ctx->pc = 0x2878B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2878B4u;
            // 0x2878b8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2878BCu;
            goto label_2878bc;
        }
    }
    ctx->pc = 0x2878BCu;
label_2878bc:
    // 0x2878bc: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x2878BCu;
    {
        const bool branch_taken_0x2878bc = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2878BCu;
            // 0x2878c0: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878bc) {
            ctx->pc = 0x287B1Cu;
            goto label_287b1c;
        }
    }
    ctx->pc = 0x2878C4u;
    // 0x2878c4: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x2878c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2878c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2878c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2878cc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2878CCu;
    {
        const bool branch_taken_0x2878cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2878CCu;
            // 0x2878d0: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878cc) {
            ctx->pc = 0x287B18u;
            goto label_287b18;
        }
    }
    ctx->pc = 0x2878D4u;
label_2878d4:
    // 0x2878d4: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x2878d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2878d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2878D8u;
    {
        const bool branch_taken_0x2878d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2878D8u;
            // 0x2878dc: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878d8) {
            ctx->pc = 0x2878F4u;
            goto label_2878f4;
        }
    }
    ctx->pc = 0x2878E0u;
    // 0x2878e0: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x2878e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x2878e4: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x2878e4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2878e8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x2878e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x2878ec: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2878ECu;
    {
        const bool branch_taken_0x2878ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2878F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2878ECu;
            // 0x2878f0: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878ec) {
            ctx->pc = 0x287B1Cu;
            goto label_287b1c;
        }
    }
    ctx->pc = 0x2878F4u;
label_2878f4:
    // 0x2878f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2878f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2878f8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2878f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2878fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2878FCu;
    {
        const bool branch_taken_0x2878fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2878FCu;
            // 0x287900: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2878fc) {
            ctx->pc = 0x287918u;
            goto label_287918;
        }
    }
    ctx->pc = 0x287904u;
    // 0x287904: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x287904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x287908: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x287908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x28790c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28790Cu;
    {
        const bool branch_taken_0x28790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28790Cu;
            // 0x287910: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28790c) {
            ctx->pc = 0x287930u;
            goto label_287930;
        }
    }
    ctx->pc = 0x287914u;
    // 0x287914: 0x0  nop
    ctx->pc = 0x287914u;
    // NOP
label_287918:
    // 0x287918: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x287918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x28791c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287920: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x287920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x287924: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x287924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287928: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x287928u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x28792c: 0x0  nop
    ctx->pc = 0x28792cu;
    // NOP
label_287930:
    // 0x287930: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x287930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x287934: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x287934u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x287938: 0x2442d4f0  addiu       $v0, $v0, -0x2B10
    ctx->pc = 0x287938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956272));
    // 0x28793c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x28793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x287940: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x287940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x287944: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x287944u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287948: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x287948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x28794c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x28794cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x287950: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x287950u;
    {
        const bool branch_taken_0x287950 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x287954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287950u;
            // 0x287954: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287950) {
            ctx->pc = 0x287998u;
            goto label_287998;
        }
    }
    ctx->pc = 0x287958u;
    // 0x287958: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x287958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28795c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28795Cu;
    {
        const bool branch_taken_0x28795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28795Cu;
            // 0x287960: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28795c) {
            ctx->pc = 0x287970u;
            goto label_287970;
        }
    }
    ctx->pc = 0x287964u;
    // 0x287964: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x287964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287968: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287968u;
    {
        const bool branch_taken_0x287968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287968) {
            ctx->pc = 0x287980u;
            goto label_287980;
        }
    }
    ctx->pc = 0x287970u;
label_287970:
    // 0x287970: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x287970u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x287974: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x287974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x287978: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x287978u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28797c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x28797cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287980:
    // 0x287980: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x287980u;
    {
        const bool branch_taken_0x287980 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x287984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287980u;
            // 0x287984: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287980) {
            ctx->pc = 0x287B1Cu;
            goto label_287b1c;
        }
    }
    ctx->pc = 0x287988u;
    // 0x287988: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x287988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x28798c: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x28798cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x287990: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x287990u;
    {
        const bool branch_taken_0x287990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287990u;
            // 0x287994: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287990) {
            ctx->pc = 0x287B18u;
            goto label_287b18;
        }
    }
    ctx->pc = 0x287998u;
label_287998:
    // 0x287998: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x287998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x28799c: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x28799cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x2879a0: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x2879a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x2879a4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x2879a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x2879a8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x2879a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x2879ac: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x2879acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2879b0: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x2879b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2879b4: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x2879b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x2879b8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x2879b8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x2879bc: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x2879bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2879c0: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2879c0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2879c4: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x2879c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2879c8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x2879c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x2879cc: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2879CCu;
    {
        const bool branch_taken_0x2879cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2879cc) {
            ctx->pc = 0x2879D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2879CCu;
            // 0x2879d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2879D4u;
            goto label_2879d4;
        }
    }
    ctx->pc = 0x2879D4u;
label_2879d4:
    // 0x2879d4: 0x1012  mflo        $v0
    ctx->pc = 0x2879d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2879d8: 0x1810  mfhi        $v1
    ctx->pc = 0x2879d8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2879dc: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x2879dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2879e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2879e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2879e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2879e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2879e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2879e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2879ec: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x2879ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2879f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2879f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2879f4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2879f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2879f8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2879F8u;
    {
        const bool branch_taken_0x2879f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2879f8) {
            ctx->pc = 0x2879FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2879F8u;
            // 0x2879fc: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287A2Cu;
            goto label_287a2c;
        }
    }
    ctx->pc = 0x287A00u;
    // 0x287a00: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x287a04: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x287a04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287a08: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287A08u;
    {
        const bool branch_taken_0x287a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A08u;
            // 0x287a0c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a08) {
            ctx->pc = 0x287A28u;
            goto label_287a28;
        }
    }
    ctx->pc = 0x287A10u;
    // 0x287a10: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x287a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x287a14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x287A14u;
    {
        const bool branch_taken_0x287a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287a14) {
            ctx->pc = 0x287A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287A14u;
            // 0x287a18: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287A2Cu;
            goto label_287a2c;
        }
    }
    ctx->pc = 0x287A1Cu;
    // 0x287a1c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x287a1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x287a20: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x287a24: 0x0  nop
    ctx->pc = 0x287a24u;
    // NOP
label_287a28:
    // 0x287a28: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x287a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_287a2c:
    // 0x287a2c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287A2Cu;
    {
        const bool branch_taken_0x287a2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x287a2c) {
            ctx->pc = 0x287A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287A2Cu;
            // 0x287a30: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287A34u;
            goto label_287a34;
        }
    }
    ctx->pc = 0x287A34u;
label_287a34:
    // 0x287a34: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x287a34u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x287a38: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x287a38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x287a3c: 0x1012  mflo        $v0
    ctx->pc = 0x287a3cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287a40: 0x1810  mfhi        $v1
    ctx->pc = 0x287a40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287a44: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x287a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287a48: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x287a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287a4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287a50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287a50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287a54: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x287a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x287a58: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x287a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287a5c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x287a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x287a60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x287A60u;
    {
        const bool branch_taken_0x287a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A60u;
            // 0x287a64: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a60) {
            ctx->pc = 0x287A90u;
            goto label_287a90;
        }
    }
    ctx->pc = 0x287A68u;
    // 0x287a68: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x287a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x287a6c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x287a6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287a70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287A70u;
    {
        const bool branch_taken_0x287a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A70u;
            // 0x287a74: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a70) {
            ctx->pc = 0x287A8Cu;
            goto label_287a8c;
        }
    }
    ctx->pc = 0x287A78u;
    // 0x287a78: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x287a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x287a7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287A7Cu;
    {
        const bool branch_taken_0x287a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287A7Cu;
            // 0x287a80: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287a7c) {
            ctx->pc = 0x287A90u;
            goto label_287a90;
        }
    }
    ctx->pc = 0x287A84u;
    // 0x287a84: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x287a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x287a88: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x287a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_287a8c:
    // 0x287a8c: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x287a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_287a90:
    // 0x287a90: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x287a90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x287a94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x287a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x287a98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x287a98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287a9c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x287a9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287aa0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x287aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x287aa4: 0x480019  multu       $v0, $t0
    ctx->pc = 0x287aa4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287aa8: 0x3810  mfhi        $a3
    ctx->pc = 0x287aa8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x287aac: 0x3012  mflo        $a2
    ctx->pc = 0x287aacu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x287ab0: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x287ab0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x287ab4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287AB4u;
    {
        const bool branch_taken_0x287ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x287AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287AB4u;
            // 0x287ab8: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ab4) {
            ctx->pc = 0x287AD0u;
            goto label_287ad0;
        }
    }
    ctx->pc = 0x287ABCu;
    // 0x287abc: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x287ABCu;
    {
        const bool branch_taken_0x287abc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x287AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287ABCu;
            // 0x287ac0: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287abc) {
            ctx->pc = 0x287AE0u;
            goto label_287ae0;
        }
    }
    ctx->pc = 0x287AC4u;
    // 0x287ac4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287AC4u;
    {
        const bool branch_taken_0x287ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287ac4) {
            ctx->pc = 0x287AE0u;
            goto label_287ae0;
        }
    }
    ctx->pc = 0x287ACCu;
    // 0x287acc: 0x0  nop
    ctx->pc = 0x287accu;
    // NOP
label_287ad0:
    // 0x287ad0: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x287ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x287ad4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x287ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x287ad8: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x287ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287adc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x287adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287ae0:
    // 0x287ae0: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x287AE0u;
    {
        const bool branch_taken_0x287ae0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x287AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287AE0u;
            // 0x287ae4: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287ae0) {
            ctx->pc = 0x287B1Cu;
            goto label_287b1c;
        }
    }
    ctx->pc = 0x287AE8u;
    // 0x287ae8: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x287ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x287aec: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x287aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x287af0: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x287af0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x287af4: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x287af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x287af8: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x287af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x287afc: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x287afcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x287b00: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x287b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x287b04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x287b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x287b08: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x287b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x287b0c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x287b0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x287b10: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x287b10u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x287b14: 0x0  nop
    ctx->pc = 0x287b14u;
    // NOP
label_287b18:
    // 0x287b18: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x287b18u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_287b1c:
    // 0x287b1c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x287b1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287b20: 0x3e00008  jr          $ra
    ctx->pc = 0x287B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287B20u;
            // 0x287b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x287B28u;
}
