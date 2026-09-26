#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeMsg__7CDC2MesFP13CGameDataUsed
// Address: 0x21dfc0 - 0x21e104
void MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0");
#endif

    switch (ctx->pc) {
        case 0x21e01cu: goto label_21e01c;
        case 0x21e034u: goto label_21e034;
        case 0x21e058u: goto label_21e058;
        case 0x21e068u: goto label_21e068;
        case 0x21e078u: goto label_21e078;
        case 0x21e09cu: goto label_21e09c;
        case 0x21e0d8u: goto label_21e0d8;
        case 0x21e0e8u: goto label_21e0e8;
        default: break;
    }

    ctx->pc = 0x21dfc0u;

    // 0x21dfc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21dfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21dfc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21dfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21dfc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21dfcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21dfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21dfd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21dfd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21dfd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21dfd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfdc: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x21DFDCu;
    {
        const bool branch_taken_0x21dfdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFDCu;
            // 0x21dfe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfdc) {
            ctx->pc = 0x21E0E0u;
            goto label_21e0e0;
        }
    }
    ctx->pc = 0x21DFE4u;
    // 0x21dfe4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x21dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x21dfe8: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x21dfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x21dfec: 0x24a5ca68  addiu       $a1, $a1, -0x3598
    ctx->pc = 0x21dfecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953576));
    // 0x21dff0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x21dff0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21dff4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x21dff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dff8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x21dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x21dffc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21dffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21e000: 0x86510002  lh          $s1, 0x2($s2)
    ctx->pc = 0x21e000u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x21e004: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x21e004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x21e008: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x21E008u;
    {
        const bool branch_taken_0x21e008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E008u;
            // 0x21e00c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e008) {
            ctx->pc = 0x21E080u;
            goto label_21e080;
        }
    }
    ctx->pc = 0x21E010u;
    // 0x21e010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e014: 0xc0657f8  jal         func_195FE0
    ctx->pc = 0x21E014u;
    SET_GPR_U32(ctx, 31, 0x21E01Cu);
    ctx->pc = 0x21E018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E014u;
            // 0x21e018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E01Cu; }
        if (ctx->pc != 0x21E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E01Cu; }
        if (ctx->pc != 0x21E01Cu) { return; }
    }
    ctx->pc = 0x21E01Cu;
label_21e01c:
    // 0x21e01c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21e01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e020: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x21e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x21e024: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E024u;
    {
        const bool branch_taken_0x21e024 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E024u;
            // 0x21e028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e024) {
            ctx->pc = 0x21E048u;
            goto label_21e048;
        }
    }
    ctx->pc = 0x21E02Cu;
    // 0x21e02c: 0xc05831c  jal         func_160C70
    ctx->pc = 0x21E02Cu;
    SET_GPR_U32(ctx, 31, 0x21E034u);
    ctx->pc = 0x21E030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E02Cu;
            // 0x21e030: 0xc78c94e8  lwc1        $f12, -0x6B18($gp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E034u; }
        if (ctx->pc != 0x21E034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E034u; }
        if (ctx->pc != 0x21E034u) { return; }
    }
    ctx->pc = 0x21E034u;
label_21e034:
    // 0x21e034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21e034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e038: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E038u;
    {
        const bool branch_taken_0x21e038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21e038) {
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21E040u;
    // 0x21e040: 0x241000a2  addiu       $s0, $zero, 0xA2
    ctx->pc = 0x21e040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_21e044:
    // 0x21e044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e048:
    // 0x21e048: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x21e048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x21e04c: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x21e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x21e050: 0xc065fd4  jal         func_197F50
    ctx->pc = 0x21E050u;
    SET_GPR_U32(ctx, 31, 0x21E058u);
    ctx->pc = 0x21E054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E050u;
            // 0x21e054: 0x27a70068  addiu       $a3, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197F50u;
    if (runtime->hasFunction(0x197F50u)) {
        auto targetFn = runtime->lookupFunction(0x197F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E058u; }
        if (ctx->pc != 0x21E058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMsgAddInfo__13CGameDataUsedFPPcPPcPi_0x197f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E058u; }
        if (ctx->pc != 0x21E058u) { return; }
    }
    ctx->pc = 0x21E058u;
label_21e058:
    // 0x21e058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e05c: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x21e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x21e060: 0xc087720  jal         func_21DC80
    ctx->pc = 0x21E060u;
    SET_GPR_U32(ctx, 31, 0x21E068u);
    ctx->pc = 0x21E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E060u;
            // 0x21e064: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E068u; }
        if (ctx->pc != 0x21E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E068u; }
        if (ctx->pc != 0x21E068u) { return; }
    }
    ctx->pc = 0x21E068u;
label_21e068:
    // 0x21e068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e06c: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x21e06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x21e070: 0xc087778  jal         func_21DDE0
    ctx->pc = 0x21E070u;
    SET_GPR_U32(ctx, 31, 0x21E078u);
    ctx->pc = 0x21E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E070u;
            // 0x21e074: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E078u; }
        if (ctx->pc != 0x21E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E078u; }
        if (ctx->pc != 0x21E078u) { return; }
    }
    ctx->pc = 0x21E078u;
label_21e078:
    // 0x21e078: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21E078u;
    {
        const bool branch_taken_0x21e078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E078u;
            // 0x21e07c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e078) {
            ctx->pc = 0x21E0A0u;
            goto label_21e0a0;
        }
    }
    ctx->pc = 0x21E080u;
label_21e080:
    // 0x21e080: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21e080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21e084: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x21e084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x21e088: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x21e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x21e08c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21e08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21e090: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x21e090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21e094: 0xc0876ec  jal         func_21DBB0
    ctx->pc = 0x21E094u;
    SET_GPR_U32(ctx, 31, 0x21E09Cu);
    ctx->pc = 0x21E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E094u;
            // 0x21e098: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E09Cu; }
        if (ctx->pc != 0x21E09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E09Cu; }
        if (ctx->pc != 0x21E09Cu) { return; }
    }
    ctx->pc = 0x21E09Cu;
label_21e09c:
    // 0x21e09c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e0a0:
    // 0x21e0a0: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x21e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    // 0x21e0a4: 0xae631ac8  sw          $v1, 0x1AC8($s3)
    ctx->pc = 0x21e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6856), GPR_U32(ctx, 3));
    // 0x21e0a8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E0A8u;
    {
        const bool branch_taken_0x21e0a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0A8u;
            // 0x21e0ac: 0xae601acc  sw          $zero, 0x1ACC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6860), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0a8) {
            ctx->pc = 0x21E0B8u;
            goto label_21e0b8;
        }
    }
    ctx->pc = 0x21E0B0u;
    // 0x21e0b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21E0B0u;
    {
        const bool branch_taken_0x21e0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0B0u;
            // 0x21e0b4: 0xae601ac8  sw          $zero, 0x1AC8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 6856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0b0) {
            ctx->pc = 0x21E0CCu;
            goto label_21e0cc;
        }
    }
    ctx->pc = 0x21E0B8u;
label_21e0b8:
    // 0x21e0b8: 0x24020137  addiu       $v0, $zero, 0x137
    ctx->pc = 0x21e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x21e0bc: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E0BCu;
    {
        const bool branch_taken_0x21e0bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0BCu;
            // 0x21e0c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0bc) {
            ctx->pc = 0x21E0D0u;
            goto label_21e0d0;
        }
    }
    ctx->pc = 0x21E0C4u;
    // 0x21e0c4: 0xae631acc  sw          $v1, 0x1ACC($s3)
    ctx->pc = 0x21e0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6860), GPR_U32(ctx, 3));
    // 0x21e0c8: 0xae601ac8  sw          $zero, 0x1AC8($s3)
    ctx->pc = 0x21e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6856), GPR_U32(ctx, 0));
label_21e0cc:
    // 0x21e0cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21e0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e0d0:
    // 0x21e0d0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21E0D0u;
    SET_GPR_U32(ctx, 31, 0x21E0D8u);
    ctx->pc = 0x21E0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0D0u;
            // 0x21e0d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0D8u; }
        if (ctx->pc != 0x21E0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0D8u; }
        if (ctx->pc != 0x21E0D8u) { return; }
    }
    ctx->pc = 0x21E0D8u;
label_21e0d8:
    // 0x21e0d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E0D8u;
    {
        const bool branch_taken_0x21e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0D8u;
            // 0x21e0dc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0d8) {
            ctx->pc = 0x21E0ECu;
            goto label_21e0ec;
        }
    }
    ctx->pc = 0x21E0E0u;
label_21e0e0:
    // 0x21e0e0: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x21E0E0u;
    SET_GPR_U32(ctx, 31, 0x21E0E8u);
    ctx->pc = 0x21E0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0E0u;
            // 0x21e0e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0E8u; }
        if (ctx->pc != 0x21E0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E0E8u; }
        if (ctx->pc != 0x21E0E8u) { return; }
    }
    ctx->pc = 0x21E0E8u;
label_21e0e8:
    // 0x21e0e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21e0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21e0ec:
    // 0x21e0ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e0ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e0f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e0f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e0f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e0f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e0f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e0fc: 0x3e00008  jr          $ra
    ctx->pc = 0x21E0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0FCu;
            // 0x21e100: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E104u;
}
