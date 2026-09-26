#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _cpr8
// Address: 0x10bfb8 - 0x10c228
void _cpr8_0x10bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_cpr8_0x10bfb8");
#endif

    switch (ctx->pc) {
        case 0x10c0a0u: goto label_10c0a0;
        case 0x10c0b0u: goto label_10c0b0;
        case 0x10c0b8u: goto label_10c0b8;
        case 0x10c0f4u: goto label_10c0f4;
        case 0x10c100u: goto label_10c100;
        case 0x10c124u: goto label_10c124;
        case 0x10c15cu: goto label_10c15c;
        case 0x10c168u: goto label_10c168;
        case 0x10c190u: goto label_10c190;
        default: break;
    }

    ctx->pc = 0x10bfb8u;

    // 0x10bfb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x10bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x10bfbc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10bfc0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x10bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x10bfc4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10bfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10bfc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x10bfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x10bfcc: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x10bfccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bfd0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10bfd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x10bfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x10bfd8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x10bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x10bfdc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x10bfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x10bfe0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x10bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x10bfe4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x10bfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x10bfe8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x10bfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x10bfec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x10bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x10bff0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x10bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x10bff4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x10bff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bff8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x10bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x10bffc: 0x8c8400d8  lw          $a0, 0xD8($a0)
    ctx->pc = 0x10bffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x10c000: 0x8cc50174  lw          $a1, 0x174($a2)
    ctx->pc = 0x10c000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 372)));
    // 0x10c004: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x10c004u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x10c008: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x10c008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10c00c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c010: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C010u;
    {
        const bool branch_taken_0x10c010 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C010u;
            // 0x10c014: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c010) {
            ctx->pc = 0x10C02Cu;
            goto label_10c02c;
        }
    }
    ctx->pc = 0x10C018u;
    // 0x10c018: 0x8cc400e0  lw          $a0, 0xE0($a2)
    ctx->pc = 0x10c018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x10c01c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C01Cu;
    {
        const bool branch_taken_0x10c01c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C01Cu;
            // 0x10c020: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c01c) {
            ctx->pc = 0x10C064u;
            goto label_10c064;
        }
    }
    ctx->pc = 0x10C024u;
    // 0x10c024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C024u;
    {
        const bool branch_taken_0x10c024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C024u;
            // 0x10c028: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c024) {
            ctx->pc = 0x10C038u;
            goto label_10c038;
        }
    }
    ctx->pc = 0x10C02Cu;
label_10c02c:
    // 0x10c02c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10c02cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c030: 0x8ce300e0  lw          $v1, 0xE0($a3)
    ctx->pc = 0x10c030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 224)));
    // 0x10c034: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10c034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_10c038:
    // 0x10c038: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x10c038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10c03c: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x10c03cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10c040: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C040u;
    {
        const bool branch_taken_0x10c040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C040u;
            // 0x10c044: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c040) {
            ctx->pc = 0x10C054u;
            goto label_10c054;
        }
    }
    ctx->pc = 0x10C048u;
    // 0x10c048: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x10c048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x10c04c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10C04Cu;
    {
        const bool branch_taken_0x10c04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C04Cu;
            // 0x10c050: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c04c) {
            ctx->pc = 0x10C058u;
            goto label_10c058;
        }
    }
    ctx->pc = 0x10C054u;
label_10c054:
    // 0x10c054: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x10c054u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10c058:
    // 0x10c058: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c05c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10C05Cu;
    {
        const bool branch_taken_0x10c05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C05Cu;
            // 0x10c060: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c05c) {
            ctx->pc = 0x10C08Cu;
            goto label_10c08c;
        }
    }
    ctx->pc = 0x10C064u;
label_10c064:
    // 0x10c064: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x10c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x10c068: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x10c068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10c06c: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10c070: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x10c070u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x10c074: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c078: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x10c078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x10c07c: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x10c07cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x10c080: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c084: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10c084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10c088: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x10c088u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_10c08c:
    // 0x10c08c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x10c08cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c090: 0x10c00059  beqz        $a2, . + 4 + (0x59 << 2)
    ctx->pc = 0x10C090u;
    {
        const bool branch_taken_0x10c090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C090u;
            // 0x10c094: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c090) {
            ctx->pc = 0x10C1F8u;
            goto label_10c1f8;
        }
    }
    ctx->pc = 0x10C098u;
    // 0x10c098: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10c098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10c09c: 0x0  nop
    ctx->pc = 0x10c09cu;
    // NOP
label_10c0a0:
    // 0x10c0a0: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x10c0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c0a4: 0x18c00047  blez        $a2, . + 4 + (0x47 << 2)
    ctx->pc = 0x10C0A4u;
    {
        const bool branch_taken_0x10c0a4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x10C0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0A4u;
            // 0x10c0a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0a4) {
            ctx->pc = 0x10C1C4u;
            goto label_10c1c4;
        }
    }
    ctx->pc = 0x10C0ACu;
    // 0x10c0ac: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10c0acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10c0b0:
    // 0x10c0b0: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10C0B0u;
    SET_GPR_U32(ctx, 31, 0x10C0B8u);
    ctx->pc = 0x10C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0B0u;
            // 0x10c0b4: 0x2559821  addu        $s3, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0B8u; }
        if (ctx->pc != 0x10C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0B8u; }
        if (ctx->pc != 0x10C0B8u) { return; }
    }
    ctx->pc = 0x10C0B8u;
label_10c0b8:
    // 0x10c0b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0c0: 0x3442d480  ori         $v0, $v0, 0xD480
    ctx->pc = 0x10c0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54400);
    // 0x10c0c4: 0x3484d410  ori         $a0, $a0, 0xD410
    ctx->pc = 0x10c0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54288);
    // 0x10c0c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10c0cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0d0: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x10c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x10c0d4: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x10c0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x10c0d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0dc: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x10c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x10c0e0: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x10c0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x10c0e4: 0x24020101  addiu       $v0, $zero, 0x101
    ctx->pc = 0x10c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10c0e8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10c0ec: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10C0ECu;
    SET_GPR_U32(ctx, 31, 0x10C0F4u);
    ctx->pc = 0x10C0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C0ECu;
            // 0x10c0f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0F4u; }
        if (ctx->pc != 0x10C0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C0F4u; }
        if (ctx->pc != 0x10C0F4u) { return; }
    }
    ctx->pc = 0x10C0F4u;
label_10c0f4:
    // 0x10c0f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c0f8: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x10c0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x10c0fc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x10c0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_10c100:
    // 0x10c100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c104: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10c108: 0x0  nop
    ctx->pc = 0x10c108u;
    // NOP
    // 0x10c10c: 0x0  nop
    ctx->pc = 0x10c10cu;
    // NOP
    // 0x10c110: 0x0  nop
    ctx->pc = 0x10c110u;
    // NOP
    // 0x10c114: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C114u;
    {
        const bool branch_taken_0x10c114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c114) {
            ctx->pc = 0x10C100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c100;
        }
    }
    ctx->pc = 0x10C11Cu;
    // 0x10c11c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10C11Cu;
    SET_GPR_U32(ctx, 31, 0x10C124u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C124u; }
        if (ctx->pc != 0x10C124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C124u; }
        if (ctx->pc != 0x10C124u) { return; }
    }
    ctx->pc = 0x10C124u;
label_10c124:
    // 0x10c124: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10c128: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c12c: 0x3442d080  ori         $v0, $v0, 0xD080
    ctx->pc = 0x10c12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53376);
    // 0x10c130: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x10c130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x10c134: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10c134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10c138: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c13c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x10c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x10c140: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x10c140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10c144: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10c144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10c148: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x10c148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x10c14c: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x10c14cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x10c150: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x10c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10c154: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10C154u;
    SET_GPR_U32(ctx, 31, 0x10C15Cu);
    ctx->pc = 0x10C158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C154u;
            // 0x10c158: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C15Cu; }
        if (ctx->pc != 0x10C15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C15Cu; }
        if (ctx->pc != 0x10C15Cu) { return; }
    }
    ctx->pc = 0x10C15Cu;
label_10c15c:
    // 0x10c15c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c160: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x10c160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x10c164: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x10c164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
label_10c168:
    // 0x10c168: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c16c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x10c16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10c170: 0x0  nop
    ctx->pc = 0x10c170u;
    // NOP
    // 0x10c174: 0x0  nop
    ctx->pc = 0x10c174u;
    // NOP
    // 0x10c178: 0x0  nop
    ctx->pc = 0x10c178u;
    // NOP
    // 0x10c17c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C17Cu;
    {
        const bool branch_taken_0x10c17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c17c) {
            ctx->pc = 0x10C168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c168;
        }
    }
    ctx->pc = 0x10C184u;
    // 0x10c184: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10c184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10c188: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x10c188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x10c18c: 0x0  nop
    ctx->pc = 0x10c18cu;
    // NOP
label_10c190:
    // 0x10c190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c194: 0x0  nop
    ctx->pc = 0x10c194u;
    // NOP
    // 0x10c198: 0x0  nop
    ctx->pc = 0x10c198u;
    // NOP
    // 0x10c19c: 0x0  nop
    ctx->pc = 0x10c19cu;
    // NOP
    // 0x10c1a0: 0x0  nop
    ctx->pc = 0x10c1a0u;
    // NOP
    // 0x10c1a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10C1A4u;
    {
        const bool branch_taken_0x10c1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c1a4) {
            ctx->pc = 0x10C190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c190;
        }
    }
    ctx->pc = 0x10C1ACu;
    // 0x10c1ac: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x10c1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1b0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x10c1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10c1b4: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x10C1B4u;
    {
        const bool branch_taken_0x10c1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1B4u;
            // 0x10c1b8: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1b4) {
            ctx->pc = 0x10C0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c0b0;
        }
    }
    ctx->pc = 0x10C1BCu;
    // 0x10c1bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C1BCu;
    {
        const bool branch_taken_0x10c1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1BCu;
            // 0x10c1c0: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1bc) {
            ctx->pc = 0x10C1CCu;
            goto label_10c1cc;
        }
    }
    ctx->pc = 0x10C1C4u;
label_10c1c4:
    // 0x10c1c4: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x10c1c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10c1c8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x10c1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10c1cc:
    // 0x10c1cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10c1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1d0: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x10c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x10c1d4: 0x8ce200e4  lw          $v0, 0xE4($a3)
    ctx->pc = 0x10c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 228)));
    // 0x10c1d8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x10c1d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c1dc: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x10c1dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x10c1e0: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x10c1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c1e4: 0xe00013  mtlo        $a3
    ctx->pc = 0x10c1e4u;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x10c1e8: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x10c1e8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x10c1ec: 0x3812  mflo        $a3
    ctx->pc = 0x10c1ecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x10c1f0: 0x1480ffab  bnez        $a0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x10C1F0u;
    {
        const bool branch_taken_0x10c1f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C1F0u;
            // 0x10c1f4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1f0) {
            ctx->pc = 0x10C0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10c0a0;
        }
    }
    ctx->pc = 0x10C1F8u;
label_10c1f8:
    // 0x10c1f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10c1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10c1fc: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x10c1fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c200: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10c200u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c204: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x10c204u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c208: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x10c208u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c20c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x10c20cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c210: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10c210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c214: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x10c214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c218: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x10c218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c21c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x10c21cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c220: 0x3e00008  jr          $ra
    ctx->pc = 0x10C220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C220u;
            // 0x10c224: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C228u;
}
