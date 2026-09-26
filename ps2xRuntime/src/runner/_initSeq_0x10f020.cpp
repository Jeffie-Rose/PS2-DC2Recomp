#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _initSeq
// Address: 0x10f020 - 0x10f2c8
void _initSeq_0x10f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_initSeq_0x10f020");
#endif

    switch (ctx->pc) {
        case 0x10f148u: goto label_10f148;
        case 0x10f15cu: goto label_10f15c;
        case 0x10f174u: goto label_10f174;
        case 0x10f18cu: goto label_10f18c;
        case 0x10f1dcu: goto label_10f1dc;
        case 0x10f1ecu: goto label_10f1ec;
        case 0x10f1fcu: goto label_10f1fc;
        case 0x10f20cu: goto label_10f20c;
        case 0x10f21cu: goto label_10f21c;
        case 0x10f22cu: goto label_10f22c;
        case 0x10f23cu: goto label_10f23c;
        case 0x10f24cu: goto label_10f24c;
        case 0x10f25cu: goto label_10f25c;
        default: break;
    }

    ctx->pc = 0x10f020u;

    // 0x10f020: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x10f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x10f024: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10f024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f028: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x10f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x10f02c: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x10f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x10f030: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x10f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x10f034: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x10f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x10f038: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x10f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x10f03c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x10f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x10f040: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x10f044: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x10f044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x10f048: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x10f048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x10f04c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x10f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x10f050: 0x8cbe0040  lw          $fp, 0x40($a1)
    ctx->pc = 0x10f050u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x10f054: 0x8fc60848  lw          $a2, 0x848($fp)
    ctx->pc = 0x10f054u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 2120)));
    // 0x10f058: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10F058u;
    {
        const bool branch_taken_0x10f058 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f058) {
            ctx->pc = 0x10F05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10F058u;
            // 0x10f05c: 0x8fc20124  lw          $v0, 0x124($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10F088u;
            goto label_10f088;
        }
    }
    ctx->pc = 0x10F060u;
    // 0x10f060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10f064: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10f068: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x10f068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10f06c: 0xafc30174  sw          $v1, 0x174($fp)
    ctx->pc = 0x10f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 372), GPR_U32(ctx, 3));
    // 0x10f070: 0xafc2017c  sw          $v0, 0x17C($fp)
    ctx->pc = 0x10f070u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 380), GPR_U32(ctx, 2));
    // 0x10f074: 0xafc40144  sw          $a0, 0x144($fp)
    ctx->pc = 0x10f074u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 324), GPR_U32(ctx, 4));
    // 0x10f078: 0xafc2013c  sw          $v0, 0x13C($fp)
    ctx->pc = 0x10f078u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 316), GPR_U32(ctx, 2));
    // 0x10f07c: 0xafc20140  sw          $v0, 0x140($fp)
    ctx->pc = 0x10f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 320), GPR_U32(ctx, 2));
    // 0x10f080: 0xafc20188  sw          $v0, 0x188($fp)
    ctx->pc = 0x10f080u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 392), GPR_U32(ctx, 2));
    // 0x10f084: 0x8fc20124  lw          $v0, 0x124($fp)
    ctx->pc = 0x10f084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 292)));
label_10f088:
    // 0x10f088: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10f08c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10f08cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10f090: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10F090u;
    {
        const bool branch_taken_0x10f090 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F090u;
            // 0x10f094: 0xafc2012c  sw          $v0, 0x12C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f090) {
            ctx->pc = 0x10F0B4u;
            goto label_10f0b4;
        }
    }
    ctx->pc = 0x10F098u;
    // 0x10f098: 0x8fc2013c  lw          $v0, 0x13C($fp)
    ctx->pc = 0x10f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 316)));
    // 0x10f09c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F09Cu;
    {
        const bool branch_taken_0x10f09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F09Cu;
            // 0x10f0a0: 0x8fc20128  lw          $v0, 0x128($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f09c) {
            ctx->pc = 0x10F0B8u;
            goto label_10f0b8;
        }
    }
    ctx->pc = 0x10F0A4u;
    // 0x10f0a4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x10f0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x10f0a8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x10f0a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x10f0ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10F0ACu;
    {
        const bool branch_taken_0x10f0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F0ACu;
            // 0x10f0b0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0ac) {
            ctx->pc = 0x10F0C0u;
            goto label_10f0c0;
        }
    }
    ctx->pc = 0x10F0B4u;
label_10f0b4:
    // 0x10f0b4: 0x8fc20128  lw          $v0, 0x128($fp)
    ctx->pc = 0x10f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 296)));
label_10f0b8:
    // 0x10f0b8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x10f0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x10f0bc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10f0bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_10f0c0:
    // 0x10f0c0: 0xafc20130  sw          $v0, 0x130($fp)
    ctx->pc = 0x10f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 304), GPR_U32(ctx, 2));
    // 0x10f0c4: 0x2b100  sll         $s6, $v0, 4
    ctx->pc = 0x10f0c4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10f0c8: 0x8fc2012c  lw          $v0, 0x12C($fp)
    ctx->pc = 0x10f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 300)));
    // 0x10f0cc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10f0d0: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x10f0d0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10f0d4: 0x16e30004  bne         $s7, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F0D4u;
    {
        const bool branch_taken_0x10f0d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        ctx->pc = 0x10F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F0D4u;
            // 0x10f0d8: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0d4) {
            ctx->pc = 0x10F0E8u;
            goto label_10f0e8;
        }
    }
    ctx->pc = 0x10F0DCu;
    // 0x10f0dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x10f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10f0e0: 0x12c2006d  beq         $s6, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x10F0E0u;
    {
        const bool branch_taken_0x10f0e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F0E0u;
            // 0x10f0e4: 0x27c20528  addiu       $v0, $fp, 0x528 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f0e0) {
            ctx->pc = 0x10F298u;
            goto label_10f298;
        }
    }
    ctx->pc = 0x10F0E8u;
label_10f0e8:
    // 0x10f0e8: 0xacb60004  sw          $s6, 0x4($a1)
    ctx->pc = 0x10f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 22));
    // 0x10f0ec: 0x24100180  addiu       $s0, $zero, 0x180
    ctx->pc = 0x10f0ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x10f0f0: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x10f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
    // 0x10f0f4: 0x2d08018  mult        $s0, $s6, $s0
    ctx->pc = 0x10f0f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10f0f8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x10f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x10f0fc: 0x27d10108  addiu       $s1, $fp, 0x108
    ctx->pc = 0x10f0fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 264));
    // 0x10f100: 0x27c20320  addiu       $v0, $fp, 0x320
    ctx->pc = 0x10f100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 800));
    // 0x10f104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10f104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f108: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x10f108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x10f10c: 0x27d301e8  addiu       $s3, $fp, 0x1E8
    ctx->pc = 0x10f10cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 488));
    // 0x10f110: 0x27c20388  addiu       $v0, $fp, 0x388
    ctx->pc = 0x10f110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 904));
    // 0x10f114: 0x2f08018  mult        $s0, $s7, $s0
    ctx->pc = 0x10f114u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x10f118: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x10f118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x10f11c: 0x27d40250  addiu       $s4, $fp, 0x250
    ctx->pc = 0x10f11cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 592));
    // 0x10f120: 0x27c203f0  addiu       $v0, $fp, 0x3F0
    ctx->pc = 0x10f120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1008));
    // 0x10f124: 0x27d502b8  addiu       $s5, $fp, 0x2B8
    ctx->pc = 0x10f124u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 696));
    // 0x10f128: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x10f128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x10f12c: 0x169043  sra         $s2, $s6, 1
    ctx->pc = 0x10f12cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 22), 1));
    // 0x10f130: 0x27c20458  addiu       $v0, $fp, 0x458
    ctx->pc = 0x10f130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1112));
    // 0x10f134: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x10f134u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x10f138: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x10f138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x10f13c: 0x27c204c0  addiu       $v0, $fp, 0x4C0
    ctx->pc = 0x10f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1216));
    // 0x10f140: 0xc04399a  jal         func_10E668
    ctx->pc = 0x10F140u;
    SET_GPR_U32(ctx, 31, 0x10F148u);
    ctx->pc = 0x10F144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F140u;
            // 0x10f144: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E668u;
    if (runtime->hasFunction(0x10E668u)) {
        auto targetFn = runtime->lookupFunction(0x10E668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F148u; }
        if (ctx->pc != 0x10F148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcFree_0x10e668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F148u; }
        if (ctx->pc != 0x10F148u) { return; }
    }
    ctx->pc = 0x10F148u;
label_10f148:
    // 0x10f148: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f14c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f150: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10f150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f154: 0xc04399e  jal         func_10E678
    ctx->pc = 0x10F154u;
    SET_GPR_U32(ctx, 31, 0x10F15Cu);
    ctx->pc = 0x10F158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F154u;
            // 0x10f158: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E678u;
    if (runtime->hasFunction(0x10E678u)) {
        auto targetFn = runtime->lookupFunction(0x10E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F15Cu; }
        if (ctx->pc != 0x10F15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x10e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F15Cu; }
        if (ctx->pc != 0x10F15Cu) { return; }
    }
    ctx->pc = 0x10F15Cu;
label_10f15c:
    // 0x10f15c: 0xafc200fc  sw          $v0, 0xFC($fp)
    ctx->pc = 0x10f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 252), GPR_U32(ctx, 2));
    // 0x10f160: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f168: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10f168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f16c: 0xc04399e  jal         func_10E678
    ctx->pc = 0x10F16Cu;
    SET_GPR_U32(ctx, 31, 0x10F174u);
    ctx->pc = 0x10F170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F16Cu;
            // 0x10f170: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E678u;
    if (runtime->hasFunction(0x10E678u)) {
        auto targetFn = runtime->lookupFunction(0x10E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F174u; }
        if (ctx->pc != 0x10F174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x10e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F174u; }
        if (ctx->pc != 0x10F174u) { return; }
    }
    ctx->pc = 0x10F174u;
label_10f174:
    // 0x10f174: 0xafc20100  sw          $v0, 0x100($fp)
    ctx->pc = 0x10f174u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 256), GPR_U32(ctx, 2));
    // 0x10f178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10f178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10f17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f180: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x10f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f184: 0xc04399e  jal         func_10E678
    ctx->pc = 0x10F184u;
    SET_GPR_U32(ctx, 31, 0x10F18Cu);
    ctx->pc = 0x10F188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F184u;
            // 0x10f188: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E678u;
    if (runtime->hasFunction(0x10E678u)) {
        auto targetFn = runtime->lookupFunction(0x10E678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F18Cu; }
        if (ctx->pc != 0x10F18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _alalcAlloc_0x10e678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F18Cu; }
        if (ctx->pc != 0x10F18Cu) { return; }
    }
    ctx->pc = 0x10F18Cu;
label_10f18c:
    // 0x10f18c: 0x8fa80034  lw          $t0, 0x34($sp)
    ctx->pc = 0x10f18cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x10f190: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10f190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f194: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x10f194u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10f198: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10f198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f19c: 0x8faa003c  lw          $t2, 0x3C($sp)
    ctx->pc = 0x10f19cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x10f1a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x10f1a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1a4: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x10f1a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f1a8: 0xafc20104  sw          $v0, 0x104($fp)
    ctx->pc = 0x10f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 260), GPR_U32(ctx, 2));
    // 0x10f1ac: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x10f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10f1b0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x10f1b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f1b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10f1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10f1b8: 0x8fc200fc  lw          $v0, 0xFC($fp)
    ctx->pc = 0x10f1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 252)));
    // 0x10f1bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x10f1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x10f1c0: 0x8fc30100  lw          $v1, 0x100($fp)
    ctx->pc = 0x10f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x10f1c4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x10f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x10f1c8: 0x8fc20104  lw          $v0, 0x104($fp)
    ctx->pc = 0x10f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 260)));
    // 0x10f1cc: 0xafb70020  sw          $s7, 0x20($sp)
    ctx->pc = 0x10f1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 23));
    // 0x10f1d0: 0xafb60028  sw          $s6, 0x28($sp)
    ctx->pc = 0x10f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 22));
    // 0x10f1d4: 0xc043cb2  jal         func_10F2C8
    ctx->pc = 0x10F1D4u;
    SET_GPR_U32(ctx, 31, 0x10F1DCu);
    ctx->pc = 0x10F1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1D4u;
            // 0x10f1d8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F2C8u;
    if (runtime->hasFunction(0x10F2C8u)) {
        auto targetFn = runtime->lookupFunction(0x10F2C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1DCu; }
        if (ctx->pc != 0x10F1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _initRefImages_0x10f2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1DCu; }
        if (ctx->pc != 0x10F1DCu) { return; }
    }
    ctx->pc = 0x10F1DCu;
label_10f1dc:
    // 0x10f1dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10f1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1e0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1e4: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F1E4u;
    SET_GPR_U32(ctx, 31, 0x10F1ECu);
    ctx->pc = 0x10F1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1E4u;
            // 0x10f1e8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1ECu; }
        if (ctx->pc != 0x10F1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1ECu; }
        if (ctx->pc != 0x10F1ECu) { return; }
    }
    ctx->pc = 0x10F1ECu;
label_10f1ec:
    // 0x10f1ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f1f4: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F1F4u;
    SET_GPR_U32(ctx, 31, 0x10F1FCu);
    ctx->pc = 0x10F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F1F4u;
            // 0x10f1f8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1FCu; }
        if (ctx->pc != 0x10F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F1FCu; }
        if (ctx->pc != 0x10F1FCu) { return; }
    }
    ctx->pc = 0x10F1FCu;
label_10f1fc:
    // 0x10f1fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10f1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f200: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f204: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F204u;
    SET_GPR_U32(ctx, 31, 0x10F20Cu);
    ctx->pc = 0x10F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F204u;
            // 0x10f208: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F20Cu; }
        if (ctx->pc != 0x10F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F20Cu; }
        if (ctx->pc != 0x10F20Cu) { return; }
    }
    ctx->pc = 0x10F20Cu;
label_10f20c:
    // 0x10f20c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10f20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f210: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f214: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F214u;
    SET_GPR_U32(ctx, 31, 0x10F21Cu);
    ctx->pc = 0x10F218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F214u;
            // 0x10f218: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F21Cu; }
        if (ctx->pc != 0x10F21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F21Cu; }
        if (ctx->pc != 0x10F21Cu) { return; }
    }
    ctx->pc = 0x10F21Cu;
label_10f21c:
    // 0x10f21c: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x10f21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x10f220: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f224: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F224u;
    SET_GPR_U32(ctx, 31, 0x10F22Cu);
    ctx->pc = 0x10F228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F224u;
            // 0x10f228: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F22Cu; }
        if (ctx->pc != 0x10F22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F22Cu; }
        if (ctx->pc != 0x10F22Cu) { return; }
    }
    ctx->pc = 0x10F22Cu;
label_10f22c:
    // 0x10f22c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x10f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10f230: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f234: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F234u;
    SET_GPR_U32(ctx, 31, 0x10F23Cu);
    ctx->pc = 0x10F238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F234u;
            // 0x10f238: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F23Cu; }
        if (ctx->pc != 0x10F23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F23Cu; }
        if (ctx->pc != 0x10F23Cu) { return; }
    }
    ctx->pc = 0x10F23Cu;
label_10f23c:
    // 0x10f23c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x10f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x10f240: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f244: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F244u;
    SET_GPR_U32(ctx, 31, 0x10F24Cu);
    ctx->pc = 0x10F248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F244u;
            // 0x10f248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F24Cu; }
        if (ctx->pc != 0x10F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F24Cu; }
        if (ctx->pc != 0x10F24Cu) { return; }
    }
    ctx->pc = 0x10F24Cu;
label_10f24c:
    // 0x10f24c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10f24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10f250: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f254: 0xc043bb6  jal         func_10EED8
    ctx->pc = 0x10F254u;
    SET_GPR_U32(ctx, 31, 0x10F25Cu);
    ctx->pc = 0x10F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F254u;
            // 0x10f258: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F25Cu; }
        if (ctx->pc != 0x10F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10F25Cu; }
        if (ctx->pc != 0x10F25Cu) { return; }
    }
    ctx->pc = 0x10F25Cu;
label_10f25c:
    // 0x10f25c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x10f25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f260: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10f260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f264: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x10f264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x10f268: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x10f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10f26c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x10f26cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10f270: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x10f270u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10f274: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x10f274u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10f278: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10f278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10f27c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x10f27cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10f280: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x10f280u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10f284: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10f284u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10f288: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10f288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10f28c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10f28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10f290: 0x8043bb6  j           func_10EED8
    ctx->pc = 0x10F290u;
    ctx->pc = 0x10F294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F290u;
            // 0x10f294: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EED8u;
    if (runtime->hasFunction(0x10EED8u)) {
        auto targetFn = runtime->lookupFunction(0x10EED8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        ps2__RefImageInit_0x10eed8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F298u;
label_10f298:
    // 0x10f298: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x10f298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x10f29c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x10f29cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10f2a0: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x10f2a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x10f2a4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x10f2a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10f2a8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x10f2a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10f2ac: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x10f2acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10f2b0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x10f2b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10f2b4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x10f2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10f2b8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x10f2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10f2bc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x10f2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10f2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10F2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10F2C0u;
            // 0x10f2c4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10F2C8u;
}
