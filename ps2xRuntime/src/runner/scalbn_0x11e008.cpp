#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scalbn
// Address: 0x11e008 - 0x11e1bc
void scalbn_0x11e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbn_0x11e008");
#endif

    switch (ctx->pc) {
        case 0x11e068u: goto label_11e068;
        case 0x11e0acu: goto label_11e0ac;
        case 0x11e0d0u: goto label_11e0d0;
        case 0x11e140u: goto label_11e140;
        case 0x11e160u: goto label_11e160;
        case 0x11e1a8u: goto label_11e1a8;
        default: break;
    }

    ctx->pc = 0x11e008u;

    // 0x11e008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11e008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11e00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e010: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11e010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11e014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11e014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e018: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e01c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11e01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e020: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x11e020u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e024: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x11e024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e028: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x11e028u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11e02c: 0x3c117ff0  lui         $s1, 0x7FF0
    ctx->pc = 0x11e02cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32752 << 16));
    // 0x11e030: 0xd11024  and         $v0, $a2, $s1
    ctx->pc = 0x11e030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x11e034: 0x21d03  sra         $v1, $v0, 20
    ctx->pc = 0x11e034u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 20));
    // 0x11e038: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x11E038u;
    {
        const bool branch_taken_0x11e038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E038u;
            // 0x11e03c: 0x240207ff  addiu       $v0, $zero, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e038) {
            ctx->pc = 0x11E09Cu;
            goto label_11e09c;
        }
    }
    ctx->pc = 0x11E040u;
    // 0x11e040: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e048: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e04c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x11e04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x11e050: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x11E050u;
    {
        const bool branch_taken_0x11e050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E050u;
            // 0x11e054: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e050) {
            ctx->pc = 0x11E1A8u;
            goto label_11e1a8;
        }
    }
    ctx->pc = 0x11E058u;
    // 0x11e058: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x11e058u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x11e05c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x11e05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11e060: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11E060u;
    SET_GPR_U32(ctx, 31, 0x11E068u);
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E068u; }
        if (ctx->pc != 0x11E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E068u; }
        if (ctx->pc != 0x11E068u) { return; }
    }
    ctx->pc = 0x11E068u;
label_11e068:
    // 0x11e068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e06c: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x11e06cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e070: 0xd11824  and         $v1, $a2, $s1
    ctx->pc = 0x11e070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x11e074: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11e074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11e078: 0x31d03  sra         $v1, $v1, 20
    ctx->pc = 0x11e078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 20));
    // 0x11e07c: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x11e07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x11e080: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x11e080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11e084: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E084u;
    {
        const bool branch_taken_0x11e084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E084u;
            // 0x11e088: 0x2463ffca  addiu       $v1, $v1, -0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e084) {
            ctx->pc = 0x11E098u;
            goto label_11e098;
        }
    }
    ctx->pc = 0x11E08Cu;
    // 0x11e08c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11e090: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x11E090u;
    {
        const bool branch_taken_0x11e090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E090u;
            // 0x11e094: 0xdc451968  ld          $a1, 0x1968($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e090) {
            ctx->pc = 0x11E1A0u;
            goto label_11e1a0;
        }
    }
    ctx->pc = 0x11E098u;
label_11e098:
    // 0x11e098: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x11e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_11e09c:
    // 0x11e09c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E09Cu;
    {
        const bool branch_taken_0x11e09c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E09Cu;
            // 0x11e0a0: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e09c) {
            ctx->pc = 0x11E0B4u;
            goto label_11e0b4;
        }
    }
    ctx->pc = 0x11E0A4u;
    // 0x11e0a4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11E0A4u;
    SET_GPR_U32(ctx, 31, 0x11E0ACu);
    ctx->pc = 0x11E0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0A4u;
            // 0x11e0a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0ACu; }
        if (ctx->pc != 0x11E0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0ACu; }
        if (ctx->pc != 0x11E0ACu) { return; }
    }
    ctx->pc = 0x11E0ACu;
label_11e0ac:
    // 0x11e0ac: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11E0ACu;
    {
        const bool branch_taken_0x11e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0ACu;
            // 0x11e0b0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0ac) {
            ctx->pc = 0x11E1ACu;
            goto label_11e1ac;
        }
    }
    ctx->pc = 0x11E0B4u;
label_11e0b4:
    // 0x11e0b4: 0x286207ff  slti        $v0, $v1, 0x7FF
    ctx->pc = 0x11e0b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2047) ? 1 : 0);
    // 0x11e0b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E0B8u;
    {
        const bool branch_taken_0x11e0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0B8u;
            // 0x11e0bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0b8) {
            ctx->pc = 0x11E0DCu;
            goto label_11e0dc;
        }
    }
    ctx->pc = 0x11E0C0u;
    // 0x11e0c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11e0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0c4: 0xdc501970  ld          $s0, 0x1970($v0)
    ctx->pc = 0x11e0c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 6512)));
    // 0x11e0c8: 0xc047678  jal         func_11D9E0
    ctx->pc = 0x11E0C8u;
    SET_GPR_U32(ctx, 31, 0x11E0D0u);
    ctx->pc = 0x11E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0C8u;
            // 0x11e0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D9E0u;
    if (runtime->hasFunction(0x11D9E0u)) {
        auto targetFn = runtime->lookupFunction(0x11D9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0D0u; }
        if (ctx->pc != 0x11E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x11d9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E0D0u; }
        if (ctx->pc != 0x11E0D0u) { return; }
    }
    ctx->pc = 0x11E0D0u;
label_11e0d0:
    // 0x11e0d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11E0D4u;
    {
        const bool branch_taken_0x11e0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0D4u;
            // 0x11e0d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0d4) {
            ctx->pc = 0x11E1A0u;
            goto label_11e1a0;
        }
    }
    ctx->pc = 0x11E0DCu;
label_11e0dc:
    // 0x11e0dc: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11E0DCu;
    {
        const bool branch_taken_0x11e0dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E0DCu;
            // 0x11e0e0: 0x32d00  sll         $a1, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0dc) {
            ctx->pc = 0x11E118u;
            goto label_11e118;
        }
    }
    ctx->pc = 0x11E0E4u;
    // 0x11e0e4: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x11e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x11e0e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e0ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x11e0ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0f0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e0f4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x11e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11e0f8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11e0f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x11e0fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11e0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11e100: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x11e100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x11e104: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e108: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x11e108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e10c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x11E10Cu;
    {
        const bool branch_taken_0x11e10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E10Cu;
            // 0x11e110: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e10c) {
            ctx->pc = 0x11E1A8u;
            goto label_11e1a8;
        }
    }
    ctx->pc = 0x11E114u;
    // 0x11e114: 0x0  nop
    ctx->pc = 0x11e114u;
    // NOP
label_11e118:
    // 0x11e118: 0x2862ffcb  slti        $v0, $v1, -0x35
    ctx->pc = 0x11e118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x11e11c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11E11Cu;
    {
        const bool branch_taken_0x11e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E11Cu;
            // 0x11e120: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e11c) {
            ctx->pc = 0x11E16Cu;
            goto label_11e16c;
        }
    }
    ctx->pc = 0x11E124u;
    // 0x11e124: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11e124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11e128: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11E128u;
    {
        const bool branch_taken_0x11e128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E128u;
            // 0x11e12c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e128) {
            ctx->pc = 0x11E14Cu;
            goto label_11e14c;
        }
    }
    ctx->pc = 0x11E130u;
    // 0x11e130: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11e130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e134: 0xdc501970  ld          $s0, 0x1970($v0)
    ctx->pc = 0x11e134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 6512)));
    // 0x11e138: 0xc047678  jal         func_11D9E0
    ctx->pc = 0x11E138u;
    SET_GPR_U32(ctx, 31, 0x11E140u);
    ctx->pc = 0x11E13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E138u;
            // 0x11e13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D9E0u;
    if (runtime->hasFunction(0x11D9E0u)) {
        auto targetFn = runtime->lookupFunction(0x11D9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E140u; }
        if (ctx->pc != 0x11E140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x11d9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E140u; }
        if (ctx->pc != 0x11E140u) { return; }
    }
    ctx->pc = 0x11E140u;
label_11e140:
    // 0x11e140: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e144: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11E144u;
    {
        const bool branch_taken_0x11e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E144u;
            // 0x11e148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e144) {
            ctx->pc = 0x11E1A0u;
            goto label_11e1a0;
        }
    }
    ctx->pc = 0x11E14Cu;
label_11e14c:
    // 0x11e14c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11e150: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11e150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e154: 0xdc501968  ld          $s0, 0x1968($v0)
    ctx->pc = 0x11e154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 6504)));
    // 0x11e158: 0xc047678  jal         func_11D9E0
    ctx->pc = 0x11E158u;
    SET_GPR_U32(ctx, 31, 0x11E160u);
    ctx->pc = 0x11E15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E158u;
            // 0x11e15c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D9E0u;
    if (runtime->hasFunction(0x11D9E0u)) {
        auto targetFn = runtime->lookupFunction(0x11D9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E160u; }
        if (ctx->pc != 0x11E160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copysign_0x11d9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E160u; }
        if (ctx->pc != 0x11E160u) { return; }
    }
    ctx->pc = 0x11E160u;
label_11e160:
    // 0x11e160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e164: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11E164u;
    {
        const bool branch_taken_0x11e164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E164u;
            // 0x11e168: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e164) {
            ctx->pc = 0x11E1A0u;
            goto label_11e1a0;
        }
    }
    ctx->pc = 0x11E16Cu;
label_11e16c:
    // 0x11e16c: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x11e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
    // 0x11e170: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x11e170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x11e174: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e178: 0x32d00  sll         $a1, $v1, 20
    ctx->pc = 0x11e178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x11e17c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e180: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x11e180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11e184: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11e188: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11e188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x11e18c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x11e18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x11e190: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11e190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e194: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x11e194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x11e198: 0x3405f240  ori         $a1, $zero, 0xF240
    ctx->pc = 0x11e198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x11e19c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11e19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_11e1a0:
    // 0x11e1a0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11E1A0u;
    SET_GPR_U32(ctx, 31, 0x11E1A8u);
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E1A8u; }
        if (ctx->pc != 0x11E1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E1A8u; }
        if (ctx->pc != 0x11E1A8u) { return; }
    }
    ctx->pc = 0x11E1A8u;
label_11e1a8:
    // 0x11e1a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11e1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11e1ac:
    // 0x11e1ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11e1acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e1b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11e1b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E1B4u;
            // 0x11e1b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E1BCu;
}
