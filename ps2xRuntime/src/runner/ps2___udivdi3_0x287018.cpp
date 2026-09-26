#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __udivdi3
// Address: 0x287018 - 0x2875e8
void ps2___udivdi3_0x287018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___udivdi3_0x287018");
#endif

    ctx->pc = 0x287018u;

    // 0x287018: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x287018u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x28701c: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x28701cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x287020: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x287020u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x287024: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x287024u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x287028: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x287028u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x28702c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x28702cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x287030: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x287030u;
    {
        const bool branch_taken_0x287030 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x287034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287030u;
            // 0x287034: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287030) {
            ctx->pc = 0x2873FCu;
            goto label_2873fc;
        }
    }
    ctx->pc = 0x287038u;
    // 0x287038: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x287038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x28703c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x28703Cu;
    {
        const bool branch_taken_0x28703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28703Cu;
            // 0x287040: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28703c) {
            ctx->pc = 0x28718Cu;
            goto label_28718c;
        }
    }
    ctx->pc = 0x287044u;
    // 0x287044: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x287044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287048: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287048u;
    {
        const bool branch_taken_0x287048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287048u;
            // 0x28704c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287048) {
            ctx->pc = 0x287060u;
            goto label_287060;
        }
    }
    ctx->pc = 0x287050u;
    // 0x287050: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x287050u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x287054: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x287054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x287058: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x287058u;
    {
        const bool branch_taken_0x287058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287058u;
            // 0x28705c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287058) {
            ctx->pc = 0x287078u;
            goto label_287078;
        }
    }
    ctx->pc = 0x287060u;
label_287060:
    // 0x287060: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x287060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x287064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287068: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x287068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28706c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x28706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287070: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x287070u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x287074: 0x0  nop
    ctx->pc = 0x287074u;
    // NOP
label_287078:
    // 0x287078: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x287078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x28707c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x28707cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x287080: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x287080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x287084: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x287084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x287088: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x287088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28708c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28708cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287090: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x287090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x287094: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x287094u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287098: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x287098u;
    {
        const bool branch_taken_0x287098 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x28709Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287098u;
            // 0x28709c: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287098) {
            ctx->pc = 0x2870B4u;
            goto label_2870b4;
        }
    }
    ctx->pc = 0x2870A0u;
    // 0x2870a0: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x2870a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2870a4: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x2870a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x2870a8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2870a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2870ac: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x2870acu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2870b0: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2870b0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_2870b4:
    // 0x2870b4: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x2870b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x2870b8: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x2870b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2870bc: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x2870bcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x2870c0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x2870c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x2870c4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2870C4u;
    {
        const bool branch_taken_0x2870c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2870c4) {
            ctx->pc = 0x2870C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2870C4u;
            // 0x2870c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2870CCu;
            goto label_2870cc;
        }
    }
    ctx->pc = 0x2870CCu;
label_2870cc:
    // 0x2870cc: 0x1012  mflo        $v0
    ctx->pc = 0x2870ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2870d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2870d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2870d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2870d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2870d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2870d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2870dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2870dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2870e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2870e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2870e4: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x2870e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2870e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2870e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2870ec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2870ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2870f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2870F0u;
    {
        const bool branch_taken_0x2870f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2870f0) {
            ctx->pc = 0x2870F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2870F0u;
            // 0x2870f4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287124u;
            goto label_287124;
        }
    }
    ctx->pc = 0x2870F8u;
    // 0x2870f8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2870f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2870fc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2870fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287100: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287100u;
    {
        const bool branch_taken_0x287100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287100u;
            // 0x287104: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287100) {
            ctx->pc = 0x287120u;
            goto label_287120;
        }
    }
    ctx->pc = 0x287108u;
    // 0x287108: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28710c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28710Cu;
    {
        const bool branch_taken_0x28710c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28710c) {
            ctx->pc = 0x287110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28710Cu;
            // 0x287110: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287124u;
            goto label_287124;
        }
    }
    ctx->pc = 0x287114u;
    // 0x287114: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x287114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x287118: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28711c: 0x0  nop
    ctx->pc = 0x28711cu;
    // NOP
label_287120:
    // 0x287120: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_287124:
    // 0x287124: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287124u;
    {
        const bool branch_taken_0x287124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287124) {
            ctx->pc = 0x287128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287124u;
            // 0x287128: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28712Cu;
            goto label_28712c;
        }
    }
    ctx->pc = 0x28712Cu;
label_28712c:
    // 0x28712c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x28712cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x287130: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x287130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x287134: 0x1012  mflo        $v0
    ctx->pc = 0x287134u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287138: 0x1810  mfhi        $v1
    ctx->pc = 0x287138u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28713c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28713cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287140: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x287140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287144: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287148: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287148u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28714c: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x28714cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x287150: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287154: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287158: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287158u;
    {
        const bool branch_taken_0x287158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28715Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287158u;
            // 0x28715c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287158) {
            ctx->pc = 0x287178u;
            goto label_287178;
        }
    }
    ctx->pc = 0x287160u;
    // 0x287160: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x287160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287164u;
    {
        const bool branch_taken_0x287164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287164u;
            // 0x287168: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287164) {
            ctx->pc = 0x287178u;
            goto label_287178;
        }
    }
    ctx->pc = 0x28716Cu;
    // 0x28716c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28716cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287170: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287170u;
    {
        const bool branch_taken_0x287170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x287170) {
            ctx->pc = 0x287174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287170u;
            // 0x287174: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287178u;
            goto label_287178;
        }
    }
    ctx->pc = 0x287178u;
label_287178:
    // 0x287178: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x287178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28717c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28717cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x287180: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x287180u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287184: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x287184u;
    {
        const bool branch_taken_0x287184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287184u;
            // 0x287188: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287184) {
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x28718Cu;
label_28718c:
    // 0x28718c: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x28718Cu;
    {
        const bool branch_taken_0x28718c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x287190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28718Cu;
            // 0x287190: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28718c) {
            ctx->pc = 0x2871B8u;
            goto label_2871b8;
        }
    }
    ctx->pc = 0x287194u;
    // 0x287194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287198: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287198u;
    {
        const bool branch_taken_0x287198 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x287198) {
            ctx->pc = 0x28719Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287198u;
            // 0x28719c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2871A0u;
            goto label_2871a0;
        }
    }
    ctx->pc = 0x2871A0u;
label_2871a0:
    // 0x2871a0: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x2871a0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2871a4: 0x1012  mflo        $v0
    ctx->pc = 0x2871a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2871a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2871a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2871ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2871acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2871b0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2871b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2871b4: 0x0  nop
    ctx->pc = 0x2871b4u;
    // NOP
label_2871b8:
    // 0x2871b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2871B8u;
    {
        const bool branch_taken_0x2871b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2871BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871B8u;
            // 0x2871bc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871b8) {
            ctx->pc = 0x2871D0u;
            goto label_2871d0;
        }
    }
    ctx->pc = 0x2871C0u;
    // 0x2871c0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2871c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2871c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2871c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2871c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2871C8u;
    {
        const bool branch_taken_0x2871c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2871CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2871C8u;
            // 0x2871cc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2871c8) {
            ctx->pc = 0x2871E8u;
            goto label_2871e8;
        }
    }
    ctx->pc = 0x2871D0u;
label_2871d0:
    // 0x2871d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2871d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2871d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2871d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2871d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2871d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2871dc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2871dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2871e0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2871e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x2871e4: 0x0  nop
    ctx->pc = 0x2871e4u;
    // NOP
label_2871e8:
    // 0x2871e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2871e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2871ec: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2871ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2871f0: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x2871f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x2871f4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2871f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2871f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2871f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2871fc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2871fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287200: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x287200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x287204: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x287204u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287208: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x287208u;
    {
        const bool branch_taken_0x287208 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28720Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287208u;
            // 0x28720c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287208) {
            ctx->pc = 0x287224u;
            goto label_287224;
        }
    }
    ctx->pc = 0x287210u;
    // 0x287210: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x287214: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x287214u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x287218: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x287218u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x28721c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x28721Cu;
    {
        const bool branch_taken_0x28721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28721Cu;
            // 0x287220: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28721c) {
            ctx->pc = 0x287328u;
            goto label_287328;
        }
    }
    ctx->pc = 0x287224u;
label_287224:
    // 0x287224: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x287224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x287228: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x28722c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x287230: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x287230u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x287234: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x287234u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x287238: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x287238u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28723c: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x28723cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x287240: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x287240u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x287244: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x287244u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x287248: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x287248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28724c: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x28724cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x287250: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287250u;
    {
        const bool branch_taken_0x287250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287250) {
            ctx->pc = 0x287254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287250u;
            // 0x287254: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287258u;
            goto label_287258;
        }
    }
    ctx->pc = 0x287258u;
label_287258:
    // 0x287258: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x287258u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28725c: 0x1012  mflo        $v0
    ctx->pc = 0x28725cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287260: 0x1810  mfhi        $v1
    ctx->pc = 0x287260u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287264: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x287264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287268: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x287268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28726c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287270: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287270u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287274: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x287274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x287278: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28727c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28727cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287280: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x287280u;
    {
        const bool branch_taken_0x287280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287280) {
            ctx->pc = 0x287284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287280u;
            // 0x287284: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2872B4u;
            goto label_2872b4;
        }
    }
    ctx->pc = 0x287288u;
    // 0x287288: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28728c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x28728cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287290: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287290u;
    {
        const bool branch_taken_0x287290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287290u;
            // 0x287294: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287290) {
            ctx->pc = 0x2872B0u;
            goto label_2872b0;
        }
    }
    ctx->pc = 0x287298u;
    // 0x287298: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28729c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28729Cu;
    {
        const bool branch_taken_0x28729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28729c) {
            ctx->pc = 0x2872A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28729Cu;
            // 0x2872a0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2872B4u;
            goto label_2872b4;
        }
    }
    ctx->pc = 0x2872A4u;
    // 0x2872a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2872a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2872a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2872a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2872ac: 0x0  nop
    ctx->pc = 0x2872acu;
    // NOP
label_2872b0:
    // 0x2872b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2872b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2872b4:
    // 0x2872b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2872B4u;
    {
        const bool branch_taken_0x2872b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2872b4) {
            ctx->pc = 0x2872B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2872B4u;
            // 0x2872b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2872BCu;
            goto label_2872bc;
        }
    }
    ctx->pc = 0x2872BCu;
label_2872bc:
    // 0x2872bc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2872bcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2872c0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2872c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2872c4: 0x1012  mflo        $v0
    ctx->pc = 0x2872c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2872c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2872c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2872cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2872ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2872d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2872d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2872d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2872d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2872d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2872d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2872dc: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2872dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2872e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2872e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2872e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2872e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2872e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2872E8u;
    {
        const bool branch_taken_0x2872e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2872ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872E8u;
            // 0x2872ec: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872e8) {
            ctx->pc = 0x287318u;
            goto label_287318;
        }
    }
    ctx->pc = 0x2872F0u;
    // 0x2872f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2872f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2872f4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2872f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2872f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2872F8u;
    {
        const bool branch_taken_0x2872f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2872FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2872F8u;
            // 0x2872fc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2872f8) {
            ctx->pc = 0x287314u;
            goto label_287314;
        }
    }
    ctx->pc = 0x287300u;
    // 0x287300: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287304u;
    {
        const bool branch_taken_0x287304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287304u;
            // 0x287308: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287304) {
            ctx->pc = 0x287318u;
            goto label_287318;
        }
    }
    ctx->pc = 0x28730Cu;
    // 0x28730c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x287310: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x287310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_287314:
    // 0x287314: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x287314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_287318:
    // 0x287318: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x287318u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28731c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x287320: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x287320u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287324: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x287324u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_287328:
    // 0x287328: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x287328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28732c: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x28732cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x287330: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x287330u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x287334: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x287334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287338: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287338u;
    {
        const bool branch_taken_0x287338 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287338) {
            ctx->pc = 0x28733Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287338u;
            // 0x28733c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x287340u;
            goto label_287340;
        }
    }
    ctx->pc = 0x287340u;
label_287340:
    // 0x287340: 0x1012  mflo        $v0
    ctx->pc = 0x287340u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287344: 0x1810  mfhi        $v1
    ctx->pc = 0x287344u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x287348: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x287348u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28734c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287350: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287354: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287354u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x287358: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x287358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x28735c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287360: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x287360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287364: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x287364u;
    {
        const bool branch_taken_0x287364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287364) {
            ctx->pc = 0x287368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287364u;
            // 0x287368: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287394u;
            goto label_287394;
        }
    }
    ctx->pc = 0x28736Cu;
    // 0x28736c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28736cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x287370: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x287370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287374: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287374u;
    {
        const bool branch_taken_0x287374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287374u;
            // 0x287378: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287374) {
            ctx->pc = 0x287390u;
            goto label_287390;
        }
    }
    ctx->pc = 0x28737Cu;
    // 0x28737c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28737cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x287380: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x287380u;
    {
        const bool branch_taken_0x287380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287380) {
            ctx->pc = 0x287384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287380u;
            // 0x287384: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287394u;
            goto label_287394;
        }
    }
    ctx->pc = 0x287388u;
    // 0x287388: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x287388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28738c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_287390:
    // 0x287390: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x287390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_287394:
    // 0x287394: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287394u;
    {
        const bool branch_taken_0x287394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x287394) {
            ctx->pc = 0x287398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287394u;
            // 0x287398: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28739Cu;
            goto label_28739c;
        }
    }
    ctx->pc = 0x28739Cu;
label_28739c:
    // 0x28739c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x28739cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2873a0: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2873a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2873a4: 0x1012  mflo        $v0
    ctx->pc = 0x2873a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2873a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2873a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2873ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2873acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2873b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2873b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2873b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2873b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2873b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2873b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2873bc: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x2873bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2873c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2873c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2873c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2873c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2873c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2873C8u;
    {
        const bool branch_taken_0x2873c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873C8u;
            // 0x2873cc: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873c8) {
            ctx->pc = 0x2873E8u;
            goto label_2873e8;
        }
    }
    ctx->pc = 0x2873D0u;
    // 0x2873d0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2873d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2873d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2873D4u;
    {
        const bool branch_taken_0x2873d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2873D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873D4u;
            // 0x2873d8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873d4) {
            ctx->pc = 0x2873E8u;
            goto label_2873e8;
        }
    }
    ctx->pc = 0x2873DCu;
    // 0x2873dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2873dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2873e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2873E0u;
    {
        const bool branch_taken_0x2873e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2873e0) {
            ctx->pc = 0x2873E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2873E0u;
            // 0x2873e4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2873E8u;
            goto label_2873e8;
        }
    }
    ctx->pc = 0x2873E8u;
label_2873e8:
    // 0x2873e8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2873e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2873ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2873ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2873f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2873f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2873f4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2873F4u;
    {
        const bool branch_taken_0x2873f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2873F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2873F4u;
            // 0x2873f8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2873f4) {
            ctx->pc = 0x2875D0u;
            goto label_2875d0;
        }
    }
    ctx->pc = 0x2873FCu;
label_2873fc:
    // 0x2873fc: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x2873fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287400: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x287400u;
    {
        const bool branch_taken_0x287400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287400u;
            // 0x287404: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287400) {
            ctx->pc = 0x287410u;
            goto label_287410;
        }
    }
    ctx->pc = 0x287408u;
    // 0x287408: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x287408u;
    {
        const bool branch_taken_0x287408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28740Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287408u;
            // 0x28740c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287408) {
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x287410u;
label_287410:
    // 0x287410: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x287410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287414: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287414u;
    {
        const bool branch_taken_0x287414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287414u;
            // 0x287418: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287414) {
            ctx->pc = 0x287430u;
            goto label_287430;
        }
    }
    ctx->pc = 0x28741Cu;
    // 0x28741c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x28741cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x287420: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x287420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x287424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x287424u;
    {
        const bool branch_taken_0x287424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287424u;
            // 0x287428: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287424) {
            ctx->pc = 0x287448u;
            goto label_287448;
        }
    }
    ctx->pc = 0x28742Cu;
    // 0x28742c: 0x0  nop
    ctx->pc = 0x28742cu;
    // NOP
label_287430:
    // 0x287430: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x287430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x287434: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x287434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x287438: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x287438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28743c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x28743cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287440: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x287440u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
    // 0x287444: 0x0  nop
    ctx->pc = 0x287444u;
    // NOP
label_287448:
    // 0x287448: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x287448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x28744c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x28744cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x287450: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x287450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x287454: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x287454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x287458: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x287458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28745c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28745cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x287460: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x287460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x287464: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x287464u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x287468: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x287468u;
    {
        const bool branch_taken_0x287468 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x287468) {
            ctx->pc = 0x28746Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287468u;
            // 0x28746c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287490u;
            goto label_287490;
        }
    }
    ctx->pc = 0x287470u;
    // 0x287470: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x287470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x287474: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x287474u;
    {
        const bool branch_taken_0x287474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287474u;
            // 0x287478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287474) {
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x28747Cu;
    // 0x28747c: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x28747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x287480: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x287480u;
    {
        const bool branch_taken_0x287480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287480u;
            // 0x287484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287480) {
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x287488u;
    // 0x287488: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x287488u;
    {
        const bool branch_taken_0x287488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287488u;
            // 0x28748c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287488) {
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x287490u;
label_287490:
    // 0x287490: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x287490u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x287494: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x287494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x287498: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x287498u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x28749c: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x28749cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2874a0: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x2874a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2874a4: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x2874a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2874a8: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x2874a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2874ac: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2874acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2874b0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2874b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2874b4: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x2874b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2874b8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2874b8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2874bc: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x2874bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2874c0: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x2874c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x2874c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2874C4u;
    {
        const bool branch_taken_0x2874c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874c4) {
            ctx->pc = 0x2874C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2874C4u;
            // 0x2874c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2874CCu;
            goto label_2874cc;
        }
    }
    ctx->pc = 0x2874CCu;
label_2874cc:
    // 0x2874cc: 0x1012  mflo        $v0
    ctx->pc = 0x2874ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2874d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2874d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2874d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2874d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2874d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2874d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2874dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2874dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2874e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2874e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2874e4: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x2874e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2874e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2874e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2874ec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2874ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2874f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2874F0u;
    {
        const bool branch_taken_0x2874f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2874f0) {
            ctx->pc = 0x2874F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2874F0u;
            // 0x2874f4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287524u;
            goto label_287524;
        }
    }
    ctx->pc = 0x2874F8u;
    // 0x2874f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2874f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2874fc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2874fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287500: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x287500u;
    {
        const bool branch_taken_0x287500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287500u;
            // 0x287504: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287500) {
            ctx->pc = 0x287520u;
            goto label_287520;
        }
    }
    ctx->pc = 0x287508u;
    // 0x287508: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x287508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28750c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28750Cu;
    {
        const bool branch_taken_0x28750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28750c) {
            ctx->pc = 0x287510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28750Cu;
            // 0x287510: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x287524u;
            goto label_287524;
        }
    }
    ctx->pc = 0x287514u;
    // 0x287514: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x287514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x287518: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x287518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28751c: 0x0  nop
    ctx->pc = 0x28751cu;
    // NOP
label_287520:
    // 0x287520: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x287520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_287524:
    // 0x287524: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x287524u;
    {
        const bool branch_taken_0x287524 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x287524) {
            ctx->pc = 0x287528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x287524u;
            // 0x287528: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28752Cu;
            goto label_28752c;
        }
    }
    ctx->pc = 0x28752Cu;
label_28752c:
    // 0x28752c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x28752cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x287530: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x287530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x287534: 0x1012  mflo        $v0
    ctx->pc = 0x287534u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x287538: 0x1810  mfhi        $v1
    ctx->pc = 0x287538u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28753c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28753cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287540: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x287540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x287544: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x287544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x287548: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x287548u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28754c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x28754cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x287550: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x287550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x287554: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x287554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x287558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x287558u;
    {
        const bool branch_taken_0x287558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28755Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287558u;
            // 0x28755c: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287558) {
            ctx->pc = 0x287588u;
            goto label_287588;
        }
    }
    ctx->pc = 0x287560u;
    // 0x287560: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x287560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x287564: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x287564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x287568: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287568u;
    {
        const bool branch_taken_0x287568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287568u;
            // 0x28756c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287568) {
            ctx->pc = 0x287584u;
            goto label_287584;
        }
    }
    ctx->pc = 0x287570u;
    // 0x287570: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x287570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x287574: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x287574u;
    {
        const bool branch_taken_0x287574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x287574u;
            // 0x287578: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287574) {
            ctx->pc = 0x287588u;
            goto label_287588;
        }
    }
    ctx->pc = 0x28757Cu;
    // 0x28757c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x287580: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x287580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_287584:
    // 0x287584: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x287584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_287588:
    // 0x287588: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x287588u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28758c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28758cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x287590: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x287590u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x287594: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x287594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x287598: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x287598u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28759c: 0x3010  mfhi        $a2
    ctx->pc = 0x28759cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2875a0: 0x2012  mflo        $a0
    ctx->pc = 0x2875a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2875a4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2875a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2875a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2875A8u;
    {
        const bool branch_taken_0x2875a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2875a8) {
            ctx->pc = 0x2875ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2875A8u;
            // 0x2875ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2875C8u;
            goto label_2875c8;
        }
    }
    ctx->pc = 0x2875B0u;
    // 0x2875b0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2875B0u;
    {
        const bool branch_taken_0x2875b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2875B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2875B0u;
            // 0x2875b4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875b0) {
            ctx->pc = 0x2875D0u;
            goto label_2875d0;
        }
    }
    ctx->pc = 0x2875B8u;
    // 0x2875b8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2875b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2875bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2875BCu;
    {
        const bool branch_taken_0x2875bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2875C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2875BCu;
            // 0x2875c0: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2875bc) {
            ctx->pc = 0x2875D4u;
            goto label_2875d4;
        }
    }
    ctx->pc = 0x2875C4u;
    // 0x2875c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2875c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2875c8:
    // 0x2875c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2875c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2875cc: 0x0  nop
    ctx->pc = 0x2875ccu;
    // NOP
label_2875d0:
    // 0x2875d0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2875d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_2875d4:
    // 0x2875d4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x2875d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2875d8: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x2875d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2875dc: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x2875dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x2875e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2875E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2875E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2875E0u;
            // 0x2875e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2875E8u;
}
