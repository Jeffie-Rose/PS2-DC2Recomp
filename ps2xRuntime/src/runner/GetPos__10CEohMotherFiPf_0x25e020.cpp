#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPos__10CEohMotherFiPf
// Address: 0x25e020 - 0x25e1c0
void GetPos__10CEohMotherFiPf_0x25e020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPos__10CEohMotherFiPf_0x25e020");
#endif

    switch (ctx->pc) {
        case 0x25e020u: goto label_25e020;
        case 0x25e024u: goto label_25e024;
        case 0x25e028u: goto label_25e028;
        case 0x25e02cu: goto label_25e02c;
        case 0x25e030u: goto label_25e030;
        case 0x25e034u: goto label_25e034;
        case 0x25e038u: goto label_25e038;
        case 0x25e03cu: goto label_25e03c;
        case 0x25e040u: goto label_25e040;
        case 0x25e044u: goto label_25e044;
        case 0x25e048u: goto label_25e048;
        case 0x25e04cu: goto label_25e04c;
        case 0x25e050u: goto label_25e050;
        case 0x25e054u: goto label_25e054;
        case 0x25e058u: goto label_25e058;
        case 0x25e05cu: goto label_25e05c;
        case 0x25e060u: goto label_25e060;
        case 0x25e064u: goto label_25e064;
        case 0x25e068u: goto label_25e068;
        case 0x25e06cu: goto label_25e06c;
        case 0x25e070u: goto label_25e070;
        case 0x25e074u: goto label_25e074;
        case 0x25e078u: goto label_25e078;
        case 0x25e07cu: goto label_25e07c;
        case 0x25e080u: goto label_25e080;
        case 0x25e084u: goto label_25e084;
        case 0x25e088u: goto label_25e088;
        case 0x25e08cu: goto label_25e08c;
        case 0x25e090u: goto label_25e090;
        case 0x25e094u: goto label_25e094;
        case 0x25e098u: goto label_25e098;
        case 0x25e09cu: goto label_25e09c;
        case 0x25e0a0u: goto label_25e0a0;
        case 0x25e0a4u: goto label_25e0a4;
        case 0x25e0a8u: goto label_25e0a8;
        case 0x25e0acu: goto label_25e0ac;
        case 0x25e0b0u: goto label_25e0b0;
        case 0x25e0b4u: goto label_25e0b4;
        case 0x25e0b8u: goto label_25e0b8;
        case 0x25e0bcu: goto label_25e0bc;
        case 0x25e0c0u: goto label_25e0c0;
        case 0x25e0c4u: goto label_25e0c4;
        case 0x25e0c8u: goto label_25e0c8;
        case 0x25e0ccu: goto label_25e0cc;
        case 0x25e0d0u: goto label_25e0d0;
        case 0x25e0d4u: goto label_25e0d4;
        case 0x25e0d8u: goto label_25e0d8;
        case 0x25e0dcu: goto label_25e0dc;
        case 0x25e0e0u: goto label_25e0e0;
        case 0x25e0e4u: goto label_25e0e4;
        case 0x25e0e8u: goto label_25e0e8;
        case 0x25e0ecu: goto label_25e0ec;
        case 0x25e0f0u: goto label_25e0f0;
        case 0x25e0f4u: goto label_25e0f4;
        case 0x25e0f8u: goto label_25e0f8;
        case 0x25e0fcu: goto label_25e0fc;
        case 0x25e100u: goto label_25e100;
        case 0x25e104u: goto label_25e104;
        case 0x25e108u: goto label_25e108;
        case 0x25e10cu: goto label_25e10c;
        case 0x25e110u: goto label_25e110;
        case 0x25e114u: goto label_25e114;
        case 0x25e118u: goto label_25e118;
        case 0x25e11cu: goto label_25e11c;
        case 0x25e120u: goto label_25e120;
        case 0x25e124u: goto label_25e124;
        case 0x25e128u: goto label_25e128;
        case 0x25e12cu: goto label_25e12c;
        case 0x25e130u: goto label_25e130;
        case 0x25e134u: goto label_25e134;
        case 0x25e138u: goto label_25e138;
        case 0x25e13cu: goto label_25e13c;
        case 0x25e140u: goto label_25e140;
        case 0x25e144u: goto label_25e144;
        case 0x25e148u: goto label_25e148;
        case 0x25e14cu: goto label_25e14c;
        case 0x25e150u: goto label_25e150;
        case 0x25e154u: goto label_25e154;
        case 0x25e158u: goto label_25e158;
        case 0x25e15cu: goto label_25e15c;
        case 0x25e160u: goto label_25e160;
        case 0x25e164u: goto label_25e164;
        case 0x25e168u: goto label_25e168;
        case 0x25e16cu: goto label_25e16c;
        case 0x25e170u: goto label_25e170;
        case 0x25e174u: goto label_25e174;
        case 0x25e178u: goto label_25e178;
        case 0x25e17cu: goto label_25e17c;
        case 0x25e180u: goto label_25e180;
        case 0x25e184u: goto label_25e184;
        case 0x25e188u: goto label_25e188;
        case 0x25e18cu: goto label_25e18c;
        case 0x25e190u: goto label_25e190;
        case 0x25e194u: goto label_25e194;
        case 0x25e198u: goto label_25e198;
        case 0x25e19cu: goto label_25e19c;
        case 0x25e1a0u: goto label_25e1a0;
        case 0x25e1a4u: goto label_25e1a4;
        case 0x25e1a8u: goto label_25e1a8;
        case 0x25e1acu: goto label_25e1ac;
        case 0x25e1b0u: goto label_25e1b0;
        case 0x25e1b4u: goto label_25e1b4;
        case 0x25e1b8u: goto label_25e1b8;
        case 0x25e1bcu: goto label_25e1bc;
        default: break;
    }

    ctx->pc = 0x25e020u;

label_25e020:
    // 0x25e020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25e024:
    // 0x25e024: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25e024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_25e028:
    // 0x25e028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25e02c:
    // 0x25e02c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25e030:
    // 0x25e030: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25e030u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e034:
    // 0x25e034: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25e034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25e038:
    // 0x25e038: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_25e03c:
    if (ctx->pc == 0x25E03Cu) {
        ctx->pc = 0x25E03Cu;
            // 0x25e03c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E040u;
        goto label_25e040;
    }
    ctx->pc = 0x25E038u;
    {
        const bool branch_taken_0x25e038 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x25E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E038u;
            // 0x25e03c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e038) {
            ctx->pc = 0x25E04Cu;
            goto label_25e04c;
        }
    }
    ctx->pc = 0x25E040u;
label_25e040:
    // 0x25e040: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x25e040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_25e044:
    // 0x25e044: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e048:
    if (ctx->pc == 0x25E048u) {
        ctx->pc = 0x25E048u;
            // 0x25e048: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x25E04Cu;
        goto label_25e04c;
    }
    ctx->pc = 0x25E044u;
    {
        const bool branch_taken_0x25e044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E044u;
            // 0x25e048: 0x58100  sll         $s0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e044) {
            ctx->pc = 0x25E054u;
            goto label_25e054;
        }
    }
    ctx->pc = 0x25E04Cu;
label_25e04c:
    // 0x25e04c: 0x10000056  b           . + 4 + (0x56 << 2)
label_25e050:
    if (ctx->pc == 0x25E050u) {
        ctx->pc = 0x25E050u;
            // 0x25e050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E054u;
        goto label_25e054;
    }
    ctx->pc = 0x25E04Cu;
    {
        const bool branch_taken_0x25e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E04Cu;
            // 0x25e050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e04c) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E054u;
label_25e054:
    // 0x25e054: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_25e058:
    // 0x25e058: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x25e058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_25e05c:
    // 0x25e05c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x25e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e060:
    // 0x25e060: 0x10620047  beq         $v1, $v0, . + 4 + (0x47 << 2)
label_25e064:
    if (ctx->pc == 0x25E064u) {
        ctx->pc = 0x25E064u;
            // 0x25e064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x25E068u;
        goto label_25e068;
    }
    ctx->pc = 0x25E060u;
    {
        const bool branch_taken_0x25e060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E060u;
            // 0x25e064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e060) {
            ctx->pc = 0x25E180u;
            goto label_25e180;
        }
    }
    ctx->pc = 0x25E068u;
label_25e068:
    // 0x25e068: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
label_25e06c:
    if (ctx->pc == 0x25E06Cu) {
        ctx->pc = 0x25E06Cu;
            // 0x25e06c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x25E070u;
        goto label_25e070;
    }
    ctx->pc = 0x25E068u;
    {
        const bool branch_taken_0x25e068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E068u;
            // 0x25e06c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e068) {
            ctx->pc = 0x25E154u;
            goto label_25e154;
        }
    }
    ctx->pc = 0x25E070u;
label_25e070:
    // 0x25e070: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_25e074:
    if (ctx->pc == 0x25E074u) {
        ctx->pc = 0x25E074u;
            // 0x25e074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E078u;
        goto label_25e078;
    }
    ctx->pc = 0x25E070u;
    {
        const bool branch_taken_0x25e070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25E074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E070u;
            // 0x25e074: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e070) {
            ctx->pc = 0x25E10Cu;
            goto label_25e10c;
        }
    }
    ctx->pc = 0x25E078u;
label_25e078:
    // 0x25e078: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_25e07c:
    if (ctx->pc == 0x25E07Cu) {
        ctx->pc = 0x25E080u;
        goto label_25e080;
    }
    ctx->pc = 0x25E078u;
    {
        const bool branch_taken_0x25e078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25e078) {
            ctx->pc = 0x25E0C4u;
            goto label_25e0c4;
        }
    }
    ctx->pc = 0x25E080u;
label_25e080:
    // 0x25e080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25e084:
    if (ctx->pc == 0x25E084u) {
        ctx->pc = 0x25E088u;
        goto label_25e088;
    }
    ctx->pc = 0x25E080u;
    {
        const bool branch_taken_0x25e080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e080) {
            ctx->pc = 0x25E090u;
            goto label_25e090;
        }
    }
    ctx->pc = 0x25E088u;
label_25e088:
    // 0x25e088: 0x10000047  b           . + 4 + (0x47 << 2)
label_25e08c:
    if (ctx->pc == 0x25E08Cu) {
        ctx->pc = 0x25E08Cu;
            // 0x25e08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E090u;
        goto label_25e090;
    }
    ctx->pc = 0x25E088u;
    {
        const bool branch_taken_0x25e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E088u;
            // 0x25e08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e088) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E090u;
label_25e090:
    // 0x25e090: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e094:
    // 0x25e094: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e098:
    if (ctx->pc == 0x25E098u) {
        ctx->pc = 0x25E098u;
            // 0x25e098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E09Cu;
        goto label_25e09c;
    }
    ctx->pc = 0x25E094u;
    {
        const bool branch_taken_0x25e094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E094u;
            // 0x25e098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e094) {
            ctx->pc = 0x25E0A4u;
            goto label_25e0a4;
        }
    }
    ctx->pc = 0x25E09Cu;
label_25e09c:
    // 0x25e09c: 0x10000043  b           . + 4 + (0x43 << 2)
label_25e0a0:
    if (ctx->pc == 0x25E0A0u) {
        ctx->pc = 0x25E0A0u;
            // 0x25e0a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x25E0A4u;
        goto label_25e0a4;
    }
    ctx->pc = 0x25E09Cu;
    {
        const bool branch_taken_0x25e09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E09Cu;
            // 0x25e0a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e09c) {
            ctx->pc = 0x25E1ACu;
            goto label_25e1ac;
        }
    }
    ctx->pc = 0x25E0A4u;
label_25e0a4:
    // 0x25e0a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e0a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e0a8:
    // 0x25e0a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x25e0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_25e0ac:
    // 0x25e0ac: 0x320f809  jalr        $t9
label_25e0b0:
    if (ctx->pc == 0x25E0B0u) {
        ctx->pc = 0x25E0B0u;
            // 0x25e0b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E0B4u;
        goto label_25e0b4;
    }
    ctx->pc = 0x25E0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E0B4u);
        ctx->pc = 0x25E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0ACu;
            // 0x25e0b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E0B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E0B4u; }
            if (ctx->pc != 0x25E0B4u) { return; }
        }
        }
    }
    ctx->pc = 0x25E0B4u;
label_25e0b4:
    // 0x25e0b4: 0xc0975d8  jal         func_25D760
label_25e0b8:
    if (ctx->pc == 0x25E0B8u) {
        ctx->pc = 0x25E0B8u;
            // 0x25e0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E0BCu;
        goto label_25e0bc;
    }
    ctx->pc = 0x25E0B4u;
    SET_GPR_U32(ctx, 31, 0x25E0BCu);
    ctx->pc = 0x25E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0B4u;
            // 0x25e0b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E0BCu; }
        if (ctx->pc != 0x25E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E0BCu; }
        if (ctx->pc != 0x25E0BCu) { return; }
    }
    ctx->pc = 0x25E0BCu;
label_25e0bc:
    // 0x25e0bc: 0x1000003a  b           . + 4 + (0x3A << 2)
label_25e0c0:
    if (ctx->pc == 0x25E0C0u) {
        ctx->pc = 0x25E0C0u;
            // 0x25e0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E0C4u;
        goto label_25e0c4;
    }
    ctx->pc = 0x25E0BCu;
    {
        const bool branch_taken_0x25e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0BCu;
            // 0x25e0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0bc) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E0C4u;
label_25e0c4:
    // 0x25e0c4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e0c8:
    // 0x25e0c8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e0cc:
    if (ctx->pc == 0x25E0CCu) {
        ctx->pc = 0x25E0CCu;
            // 0x25e0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E0D0u;
        goto label_25e0d0;
    }
    ctx->pc = 0x25E0C8u;
    {
        const bool branch_taken_0x25e0c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0C8u;
            // 0x25e0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0c8) {
            ctx->pc = 0x25E0D8u;
            goto label_25e0d8;
        }
    }
    ctx->pc = 0x25E0D0u;
label_25e0d0:
    // 0x25e0d0: 0x10000035  b           . + 4 + (0x35 << 2)
label_25e0d4:
    if (ctx->pc == 0x25E0D4u) {
        ctx->pc = 0x25E0D8u;
        goto label_25e0d8;
    }
    ctx->pc = 0x25E0D0u;
    {
        const bool branch_taken_0x25e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e0d0) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E0D8u;
label_25e0d8:
    // 0x25e0d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e0dc:
    // 0x25e0dc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x25e0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_25e0e0:
    // 0x25e0e0: 0x320f809  jalr        $t9
label_25e0e4:
    if (ctx->pc == 0x25E0E4u) {
        ctx->pc = 0x25E0E4u;
            // 0x25e0e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E0E8u;
        goto label_25e0e8;
    }
    ctx->pc = 0x25E0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E0E8u);
        ctx->pc = 0x25E0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0E0u;
            // 0x25e0e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E0E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E0E8u; }
            if (ctx->pc != 0x25E0E8u) { return; }
        }
        }
    }
    ctx->pc = 0x25E0E8u;
label_25e0e8:
    // 0x25e0e8: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x25e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_25e0ec:
    // 0x25e0ec: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_25e0f0:
    // 0x25e0f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_25e0f4:
    if (ctx->pc == 0x25E0F4u) {
        ctx->pc = 0x25E0F4u;
            // 0x25e0f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E0F8u;
        goto label_25e0f8;
    }
    ctx->pc = 0x25E0F0u;
    {
        const bool branch_taken_0x25e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0F0u;
            // 0x25e0f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e0f0) {
            ctx->pc = 0x25E104u;
            goto label_25e104;
        }
    }
    ctx->pc = 0x25E0F8u;
label_25e0f8:
    // 0x25e0f8: 0xc0975d8  jal         func_25D760
label_25e0fc:
    if (ctx->pc == 0x25E0FCu) {
        ctx->pc = 0x25E0FCu;
            // 0x25e0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E100u;
        goto label_25e100;
    }
    ctx->pc = 0x25E0F8u;
    SET_GPR_U32(ctx, 31, 0x25E100u);
    ctx->pc = 0x25E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E0F8u;
            // 0x25e0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E100u; }
        if (ctx->pc != 0x25E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E100u; }
        if (ctx->pc != 0x25E100u) { return; }
    }
    ctx->pc = 0x25E100u;
label_25e100:
    // 0x25e100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e104:
    // 0x25e104: 0x10000028  b           . + 4 + (0x28 << 2)
label_25e108:
    if (ctx->pc == 0x25E108u) {
        ctx->pc = 0x25E10Cu;
        goto label_25e10c;
    }
    ctx->pc = 0x25E104u;
    {
        const bool branch_taken_0x25e104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e104) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E10Cu;
label_25e10c:
    // 0x25e10c: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x25e10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_25e110:
    // 0x25e110: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e114:
    // 0x25e114: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e118:
    if (ctx->pc == 0x25E118u) {
        ctx->pc = 0x25E118u;
            // 0x25e118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E11Cu;
        goto label_25e11c;
    }
    ctx->pc = 0x25E114u;
    {
        const bool branch_taken_0x25e114 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E114u;
            // 0x25e118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e114) {
            ctx->pc = 0x25E124u;
            goto label_25e124;
        }
    }
    ctx->pc = 0x25E11Cu;
label_25e11c:
    // 0x25e11c: 0x10000022  b           . + 4 + (0x22 << 2)
label_25e120:
    if (ctx->pc == 0x25E120u) {
        ctx->pc = 0x25E120u;
            // 0x25e120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E124u;
        goto label_25e124;
    }
    ctx->pc = 0x25E11Cu;
    {
        const bool branch_taken_0x25e11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E11Cu;
            // 0x25e120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e11c) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E124u;
label_25e124:
    // 0x25e124: 0xc0a4300  jal         func_290C00
label_25e128:
    if (ctx->pc == 0x25E128u) {
        ctx->pc = 0x25E12Cu;
        goto label_25e12c;
    }
    ctx->pc = 0x25E124u;
    SET_GPR_U32(ctx, 31, 0x25E12Cu);
    ctx->pc = 0x290C00u;
    if (runtime->hasFunction(0x290C00u)) {
        auto targetFn = runtime->lookupFunction(0x290C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E12Cu; }
        if (ctx->pc != 0x25E12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosition__13CEventSprite2FPf_0x290c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E12Cu; }
        if (ctx->pc != 0x25E12Cu) { return; }
    }
    ctx->pc = 0x25E12Cu;
label_25e12c:
    // 0x25e12c: 0xc0a4308  jal         func_290C20
label_25e130:
    if (ctx->pc == 0x25E130u) {
        ctx->pc = 0x25E130u;
            // 0x25e130: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x25E134u;
        goto label_25e134;
    }
    ctx->pc = 0x25E12Cu;
    SET_GPR_U32(ctx, 31, 0x25E134u);
    ctx->pc = 0x25E130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E12Cu;
            // 0x25e130: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290C20u;
    if (runtime->hasFunction(0x290C20u)) {
        auto targetFn = runtime->lookupFunction(0x290C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E134u; }
        if (ctx->pc != 0x25E134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__13CEventSprite2Fv_0x290c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E134u; }
        if (ctx->pc != 0x25E134u) { return; }
    }
    ctx->pc = 0x25E134u;
label_25e134:
    // 0x25e134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25e134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e138:
    // 0x25e138: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_25e13c:
    if (ctx->pc == 0x25E13Cu) {
        ctx->pc = 0x25E13Cu;
            // 0x25e13c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E140u;
        goto label_25e140;
    }
    ctx->pc = 0x25E138u;
    {
        const bool branch_taken_0x25e138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25E13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E138u;
            // 0x25e13c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e138) {
            ctx->pc = 0x25E14Cu;
            goto label_25e14c;
        }
    }
    ctx->pc = 0x25E140u;
label_25e140:
    // 0x25e140: 0xc0975d8  jal         func_25D760
label_25e144:
    if (ctx->pc == 0x25E144u) {
        ctx->pc = 0x25E144u;
            // 0x25e144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E148u;
        goto label_25e148;
    }
    ctx->pc = 0x25E140u;
    SET_GPR_U32(ctx, 31, 0x25E148u);
    ctx->pc = 0x25E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E140u;
            // 0x25e144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E148u; }
        if (ctx->pc != 0x25E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E148u; }
        if (ctx->pc != 0x25E148u) { return; }
    }
    ctx->pc = 0x25E148u;
label_25e148:
    // 0x25e148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e14c:
    // 0x25e14c: 0x10000016  b           . + 4 + (0x16 << 2)
label_25e150:
    if (ctx->pc == 0x25E150u) {
        ctx->pc = 0x25E154u;
        goto label_25e154;
    }
    ctx->pc = 0x25E14Cu;
    {
        const bool branch_taken_0x25e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e14c) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E154u;
label_25e154:
    // 0x25e154: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x25e154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e158:
    // 0x25e158: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_25e15c:
    if (ctx->pc == 0x25E15Cu) {
        ctx->pc = 0x25E15Cu;
            // 0x25e15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E160u;
        goto label_25e160;
    }
    ctx->pc = 0x25E158u;
    {
        const bool branch_taken_0x25e158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25E15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E158u;
            // 0x25e15c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e158) {
            ctx->pc = 0x25E168u;
            goto label_25e168;
        }
    }
    ctx->pc = 0x25E160u;
label_25e160:
    // 0x25e160: 0x10000011  b           . + 4 + (0x11 << 2)
label_25e164:
    if (ctx->pc == 0x25E164u) {
        ctx->pc = 0x25E168u;
        goto label_25e168;
    }
    ctx->pc = 0x25E160u;
    {
        const bool branch_taken_0x25e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e160) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E168u;
label_25e168:
    // 0x25e168: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x25e168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25e16c:
    // 0x25e16c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x25e16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_25e170:
    // 0x25e170: 0x320f809  jalr        $t9
label_25e174:
    if (ctx->pc == 0x25E174u) {
        ctx->pc = 0x25E174u;
            // 0x25e174: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E178u;
        goto label_25e178;
    }
    ctx->pc = 0x25E170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x25E178u);
        ctx->pc = 0x25E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E170u;
            // 0x25e174: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x25E178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x25E178u; }
            if (ctx->pc != 0x25E178u) { return; }
        }
        }
    }
    ctx->pc = 0x25E178u;
label_25e178:
    // 0x25e178: 0x1000000b  b           . + 4 + (0xB << 2)
label_25e17c:
    if (ctx->pc == 0x25E17Cu) {
        ctx->pc = 0x25E17Cu;
            // 0x25e17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x25E180u;
        goto label_25e180;
    }
    ctx->pc = 0x25E178u;
    {
        const bool branch_taken_0x25e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E178u;
            // 0x25e17c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e178) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E180u;
label_25e180:
    // 0x25e180: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25e180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_25e184:
    // 0x25e184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25e188:
    if (ctx->pc == 0x25E188u) {
        ctx->pc = 0x25E18Cu;
        goto label_25e18c;
    }
    ctx->pc = 0x25E184u;
    {
        const bool branch_taken_0x25e184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e184) {
            ctx->pc = 0x25E194u;
            goto label_25e194;
        }
    }
    ctx->pc = 0x25E18Cu;
label_25e18c:
    // 0x25e18c: 0x10000006  b           . + 4 + (0x6 << 2)
label_25e190:
    if (ctx->pc == 0x25E190u) {
        ctx->pc = 0x25E190u;
            // 0x25e190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x25E194u;
        goto label_25e194;
    }
    ctx->pc = 0x25E18Cu;
    {
        const bool branch_taken_0x25e18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E18Cu;
            // 0x25e190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e18c) {
            ctx->pc = 0x25E1A8u;
            goto label_25e1a8;
        }
    }
    ctx->pc = 0x25E194u;
label_25e194:
    // 0x25e194: 0x78420180  lq          $v0, 0x180($v0)
    ctx->pc = 0x25e194u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 384)));
label_25e198:
    // 0x25e198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e19c:
    // 0x25e19c: 0xc0975d8  jal         func_25D760
label_25e1a0:
    if (ctx->pc == 0x25E1A0u) {
        ctx->pc = 0x25E1A0u;
            // 0x25e1a0: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x25E1A4u;
        goto label_25e1a4;
    }
    ctx->pc = 0x25E19Cu;
    SET_GPR_U32(ctx, 31, 0x25E1A4u);
    ctx->pc = 0x25E1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25E19Cu;
            // 0x25e1a0: 0x7e220000  sq          $v0, 0x0($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D760u;
    if (runtime->hasFunction(0x25D760u)) {
        auto targetFn = runtime->lookupFunction(0x25D760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E1A4u; }
        if (ctx->pc != 0x25E1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcPosWorldCoordGyaku__FPf_0x25d760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25E1A4u; }
        if (ctx->pc != 0x25E1A4u) { return; }
    }
    ctx->pc = 0x25E1A4u;
label_25e1a4:
    // 0x25e1a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25e1a8:
    // 0x25e1a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25e1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_25e1ac:
    // 0x25e1ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25e1b0:
    // 0x25e1b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25e1b4:
    // 0x25e1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25e1b8:
    // 0x25e1b8: 0x3e00008  jr          $ra
label_25e1bc:
    if (ctx->pc == 0x25E1BCu) {
        ctx->pc = 0x25E1BCu;
            // 0x25e1bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x25E1C0u;
        goto label_fallthrough_0x25e1b8;
    }
    ctx->pc = 0x25E1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25E1B8u;
            // 0x25e1bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x25e1b8:
    ctx->pc = 0x25E1C0u;
}
