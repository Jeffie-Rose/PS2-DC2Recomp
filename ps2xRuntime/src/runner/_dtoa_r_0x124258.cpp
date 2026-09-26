#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dtoa_r
// Address: 0x124258 - 0x125424
void _dtoa_r_0x124258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dtoa_r_0x124258");
#endif

    switch (ctx->pc) {
        case 0x1242c8u: goto label_1242c8;
        case 0x124380u: goto label_124380;
        case 0x1243c8u: goto label_1243c8;
        case 0x124478u: goto label_124478;
        case 0x124490u: goto label_124490;
        case 0x1244d0u: goto label_1244d0;
        case 0x1244e0u: goto label_1244e0;
        case 0x1244f0u: goto label_1244f0;
        case 0x1244fcu: goto label_1244fc;
        case 0x12450cu: goto label_12450c;
        case 0x124518u: goto label_124518;
        case 0x124524u: goto label_124524;
        case 0x124534u: goto label_124534;
        case 0x124544u: goto label_124544;
        case 0x124550u: goto label_124550;
        case 0x124588u: goto label_124588;
        case 0x1246c8u: goto label_1246c8;
        case 0x124704u: goto label_124704;
        case 0x12476cu: goto label_12476c;
        case 0x124780u: goto label_124780;
        case 0x124798u: goto label_124798;
        case 0x1247b4u: goto label_1247b4;
        case 0x1247e8u: goto label_1247e8;
        case 0x1247f8u: goto label_1247f8;
        case 0x124810u: goto label_124810;
        case 0x12483cu: goto label_12483c;
        case 0x124874u: goto label_124874;
        case 0x124880u: goto label_124880;
        case 0x12488cu: goto label_12488c;
        case 0x12489cu: goto label_12489c;
        case 0x1248e4u: goto label_1248e4;
        case 0x1248f4u: goto label_1248f4;
        case 0x124908u: goto label_124908;
        case 0x124914u: goto label_124914;
        case 0x124954u: goto label_124954;
        case 0x124960u: goto label_124960;
        case 0x124968u: goto label_124968;
        case 0x124978u: goto label_124978;
        case 0x12498cu: goto label_12498c;
        case 0x124998u: goto label_124998;
        case 0x1249a4u: goto label_1249a4;
        case 0x1249b0u: goto label_1249b0;
        case 0x1249ccu: goto label_1249cc;
        case 0x1249e4u: goto label_1249e4;
        case 0x1249f0u: goto label_1249f0;
        case 0x124a34u: goto label_124a34;
        case 0x124a40u: goto label_124a40;
        case 0x124a54u: goto label_124a54;
        case 0x124a60u: goto label_124a60;
        case 0x124a6cu: goto label_124a6c;
        case 0x124a78u: goto label_124a78;
        case 0x124aa0u: goto label_124aa0;
        case 0x124aacu: goto label_124aac;
        case 0x124ac4u: goto label_124ac4;
        case 0x124ad0u: goto label_124ad0;
        case 0x124ae0u: goto label_124ae0;
        case 0x124b6cu: goto label_124b6c;
        case 0x124b78u: goto label_124b78;
        case 0x124b98u: goto label_124b98;
        case 0x124ba8u: goto label_124ba8;
        case 0x124bb8u: goto label_124bb8;
        case 0x124bccu: goto label_124bcc;
        case 0x124bd4u: goto label_124bd4;
        case 0x124be0u: goto label_124be0;
        case 0x124becu: goto label_124bec;
        case 0x124bf8u: goto label_124bf8;
        case 0x124c18u: goto label_124c18;
        case 0x124c28u: goto label_124c28;
        case 0x124c3cu: goto label_124c3c;
        case 0x124c64u: goto label_124c64;
        case 0x124d38u: goto label_124d38;
        case 0x124db8u: goto label_124db8;
        case 0x124dccu: goto label_124dcc;
        case 0x124ddcu: goto label_124ddc;
        case 0x124df8u: goto label_124df8;
        case 0x124e0cu: goto label_124e0c;
        case 0x124e1cu: goto label_124e1c;
        case 0x124e38u: goto label_124e38;
        case 0x124eb4u: goto label_124eb4;
        case 0x124f44u: goto label_124f44;
        case 0x124f60u: goto label_124f60;
        case 0x124f78u: goto label_124f78;
        case 0x124f94u: goto label_124f94;
        case 0x124fb8u: goto label_124fb8;
        case 0x124ff8u: goto label_124ff8;
        case 0x125008u: goto label_125008;
        case 0x125050u: goto label_125050;
        case 0x125070u: goto label_125070;
        case 0x125094u: goto label_125094;
        case 0x1250a4u: goto label_1250a4;
        case 0x1250b8u: goto label_1250b8;
        case 0x1250ccu: goto label_1250cc;
        case 0x1250f0u: goto label_1250f0;
        case 0x125110u: goto label_125110;
        case 0x125128u: goto label_125128;
        case 0x12513cu: goto label_12513c;
        case 0x12514cu: goto label_12514c;
        case 0x125160u: goto label_125160;
        case 0x12517cu: goto label_12517c;
        case 0x12518cu: goto label_12518c;
        case 0x125204u: goto label_125204;
        case 0x125214u: goto label_125214;
        case 0x125298u: goto label_125298;
        case 0x1252acu: goto label_1252ac;
        case 0x1252c0u: goto label_1252c0;
        case 0x1252e8u: goto label_1252e8;
        case 0x1252f8u: goto label_1252f8;
        case 0x125328u: goto label_125328;
        case 0x125368u: goto label_125368;
        case 0x125394u: goto label_125394;
        case 0x1253b8u: goto label_1253b8;
        case 0x1253c4u: goto label_1253c4;
        case 0x1253d8u: goto label_1253d8;
        default: break;
    }

    ctx->pc = 0x124258u;

    // 0x124258: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x124258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x12425c: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x12425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
    // 0x124260: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x124260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x124264: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x124264u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124268: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x124268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x12426c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12426cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124270: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x124270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x124274: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x124274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124278: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x124278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x12427c: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x12427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x124280: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x124280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x124284: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x124284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x124288: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x124288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x12428c: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x12428cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x124290: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x124290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x124294: 0x8fcb0040  lw          $t3, 0x40($fp)
    ctx->pc = 0x124294u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 64)));
    // 0x124298: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x124298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x12429c: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x12429cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x1242a0: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x1242A0u;
    {
        const bool branch_taken_0x1242a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1242A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1242A0u;
            // 0x1242a4: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1242a0) {
            ctx->pc = 0x1242CCu;
            goto label_1242cc;
        }
    }
    ctx->pc = 0x1242A8u;
    // 0x1242a8: 0x8fc60044  lw          $a2, 0x44($fp)
    ctx->pc = 0x1242a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1242ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1242acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1242b0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1242b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1242b4: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x1242b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
    // 0x1242b8: 0x8fc20044  lw          $v0, 0x44($fp)
    ctx->pc = 0x1242b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1242bc: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1242bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1242c0: 0xc049ce4  jal         func_127390
    ctx->pc = 0x1242C0u;
    SET_GPR_U32(ctx, 31, 0x1242C8u);
    ctx->pc = 0x1242C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1242C0u;
            // 0x1242c4: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1242C8u; }
        if (ctx->pc != 0x1242C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1242C8u; }
        if (ctx->pc != 0x1242C8u) { return; }
    }
    ctx->pc = 0x1242C8u;
label_1242c8:
    // 0x1242c8: 0xafc00040  sw          $zero, 0x40($fp)
    ctx->pc = 0x1242c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_1242cc:
    // 0x1242cc: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x1242ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x1242d0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1242d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1242d4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1242d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1242d8: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1242D8u;
    {
        const bool branch_taken_0x1242d8 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1242d8) {
            ctx->pc = 0x1242DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1242D8u;
            // 0x1242dc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12430Cu;
            goto label_12430c;
        }
    }
    ctx->pc = 0x1242E0u;
    // 0x1242e0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1242e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1242e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1242e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1242e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1242e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1242ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1242ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1242f0: 0x2c3b024  and         $s6, $s6, $v1
    ctx->pc = 0x1242f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x1242f4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1242f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1242f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1242f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1242fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1242fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124300: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x124300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x124304: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x124304u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x124308: 0x16103e  dsrl32      $v0, $s6, 0
    ctx->pc = 0x124308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_12430c:
    // 0x12430c: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x12430cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124310: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x124310u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x124314: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x124314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x124318: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x124318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x12431c: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x12431Cu;
    {
        const bool branch_taken_0x12431c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x124320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12431Cu;
            // 0x124320: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12431c) {
            ctx->pc = 0x124378u;
            goto label_124378;
        }
    }
    ctx->pc = 0x124324u;
    // 0x124324: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x124324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124328: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x124328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x12432c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12432cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124330: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x124330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x124334: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x124334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x124338: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124338u;
    {
        const bool branch_taken_0x124338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124338u;
            // 0x12433c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124338) {
            ctx->pc = 0x12434Cu;
            goto label_12434c;
        }
    }
    ctx->pc = 0x124340u;
    // 0x124340: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x124340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x124344: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124344u;
    {
        const bool branch_taken_0x124344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124344u;
            // 0x124348: 0x24552010  addiu       $s5, $v0, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124344) {
            ctx->pc = 0x124354u;
            goto label_124354;
        }
    }
    ctx->pc = 0x12434Cu;
label_12434c:
    // 0x12434c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x12434cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x124350: 0x24552020  addiu       $s5, $v0, 0x2020
    ctx->pc = 0x124350u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8224));
label_124354:
    // 0x124354: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x124354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x124358: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x124358u;
    {
        const bool branch_taken_0x124358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12435Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124358u;
            // 0x12435c: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124358) {
            ctx->pc = 0x1243B0u;
            goto label_1243b0;
        }
    }
    ctx->pc = 0x124360u;
    // 0x124360: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x124360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
    // 0x124364: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x124364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
    // 0x124368: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x124368u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x12436c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x12436cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x124370: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x124370u;
    {
        const bool branch_taken_0x124370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124370u;
            // 0x124374: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124370) {
            ctx->pc = 0x1243B0u;
            goto label_1243b0;
        }
    }
    ctx->pc = 0x124378u;
label_124378:
    // 0x124378: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124378u;
    SET_GPR_U32(ctx, 31, 0x124380u);
    ctx->pc = 0x12437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124378u;
            // 0x12437c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124380u; }
        if (ctx->pc != 0x124380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124380u; }
        if (ctx->pc != 0x124380u) { return; }
    }
    ctx->pc = 0x124380u;
label_124380:
    // 0x124380: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x124380u;
    {
        const bool branch_taken_0x124380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124380u;
            // 0x124384: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124380) {
            ctx->pc = 0x1243B8u;
            goto label_1243b8;
        }
    }
    ctx->pc = 0x124388u;
    // 0x124388: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x124388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12438c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124390: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x124390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x124394: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x124394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x124398: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x124398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x12439c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12439Cu;
    {
        const bool branch_taken_0x12439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12439Cu;
            // 0x1243a0: 0x24752028  addiu       $s5, $v1, 0x2028 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12439c) {
            ctx->pc = 0x1243B0u;
            goto label_1243b0;
        }
    }
    ctx->pc = 0x1243A4u;
    // 0x1243a4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1243a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1243a8: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1243a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1243ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1243acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1243b0:
    // 0x1243b0: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x1243B0u;
    {
        const bool branch_taken_0x1243b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1243B0u;
            // 0x1243b4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243b0) {
            ctx->pc = 0x1253F4u;
            goto label_1253f4;
        }
    }
    ctx->pc = 0x1243B8u;
label_1243b8:
    // 0x1243b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1243b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243bc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1243bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243c0: 0xc04a016  jal         func_128058
    ctx->pc = 0x1243C0u;
    SET_GPR_U32(ctx, 31, 0x1243C8u);
    ctx->pc = 0x1243C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1243C0u;
            // 0x1243c4: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x128058u;
    if (runtime->hasFunction(0x128058u)) {
        auto targetFn = runtime->lookupFunction(0x128058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243C8u; }
        if (ctx->pc != 0x1243C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x128058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1243C8u; }
        if (ctx->pc != 0x1243C8u) { return; }
    }
    ctx->pc = 0x1243C8u;
label_1243c8:
    // 0x1243c8: 0x101d02  srl         $v1, $s0, 20
    ctx->pc = 0x1243c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x1243cc: 0x307407ff  andi        $s4, $v1, 0x7FF
    ctx->pc = 0x1243ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x1243d0: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x1243D0u;
    {
        const bool branch_taken_0x1243d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1243D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1243D0u;
            // 0x1243d4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1243d0) {
            ctx->pc = 0x124428u;
            goto label_124428;
        }
    }
    ctx->pc = 0x1243D8u;
    // 0x1243d8: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x1243d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1243dc: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x1243dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x1243e0: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x1243e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1243e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1243e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1243e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1243e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1243ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1243ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1243f0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1243f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1243f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1243f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1243f8: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x1243f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x1243fc: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1243fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
    // 0x124400: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x124400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x124404: 0x17103f  dsra32      $v0, $s7, 0
    ctx->pc = 0x124404u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x124408: 0x2694fc01  addiu       $s4, $s4, -0x3FF
    ctx->pc = 0x124408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966273));
    // 0x12440c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x12440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x124410: 0x2e5b824  and         $s7, $s7, $a1
    ctx->pc = 0x124410u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 5));
    // 0x124414: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x124414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x124418: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x124418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x12441c: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x12441cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    // 0x124420: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x124420u;
    {
        const bool branch_taken_0x124420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124420u;
            // 0x124424: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124420) {
            ctx->pc = 0x1244C0u;
            goto label_1244c0;
        }
    }
    ctx->pc = 0x124428u;
label_124428:
    // 0x124428: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x124428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12442c: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x12442cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124430: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x124430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x124434: 0x24940432  addiu       $s4, $a0, 0x432
    ctx->pc = 0x124434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
    // 0x124438: 0x2a820021  slti        $v0, $s4, 0x21
    ctx->pc = 0x124438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x12443c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x12443Cu;
    {
        const bool branch_taken_0x12443c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12443Cu;
            // 0x124440: 0x141023  negu        $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12443c) {
            ctx->pc = 0x124464u;
            goto label_124464;
        }
    }
    ctx->pc = 0x124444u;
    // 0x124444: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x124444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
    // 0x124448: 0x141823  negu        $v1, $s4
    ctx->pc = 0x124448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x12444c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x12444cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x124450: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x124450u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x124454: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x124454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
    // 0x124458: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x124458u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x12445c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12445Cu;
    {
        const bool branch_taken_0x12445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12445Cu;
            // 0x124460: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12445c) {
            ctx->pc = 0x124470u;
            goto label_124470;
        }
    }
    ctx->pc = 0x124464u;
label_124464:
    // 0x124464: 0x16183c  dsll32      $v1, $s6, 0
    ctx->pc = 0x124464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
    // 0x124468: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x124468u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x12446c: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x12446cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_124470:
    // 0x124470: 0xc0a215c  jal         func_288570
    ctx->pc = 0x124470u;
    SET_GPR_U32(ctx, 31, 0x124478u);
    ctx->pc = 0x124474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124470u;
            // 0x124474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124478u; }
        if (ctx->pc != 0x124478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124478u; }
        if (ctx->pc != 0x124478u) { return; }
    }
    ctx->pc = 0x124478u;
label_124478:
    // 0x124478: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124478u;
    {
        const bool branch_taken_0x124478 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x12447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124478u;
            // 0x12447c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124478) {
            ctx->pc = 0x124494u;
            goto label_124494;
        }
    }
    ctx->pc = 0x124480u;
    // 0x124480: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x124480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x124484: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x124484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x124488: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x124488u;
    SET_GPR_U32(ctx, 31, 0x124490u);
    ctx->pc = 0x12448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124488u;
            // 0x12448c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124490u; }
        if (ctx->pc != 0x124490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124490u; }
        if (ctx->pc != 0x124490u) { return; }
    }
    ctx->pc = 0x124490u;
label_124490:
    // 0x124490: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x124490u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124494:
    // 0x124494: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x124494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x124498: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x124498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x12449c: 0x17183f  dsra32      $v1, $s7, 0
    ctx->pc = 0x12449cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1244a0: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x1244a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
    // 0x1244a4: 0x2e4b824  and         $s7, $s7, $a0
    ctx->pc = 0x1244a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) & GPR_U64(ctx, 4));
    // 0x1244a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1244a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1244ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1244acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1244b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1244b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1244b4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1244b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1244b8: 0x2694fbcd  addiu       $s4, $s4, -0x433
    ctx->pc = 0x1244b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294966221));
    // 0x1244bc: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x1244bcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_1244c0:
    // 0x1244c0: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x1244c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1244c4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x1244c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x1244c8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x1244C8u;
    SET_GPR_U32(ctx, 31, 0x1244D0u);
    ctx->pc = 0x1244CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1244C8u;
            // 0x1244cc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244D0u; }
        if (ctx->pc != 0x1244D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244D0u; }
        if (ctx->pc != 0x1244D0u) { return; }
    }
    ctx->pc = 0x1244D0u;
label_1244d0:
    // 0x1244d0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1244d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1244d4: 0xdc252030  ld          $a1, 0x2030($at)
    ctx->pc = 0x1244d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 8240)));
    // 0x1244d8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1244D8u;
    SET_GPR_U32(ctx, 31, 0x1244E0u);
    ctx->pc = 0x1244DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1244D8u;
            // 0x1244dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244E0u; }
        if (ctx->pc != 0x1244E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244E0u; }
        if (ctx->pc != 0x1244E0u) { return; }
    }
    ctx->pc = 0x1244E0u;
label_1244e0:
    // 0x1244e0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1244e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1244e4: 0xdc252038  ld          $a1, 0x2038($at)
    ctx->pc = 0x1244e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 8248)));
    // 0x1244e8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x1244E8u;
    SET_GPR_U32(ctx, 31, 0x1244F0u);
    ctx->pc = 0x1244ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1244E8u;
            // 0x1244ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244F0u; }
        if (ctx->pc != 0x1244F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244F0u; }
        if (ctx->pc != 0x1244F0u) { return; }
    }
    ctx->pc = 0x1244F0u;
label_1244f0:
    // 0x1244f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1244f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1244f4: 0xc0a215c  jal         func_288570
    ctx->pc = 0x1244F4u;
    SET_GPR_U32(ctx, 31, 0x1244FCu);
    ctx->pc = 0x1244F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1244F4u;
            // 0x1244f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244FCu; }
        if (ctx->pc != 0x1244FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1244FCu; }
        if (ctx->pc != 0x1244FCu) { return; }
    }
    ctx->pc = 0x1244FCu;
label_1244fc:
    // 0x1244fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1244fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x124500: 0xdc252040  ld          $a1, 0x2040($at)
    ctx->pc = 0x124500u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 8256)));
    // 0x124504: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124504u;
    SET_GPR_U32(ctx, 31, 0x12450Cu);
    ctx->pc = 0x124508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124504u;
            // 0x124508: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12450Cu; }
        if (ctx->pc != 0x12450Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12450Cu; }
        if (ctx->pc != 0x12450Cu) { return; }
    }
    ctx->pc = 0x12450Cu;
label_12450c:
    // 0x12450c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12450cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124510: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x124510u;
    SET_GPR_U32(ctx, 31, 0x124518u);
    ctx->pc = 0x124514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124510u;
            // 0x124514: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124518u; }
        if (ctx->pc != 0x124518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124518u; }
        if (ctx->pc != 0x124518u) { return; }
    }
    ctx->pc = 0x124518u;
label_124518:
    // 0x124518: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124518u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12451c: 0xc0a218a  jal         func_288628
    ctx->pc = 0x12451Cu;
    SET_GPR_U32(ctx, 31, 0x124524u);
    ctx->pc = 0x124520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12451Cu;
            // 0x124520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124524u; }
        if (ctx->pc != 0x124524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124524u; }
        if (ctx->pc != 0x124524u) { return; }
    }
    ctx->pc = 0x124524u;
label_124524:
    // 0x124524: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x124524u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x124528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12452c: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12452Cu;
    SET_GPR_U32(ctx, 31, 0x124534u);
    ctx->pc = 0x124530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12452Cu;
            // 0x124530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124534u; }
        if (ctx->pc != 0x124534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124534u; }
        if (ctx->pc != 0x124534u) { return; }
    }
    ctx->pc = 0x124534u;
label_124534:
    // 0x124534: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124534u;
    {
        const bool branch_taken_0x124534 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x124538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124534u;
            // 0x124538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124534) {
            ctx->pc = 0x12455Cu;
            goto label_12455c;
        }
    }
    ctx->pc = 0x12453Cu;
    // 0x12453c: 0xc0a215c  jal         func_288570
    ctx->pc = 0x12453Cu;
    SET_GPR_U32(ctx, 31, 0x124544u);
    ctx->pc = 0x124540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12453Cu;
            // 0x124540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124544u; }
        if (ctx->pc != 0x124544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124544u; }
        if (ctx->pc != 0x124544u) { return; }
    }
    ctx->pc = 0x124544u;
label_124544:
    // 0x124544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x124544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124548: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124548u;
    SET_GPR_U32(ctx, 31, 0x124550u);
    ctx->pc = 0x12454Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124548u;
            // 0x12454c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124550u; }
        if (ctx->pc != 0x124550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124550u; }
        if (ctx->pc != 0x124550u) { return; }
    }
    ctx->pc = 0x124550u;
label_124550:
    // 0x124550: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x124550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x124554: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x124554u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3));
    // 0x124558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12455c:
    // 0x12455c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x12455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x124560: 0x2e620017  sltiu       $v0, $s3, 0x17
    ctx->pc = 0x124560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x124564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x124564u;
    {
        const bool branch_taken_0x124564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124564u;
            // 0x124568: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124564) {
            ctx->pc = 0x124598u;
            goto label_124598;
        }
    }
    ctx->pc = 0x12456Cu;
    // 0x12456c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x12456cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x124570: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x124570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x124574: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124578: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12457c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12457cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x124580: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124580u;
    SET_GPR_U32(ctx, 31, 0x124588u);
    ctx->pc = 0x124584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124580u;
            // 0x124584: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124588u; }
        if (ctx->pc != 0x124588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124588u; }
        if (ctx->pc != 0x124588u) { return; }
    }
    ctx->pc = 0x124588u;
label_124588:
    // 0x124588: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x124588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12458c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x12458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x124590: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x124590u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x124594: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x124594u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4));
label_124598:
    // 0x124598: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x124598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x12459c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x12459cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1245a0: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1245A0u;
    {
        const bool branch_taken_0x1245a0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1245a0) {
            ctx->pc = 0x1245A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1245A0u;
            // 0x1245a4: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1245B4u;
            goto label_1245b4;
        }
    }
    ctx->pc = 0x1245A8u;
    // 0x1245a8: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x1245a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
    // 0x1245ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1245ACu;
    {
        const bool branch_taken_0x1245ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1245ACu;
            // 0x1245b0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245ac) {
            ctx->pc = 0x1245BCu;
            goto label_1245bc;
        }
    }
    ctx->pc = 0x1245B4u;
label_1245b4:
    // 0x1245b4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1245b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1245b8: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x1245b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_1245bc:
    // 0x1245bc: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1245BCu;
    {
        const bool branch_taken_0x1245bc = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1245C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1245BCu;
            // 0x1245c0: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245bc) {
            ctx->pc = 0x1245D8u;
            goto label_1245d8;
        }
    }
    ctx->pc = 0x1245C4u;
    // 0x1245c4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1245c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1245c8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1245c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1245cc: 0xafb3003c  sw          $s3, 0x3C($sp)
    ctx->pc = 0x1245ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
    // 0x1245d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1245D0u;
    {
        const bool branch_taken_0x1245d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1245D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1245D0u;
            // 0x1245d4: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1245d0) {
            ctx->pc = 0x1245F0u;
            goto label_1245f0;
        }
    }
    ctx->pc = 0x1245D8u;
label_1245d8:
    // 0x1245d8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1245d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1245dc: 0x131023  negu        $v0, $s3
    ctx->pc = 0x1245dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1245e0: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1245e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1245e4: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x1245e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x1245e8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x1245e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x1245ec: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1245ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1245f0:
    // 0x1245f0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1245f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1245f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1245f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1245f8: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1245f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1245fc: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x1245fcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0));
    // 0x124600: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x124600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x124604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x124604u;
    {
        const bool branch_taken_0x124604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124604u;
            // 0x124608: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124604) {
            ctx->pc = 0x124618u;
            goto label_124618;
        }
    }
    ctx->pc = 0x12460Cu;
    // 0x12460c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x12460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x124610: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124614: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x124614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_124618:
    // 0x124618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x124618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12461c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x12461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124620: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x124620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x124624: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x124624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x124628: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x124628u;
    {
        const bool branch_taken_0x124628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124628u;
            // 0x12462c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124628) {
            ctx->pc = 0x1246ACu;
            goto label_1246ac;
        }
    }
    ctx->pc = 0x124630u;
    // 0x124630: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x124630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x124634: 0x24422050  addiu       $v0, $v0, 0x2050
    ctx->pc = 0x124634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8272));
    // 0x124638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12463c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x124640: 0x800008  jr          $a0
    ctx->pc = 0x124640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124648u: goto label_124648;
            case 0x124664u: goto label_124664;
            case 0x124668u: goto label_124668;
            case 0x124688u: goto label_124688;
            case 0x12468Cu: goto label_12468c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x124648u;
label_124648:
    // 0x124648: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x124648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12464c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124650: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x124650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x124654: 0x24140012  addiu       $s4, $zero, 0x12
    ctx->pc = 0x124654u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x124658: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x124658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12465c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12465Cu;
    {
        const bool branch_taken_0x12465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12465Cu;
            // 0x124660: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12465c) {
            ctx->pc = 0x1246ACu;
            goto label_1246ac;
        }
    }
    ctx->pc = 0x124664u;
label_124664:
    // 0x124664: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x124664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_124668:
    // 0x124668: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x124668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12466c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12466cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124670: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x124670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x124674: 0x62a00b  movn        $s4, $v1, $v0
    ctx->pc = 0x124674u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
    // 0x124678: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x124678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
    // 0x12467c: 0xafb40028  sw          $s4, 0x28($sp)
    ctx->pc = 0x12467cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
    // 0x124680: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x124680u;
    {
        const bool branch_taken_0x124680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124680u;
            // 0x124684: 0xafb40020  sw          $s4, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124680) {
            ctx->pc = 0x1246ACu;
            goto label_1246ac;
        }
    }
    ctx->pc = 0x124688u;
label_124688:
    // 0x124688: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x124688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_12468c:
    // 0x12468c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x12468cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x124690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124694: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x124694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x124698: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x124698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12469c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x12469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1246a0: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x1246a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x1246a4: 0x14102a  slt         $v0, $zero, $s4
    ctx->pc = 0x1246a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1246a8: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x1246a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
label_1246ac:
    // 0x1246ac: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x1246acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1246b0: 0x2e820018  sltiu       $v0, $s4, 0x18
    ctx->pc = 0x1246b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1246b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1246B4u;
    {
        const bool branch_taken_0x1246b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1246B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246B4u;
            // 0x1246b8: 0xafc00044  sw          $zero, 0x44($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246b4) {
            ctx->pc = 0x1246F0u;
            goto label_1246f0;
        }
    }
    ctx->pc = 0x1246BCu;
    // 0x1246bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1246bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1246c0: 0x2c51000f  sltiu       $s1, $v0, 0xF
    ctx->pc = 0x1246c0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1246c4: 0x0  nop
    ctx->pc = 0x1246c4u;
    // NOP
label_1246c8:
    // 0x1246c8: 0x8fc30044  lw          $v1, 0x44($fp)
    ctx->pc = 0x1246c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
    // 0x1246cc: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1246ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1246d0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1246d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1246d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1246d8: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1246d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1246dc: 0xafc30044  sw          $v1, 0x44($fp)
    ctx->pc = 0x1246dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
    // 0x1246e0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1246E0u;
    {
        const bool branch_taken_0x1246e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1246e0) {
            ctx->pc = 0x1246C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1246c8;
        }
    }
    ctx->pc = 0x1246E8u;
    // 0x1246e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1246E8u;
    {
        const bool branch_taken_0x1246e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1246ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1246E8u;
            // 0x1246ec: 0x8fc50044  lw          $a1, 0x44($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1246e8) {
            ctx->pc = 0x1246FCu;
            goto label_1246fc;
        }
    }
    ctx->pc = 0x1246F0u;
label_1246f0:
    // 0x1246f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1246f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1246f4: 0x2c71000f  sltiu       $s1, $v1, 0xF
    ctx->pc = 0x1246f4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1246f8: 0x8fc50044  lw          $a1, 0x44($fp)
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_1246fc:
    // 0x1246fc: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x1246FCu;
    SET_GPR_U32(ctx, 31, 0x124704u);
    ctx->pc = 0x124700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1246FCu;
            // 0x124700: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124704u; }
        if (ctx->pc != 0x124704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124704u; }
        if (ctx->pc != 0x124704u) { return; }
    }
    ctx->pc = 0x124704u;
label_124704:
    // 0x124704: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x124704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x124708: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x124708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x12470c: 0x12200102  beqz        $s1, . + 4 + (0x102 << 2)
    ctx->pc = 0x12470Cu;
    {
        const bool branch_taken_0x12470c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x124710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12470Cu;
            // 0x124710: 0x8fb50058  lw          $s5, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12470c) {
            ctx->pc = 0x124B18u;
            goto label_124b18;
        }
    }
    ctx->pc = 0x124714u;
    // 0x124714: 0x12400100  beqz        $s2, . + 4 + (0x100 << 2)
    ctx->pc = 0x124714u;
    {
        const bool branch_taken_0x124714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x124718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124714u;
            // 0x124718: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124714) {
            ctx->pc = 0x124B18u;
            goto label_124b18;
        }
    }
    ctx->pc = 0x12471Cu;
    // 0x12471c: 0x2c0b82d  daddu       $s7, $s6, $zero
    ctx->pc = 0x12471cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124720: 0xafb3002c  sw          $s3, 0x2C($sp)
    ctx->pc = 0x124720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    // 0x124724: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x124724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124728: 0x1a600024  blez        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x124728u;
    {
        const bool branch_taken_0x124728 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12472Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124728u;
            // 0x12472c: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124728) {
            ctx->pc = 0x1247BCu;
            goto label_1247bc;
        }
    }
    ctx->pc = 0x124730u;
    // 0x124730: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x124730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x124734: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x124734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x124738: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x124738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x12473c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x12473cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x124740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124744: 0x138103  sra         $s0, $s3, 4
    ctx->pc = 0x124744u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
    // 0x124748: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x124748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x12474c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12474Cu;
    {
        const bool branch_taken_0x12474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12474Cu;
            // 0x124750: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12474c) {
            ctx->pc = 0x124770u;
            goto label_124770;
        }
    }
    ctx->pc = 0x124754u;
    // 0x124754: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x124754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x124758: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12475c: 0xdc4521b0  ld          $a1, 0x21B0($v0)
    ctx->pc = 0x12475cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8624)));
    // 0x124760: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x124760u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x124764: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x124764u;
    SET_GPR_U32(ctx, 31, 0x12476Cu);
    ctx->pc = 0x124768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124764u;
            // 0x124768: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12476Cu; }
        if (ctx->pc != 0x12476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12476Cu; }
        if (ctx->pc != 0x12476Cu) { return; }
    }
    ctx->pc = 0x12476Cu;
label_12476c:
    // 0x12476c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12476cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124770:
    // 0x124770: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x124770u;
    {
        const bool branch_taken_0x124770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124770u;
            // 0x124774: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124770) {
            ctx->pc = 0x1247A8u;
            goto label_1247a8;
        }
    }
    ctx->pc = 0x124778u;
    // 0x124778: 0x24512190  addiu       $s1, $v0, 0x2190
    ctx->pc = 0x124778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8592));
    // 0x12477c: 0x0  nop
    ctx->pc = 0x12477cu;
    // NOP
label_124780:
    // 0x124780: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x124780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x124784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124784u;
    {
        const bool branch_taken_0x124784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124784u;
            // 0x124788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124784) {
            ctx->pc = 0x12479Cu;
            goto label_12479c;
        }
    }
    ctx->pc = 0x12478Cu;
    // 0x12478c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x12478cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124790: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124790u;
    SET_GPR_U32(ctx, 31, 0x124798u);
    ctx->pc = 0x124794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124790u;
            // 0x124794: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124798u; }
        if (ctx->pc != 0x124798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124798u; }
        if (ctx->pc != 0x124798u) { return; }
    }
    ctx->pc = 0x124798u;
label_124798:
    // 0x124798: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124798u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12479c:
    // 0x12479c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x12479cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1247a0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1247A0u;
    {
        const bool branch_taken_0x1247a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1247A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247A0u;
            // 0x1247a4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247a0) {
            ctx->pc = 0x124780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124780;
        }
    }
    ctx->pc = 0x1247A8u;
label_1247a8:
    // 0x1247a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1247a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247ac: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x1247ACu;
    SET_GPR_U32(ctx, 31, 0x1247B4u);
    ctx->pc = 0x1247B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1247ACu;
            // 0x1247b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247B4u; }
        if (ctx->pc != 0x1247B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247B4u; }
        if (ctx->pc != 0x1247B4u) { return; }
    }
    ctx->pc = 0x1247B4u;
label_1247b4:
    // 0x1247b4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1247B4u;
    {
        const bool branch_taken_0x1247b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247B4u;
            // 0x1247b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247b4) {
            ctx->pc = 0x124820u;
            goto label_124820;
        }
    }
    ctx->pc = 0x1247BCu;
label_1247bc:
    // 0x1247bc: 0x138823  negu        $s1, $s3
    ctx->pc = 0x1247bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
    // 0x1247c0: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1247C0u;
    {
        const bool branch_taken_0x1247c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247C0u;
            // 0x1247c4: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247c0) {
            ctx->pc = 0x124820u;
            goto label_124820;
        }
    }
    ctx->pc = 0x1247C8u;
    // 0x1247c8: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x1247c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x1247cc: 0x246320c8  addiu       $v1, $v1, 0x20C8
    ctx->pc = 0x1247ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x1247d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1247d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1247d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1247d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1247d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1247dc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x1247dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1247e0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x1247E0u;
    SET_GPR_U32(ctx, 31, 0x1247E8u);
    ctx->pc = 0x1247E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1247E0u;
            // 0x1247e4: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247E8u; }
        if (ctx->pc != 0x1247E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1247E8u; }
        if (ctx->pc != 0x1247E8u) { return; }
    }
    ctx->pc = 0x1247E8u;
label_1247e8:
    // 0x1247e8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1247E8u;
    {
        const bool branch_taken_0x1247e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247E8u;
            // 0x1247ec: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247e8) {
            ctx->pc = 0x124820u;
            goto label_124820;
        }
    }
    ctx->pc = 0x1247F0u;
    // 0x1247f0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1247f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1247f4: 0x24512190  addiu       $s1, $v0, 0x2190
    ctx->pc = 0x1247f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8592));
label_1247f8:
    // 0x1247f8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1247f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1247fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1247FCu;
    {
        const bool branch_taken_0x1247fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1247FCu;
            // 0x124800: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247fc) {
            ctx->pc = 0x124814u;
            goto label_124814;
        }
    }
    ctx->pc = 0x124804u;
    // 0x124804: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x124804u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x124808: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124808u;
    SET_GPR_U32(ctx, 31, 0x124810u);
    ctx->pc = 0x12480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124808u;
            // 0x12480c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124810u; }
        if (ctx->pc != 0x124810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124810u; }
        if (ctx->pc != 0x124810u) { return; }
    }
    ctx->pc = 0x124810u;
label_124810:
    // 0x124810: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x124810u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124814:
    // 0x124814: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x124814u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x124818: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x124818u;
    {
        const bool branch_taken_0x124818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124818u;
            // 0x12481c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124818) {
            ctx->pc = 0x1247F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1247f8;
        }
    }
    ctx->pc = 0x124820u;
label_124820:
    // 0x124820: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x124820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124824: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x124824u;
    {
        const bool branch_taken_0x124824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124824) {
            ctx->pc = 0x124878u;
            goto label_124878;
        }
    }
    ctx->pc = 0x12482Cu;
    // 0x12482c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x12482cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x124830: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x124830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x124834: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124834u;
    SET_GPR_U32(ctx, 31, 0x12483Cu);
    ctx->pc = 0x124838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124834u;
            // 0x124838: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12483Cu; }
        if (ctx->pc != 0x12483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12483Cu; }
        if (ctx->pc != 0x12483Cu) { return; }
    }
    ctx->pc = 0x12483Cu;
label_12483c:
    // 0x12483c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12483Cu;
    {
        const bool branch_taken_0x12483c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x124840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12483Cu;
            // 0x124840: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12483c) {
            ctx->pc = 0x124878u;
            goto label_124878;
        }
    }
    ctx->pc = 0x124844u;
    // 0x124844: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x124844u;
    {
        const bool branch_taken_0x124844 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x124844) {
            ctx->pc = 0x124878u;
            goto label_124878;
        }
    }
    ctx->pc = 0x12484Cu;
    // 0x12484c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124850: 0x188000ac  blez        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x124850u;
    {
        const bool branch_taken_0x124850 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x124854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124850u;
            // 0x124854: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124850) {
            ctx->pc = 0x124B04u;
            goto label_124b04;
        }
    }
    ctx->pc = 0x124858u;
    // 0x124858: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x124858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12485c: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x12485cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x124860: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x124860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x124864: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x124864u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x124868: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x124868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12486c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x12486Cu;
    SET_GPR_U32(ctx, 31, 0x124874u);
    ctx->pc = 0x124870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12486Cu;
            // 0x124870: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124874u; }
        if (ctx->pc != 0x124874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124874u; }
        if (ctx->pc != 0x124874u) { return; }
    }
    ctx->pc = 0x124874u;
label_124874:
    // 0x124874: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x124874u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124878:
    // 0x124878: 0xc0a215c  jal         func_288570
    ctx->pc = 0x124878u;
    SET_GPR_U32(ctx, 31, 0x124880u);
    ctx->pc = 0x12487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124878u;
            // 0x12487c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124880u; }
        if (ctx->pc != 0x124880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124880u; }
        if (ctx->pc != 0x124880u) { return; }
    }
    ctx->pc = 0x124880u;
label_124880:
    // 0x124880: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124884: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124884u;
    SET_GPR_U32(ctx, 31, 0x12488Cu);
    ctx->pc = 0x124888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124884u;
            // 0x124888: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12488Cu; }
        if (ctx->pc != 0x12488Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12488Cu; }
        if (ctx->pc != 0x12488Cu) { return; }
    }
    ctx->pc = 0x12488Cu;
label_12488c:
    // 0x12488c: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x12488cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x124890: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x124890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x124894: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x124894u;
    SET_GPR_U32(ctx, 31, 0x12489Cu);
    ctx->pc = 0x124898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124894u;
            // 0x124898: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12489Cu; }
        if (ctx->pc != 0x12489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12489Cu; }
        if (ctx->pc != 0x12489Cu) { return; }
    }
    ctx->pc = 0x12489Cu;
label_12489c:
    // 0x12489c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12489cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248a0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1248a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1248a4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1248a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1248a8: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x1248a8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x1248ac: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x1248acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x1248b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1248b4: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x1248b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x1248b8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1248b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1248bc: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x1248bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1248c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1248c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1248c4: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1248C4u;
    {
        const bool branch_taken_0x1248c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1248c4) {
            ctx->pc = 0x1248C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1248C4u;
            // 0x1248c8: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124924u;
            goto label_124924;
        }
    }
    ctx->pc = 0x1248CCu;
    // 0x1248cc: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x1248ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x1248d0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1248d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1248d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1248d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248d8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1248d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1248dc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x1248DCu;
    SET_GPR_U32(ctx, 31, 0x1248E4u);
    ctx->pc = 0x1248E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248DCu;
            // 0x1248e0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248E4u; }
        if (ctx->pc != 0x1248E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248E4u; }
        if (ctx->pc != 0x1248E4u) { return; }
    }
    ctx->pc = 0x1248E4u;
label_1248e4:
    // 0x1248e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1248e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1248e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248ec: 0xc0a2148  jal         func_288520
    ctx->pc = 0x1248ECu;
    SET_GPR_U32(ctx, 31, 0x1248F4u);
    ctx->pc = 0x1248F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1248ECu;
            // 0x1248f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248F4u; }
        if (ctx->pc != 0x1248F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1248F4u; }
        if (ctx->pc != 0x1248F4u) { return; }
    }
    ctx->pc = 0x1248F4u;
label_1248f4:
    // 0x1248f4: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1248F4u;
    {
        const bool branch_taken_0x1248f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1248F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1248F4u;
            // 0x1248f8: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248f4) {
            ctx->pc = 0x125020u;
            goto label_125020;
        }
    }
    ctx->pc = 0x1248FCu;
    // 0x1248fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1248fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124900: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x124900u;
    SET_GPR_U32(ctx, 31, 0x124908u);
    ctx->pc = 0x124904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124900u;
            // 0x124904: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124908u; }
        if (ctx->pc != 0x124908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124908u; }
        if (ctx->pc != 0x124908u) { return; }
    }
    ctx->pc = 0x124908u;
label_124908:
    // 0x124908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12490c: 0xc0a2148  jal         func_288520
    ctx->pc = 0x12490Cu;
    SET_GPR_U32(ctx, 31, 0x124914u);
    ctx->pc = 0x124910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12490Cu;
            // 0x124910: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124914u; }
        if (ctx->pc != 0x124914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124914u; }
        if (ctx->pc != 0x124914u) { return; }
    }
    ctx->pc = 0x124914u;
label_124914:
    // 0x124914: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x124914u;
    {
        const bool branch_taken_0x124914 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x124918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124914u;
            // 0x124918: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124914) {
            ctx->pc = 0x125010u;
            goto label_125010;
        }
    }
    ctx->pc = 0x12491Cu;
    // 0x12491c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x12491Cu;
    {
        const bool branch_taken_0x12491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12491Cu;
            // 0x124920: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12491c) {
            ctx->pc = 0x124B0Cu;
            goto label_124b0c;
        }
    }
    ctx->pc = 0x124924u;
label_124924:
    // 0x124924: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x124924u;
    {
        const bool branch_taken_0x124924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124924u;
            // 0x124928: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124924) {
            ctx->pc = 0x124A10u;
            goto label_124a10;
        }
    }
    ctx->pc = 0x12492Cu;
    // 0x12492c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x12492cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x124930: 0x246320c8  addiu       $v1, $v1, 0x20C8
    ctx->pc = 0x124930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x124934: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x124934u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124938: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x124938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x12493c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x12493cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x124940: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x124940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x124944: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x124944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x124948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12494c: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x12494Cu;
    SET_GPR_U32(ctx, 31, 0x124954u);
    ctx->pc = 0x124950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12494Cu;
            // 0x124950: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124954u; }
        if (ctx->pc != 0x124954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124954u; }
        if (ctx->pc != 0x124954u) { return; }
    }
    ctx->pc = 0x124954u;
label_124954:
    // 0x124954: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124958: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x124958u;
    SET_GPR_U32(ctx, 31, 0x124960u);
    ctx->pc = 0x12495Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124958u;
            // 0x12495c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124960u; }
        if (ctx->pc != 0x124960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124960u; }
        if (ctx->pc != 0x124960u) { return; }
    }
    ctx->pc = 0x124960u;
label_124960:
    // 0x124960: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x124960u;
    {
        const bool branch_taken_0x124960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124960u;
            // 0x124964: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124960) {
            ctx->pc = 0x124990u;
            goto label_124990;
        }
    }
    ctx->pc = 0x124968u;
label_124968:
    // 0x124968: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x124968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12496c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12496cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x124970: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124970u;
    SET_GPR_U32(ctx, 31, 0x124978u);
    ctx->pc = 0x124974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124970u;
            // 0x124974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124978u; }
        if (ctx->pc != 0x124978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124978u; }
        if (ctx->pc != 0x124978u) { return; }
    }
    ctx->pc = 0x124978u;
label_124978:
    // 0x124978: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x124978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x12497c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x12497cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x124980: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x124980u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124984: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124984u;
    SET_GPR_U32(ctx, 31, 0x12498Cu);
    ctx->pc = 0x124988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124984u;
            // 0x124988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12498Cu; }
        if (ctx->pc != 0x12498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12498Cu; }
        if (ctx->pc != 0x12498Cu) { return; }
    }
    ctx->pc = 0x12498Cu;
label_12498c:
    // 0x12498c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12498cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124990:
    // 0x124990: 0xc0a218a  jal         func_288628
    ctx->pc = 0x124990u;
    SET_GPR_U32(ctx, 31, 0x124998u);
    ctx->pc = 0x124994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124990u;
            // 0x124994: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124998u; }
        if (ctx->pc != 0x124998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124998u; }
        if (ctx->pc != 0x124998u) { return; }
    }
    ctx->pc = 0x124998u;
label_124998:
    // 0x124998: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12499c: 0xc0a215c  jal         func_288570
    ctx->pc = 0x12499Cu;
    SET_GPR_U32(ctx, 31, 0x1249A4u);
    ctx->pc = 0x1249A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12499Cu;
            // 0x1249a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249A4u; }
        if (ctx->pc != 0x1249A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249A4u; }
        if (ctx->pc != 0x1249A4u) { return; }
    }
    ctx->pc = 0x1249A4u;
label_1249a4:
    // 0x1249a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1249a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249a8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x1249A8u;
    SET_GPR_U32(ctx, 31, 0x1249B0u);
    ctx->pc = 0x1249ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249A8u;
            // 0x1249ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249B0u; }
        if (ctx->pc != 0x1249B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249B0u; }
        if (ctx->pc != 0x1249B0u) { return; }
    }
    ctx->pc = 0x1249B0u;
label_1249b0:
    // 0x1249b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1249b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1249b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249b8: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1249b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1249bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1249bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249c0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1249c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1249c4: 0xc0a2148  jal         func_288520
    ctx->pc = 0x1249C4u;
    SET_GPR_U32(ctx, 31, 0x1249CCu);
    ctx->pc = 0x1249C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249C4u;
            // 0x1249c8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249CCu; }
        if (ctx->pc != 0x1249CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249CCu; }
        if (ctx->pc != 0x1249CCu) { return; }
    }
    ctx->pc = 0x1249CCu;
label_1249cc:
    // 0x1249cc: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x1249CCu;
    {
        const bool branch_taken_0x1249cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1249cc) {
            ctx->pc = 0x1249D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1249CCu;
            // 0x1249d0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x1249D4u;
    // 0x1249d4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1249d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1249d8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1249d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1249dc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x1249DCu;
    SET_GPR_U32(ctx, 31, 0x1249E4u);
    ctx->pc = 0x1249E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249DCu;
            // 0x1249e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E4u; }
        if (ctx->pc != 0x1249E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249E4u; }
        if (ctx->pc != 0x1249E4u) { return; }
    }
    ctx->pc = 0x1249E4u;
label_1249e4:
    // 0x1249e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1249e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1249e8: 0xc0a2148  jal         func_288520
    ctx->pc = 0x1249E8u;
    SET_GPR_U32(ctx, 31, 0x1249F0u);
    ctx->pc = 0x1249ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1249E8u;
            // 0x1249ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249F0u; }
        if (ctx->pc != 0x1249F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1249F0u; }
        if (ctx->pc != 0x1249F0u) { return; }
    }
    ctx->pc = 0x1249F0u;
label_1249f0:
    // 0x1249f0: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1249F0u;
    {
        const bool branch_taken_0x1249f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1249F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1249F0u;
            // 0x1249f4: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1249f0) {
            ctx->pc = 0x124C54u;
            goto label_124c54;
        }
    }
    ctx->pc = 0x1249F8u;
    // 0x1249f8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1249f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1249fc: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1249fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x124a00: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x124A00u;
    {
        const bool branch_taken_0x124a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124a00) {
            ctx->pc = 0x124968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124968;
        }
    }
    ctx->pc = 0x124A08u;
    // 0x124a08: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x124A08u;
    {
        const bool branch_taken_0x124a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A08u;
            // 0x124a0c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a08) {
            ctx->pc = 0x124B08u;
            goto label_124b08;
        }
    }
    ctx->pc = 0x124A10u;
label_124a10:
    // 0x124a10: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x124a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x124a14: 0x246320c8  addiu       $v1, $v1, 0x20C8
    ctx->pc = 0x124a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8392));
    // 0x124a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a1c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x124a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x124a20: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x124a20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124a24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x124a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x124a28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x124a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x124a2c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124A2Cu;
    SET_GPR_U32(ctx, 31, 0x124A34u);
    ctx->pc = 0x124A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A2Cu;
            // 0x124a30: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A34u; }
        if (ctx->pc != 0x124A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A34u; }
        if (ctx->pc != 0x124A34u) { return; }
    }
    ctx->pc = 0x124A34u;
label_124a34:
    // 0x124a34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x124A34u;
    {
        const bool branch_taken_0x124a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A34u;
            // 0x124a38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a34) {
            ctx->pc = 0x124A58u;
            goto label_124a58;
        }
    }
    ctx->pc = 0x124A3Cu;
    // 0x124a3c: 0x0  nop
    ctx->pc = 0x124a3cu;
    // NOP
label_124a40:
    // 0x124a40: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x124a40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x124a44: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x124a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x124a48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a4c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124A4Cu;
    SET_GPR_U32(ctx, 31, 0x124A54u);
    ctx->pc = 0x124A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A4Cu;
            // 0x124a50: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A54u; }
        if (ctx->pc != 0x124A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A54u; }
        if (ctx->pc != 0x124A54u) { return; }
    }
    ctx->pc = 0x124A54u;
label_124a54:
    // 0x124a54: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x124a54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124a58:
    // 0x124a58: 0xc0a218a  jal         func_288628
    ctx->pc = 0x124A58u;
    SET_GPR_U32(ctx, 31, 0x124A60u);
    ctx->pc = 0x124A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A58u;
            // 0x124a5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A60u; }
        if (ctx->pc != 0x124A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A60u; }
        if (ctx->pc != 0x124A60u) { return; }
    }
    ctx->pc = 0x124A60u;
label_124a60:
    // 0x124a60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124a60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a64: 0xc0a215c  jal         func_288570
    ctx->pc = 0x124A64u;
    SET_GPR_U32(ctx, 31, 0x124A6Cu);
    ctx->pc = 0x124A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A64u;
            // 0x124a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A6Cu; }
        if (ctx->pc != 0x124A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A6Cu; }
        if (ctx->pc != 0x124A6Cu) { return; }
    }
    ctx->pc = 0x124A6Cu;
label_124a6c:
    // 0x124a6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a70: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x124A70u;
    SET_GPR_U32(ctx, 31, 0x124A78u);
    ctx->pc = 0x124A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A70u;
            // 0x124a74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A78u; }
        if (ctx->pc != 0x124A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A78u; }
        if (ctx->pc != 0x124A78u) { return; }
    }
    ctx->pc = 0x124A78u;
label_124a78:
    // 0x124a78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124a7c: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x124a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x124a80: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x124a80u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x124a84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x124a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124a88: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x124A88u;
    {
        const bool branch_taken_0x124a88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x124A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124A88u;
            // 0x124a8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124a88) {
            ctx->pc = 0x124A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124a40;
        }
    }
    ctx->pc = 0x124A90u;
    // 0x124a90: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x124a90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x124a94: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x124a94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x124a98: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x124A98u;
    SET_GPR_U32(ctx, 31, 0x124AA0u);
    ctx->pc = 0x124A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124A98u;
            // 0x124a9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AA0u; }
        if (ctx->pc != 0x124AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AA0u; }
        if (ctx->pc != 0x124AA0u) { return; }
    }
    ctx->pc = 0x124AA0u;
label_124aa0:
    // 0x124aa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124aa4: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124AA4u;
    SET_GPR_U32(ctx, 31, 0x124AACu);
    ctx->pc = 0x124AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124AA4u;
            // 0x124aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AACu; }
        if (ctx->pc != 0x124AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AACu; }
        if (ctx->pc != 0x124AACu) { return; }
    }
    ctx->pc = 0x124AACu;
label_124aac:
    // 0x124aac: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x124AACu;
    {
        const bool branch_taken_0x124aac = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x124aac) {
            ctx->pc = 0x124AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124AACu;
            // 0x124ab0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124C58u;
            goto label_124c58;
        }
    }
    ctx->pc = 0x124AB4u;
    // 0x124ab4: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x124ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x124ab8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x124ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x124abc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x124ABCu;
    SET_GPR_U32(ctx, 31, 0x124AC4u);
    ctx->pc = 0x124AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124ABCu;
            // 0x124ac0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AC4u; }
        if (ctx->pc != 0x124AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AC4u; }
        if (ctx->pc != 0x124AC4u) { return; }
    }
    ctx->pc = 0x124AC4u;
label_124ac4:
    // 0x124ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ac8: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124AC8u;
    SET_GPR_U32(ctx, 31, 0x124AD0u);
    ctx->pc = 0x124ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124AC8u;
            // 0x124acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AD0u; }
        if (ctx->pc != 0x124AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AD0u; }
        if (ctx->pc != 0x124AD0u) { return; }
    }
    ctx->pc = 0x124AD0u;
label_124ad0:
    // 0x124ad0: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x124AD0u;
    {
        const bool branch_taken_0x124ad0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x124AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124AD0u;
            // 0x124ad4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ad0) {
            ctx->pc = 0x124B08u;
            goto label_124b08;
        }
    }
    ctx->pc = 0x124AD8u;
    // 0x124ad8: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x124ad8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x124adc: 0x0  nop
    ctx->pc = 0x124adcu;
    // NOP
label_124ae0:
    // 0x124ae0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x124ae0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x124ae4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x124ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x124ae8: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x124ae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x124aec: 0x0  nop
    ctx->pc = 0x124aecu;
    // NOP
    // 0x124af0: 0x0  nop
    ctx->pc = 0x124af0u;
    // NOP
    // 0x124af4: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x124AF4u;
    {
        const bool branch_taken_0x124af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x124af4) {
            ctx->pc = 0x124AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124ae0;
        }
    }
    ctx->pc = 0x124AFCu;
    // 0x124afc: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x124AFCu;
    {
        const bool branch_taken_0x124afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124AFCu;
            // 0x124b00: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124afc) {
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x124B04u;
label_124b04:
    // 0x124b04: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x124b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_124b08:
    // 0x124b08: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x124b08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_124b0c:
    // 0x124b0c: 0x8fb3002c  lw          $s3, 0x2C($sp)
    ctx->pc = 0x124b0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x124b10: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x124b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x124b14: 0x8fb50058  lw          $s5, 0x58($sp)
    ctx->pc = 0x124b14u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_124b18:
    // 0x124b18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x124b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124b1c: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x124B1Cu;
    {
        const bool branch_taken_0x124b1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x124B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B1Cu;
            // 0x124b20: 0x2a62000f  slti        $v0, $s3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b1c) {
            ctx->pc = 0x124C98u;
            goto label_124c98;
        }
    }
    ctx->pc = 0x124B24u;
    // 0x124b24: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x124B24u;
    {
        const bool branch_taken_0x124b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B24u;
            // 0x124b28: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b24) {
            ctx->pc = 0x124C98u;
            goto label_124c98;
        }
    }
    ctx->pc = 0x124B2Cu;
    // 0x124b2c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x124b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x124b30: 0x244220c8  addiu       $v0, $v0, 0x20C8
    ctx->pc = 0x124b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    // 0x124b34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x124b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124b38: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x124b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x124b3c: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x124B3Cu;
    {
        const bool branch_taken_0x124b3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x124B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B3Cu;
            // 0x124b40: 0xdc720000  ld          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b3c) {
            ctx->pc = 0x124B88u;
            goto label_124b88;
        }
    }
    ctx->pc = 0x124B44u;
    // 0x124b44: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x124b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124b48: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x124B48u;
    {
        const bool branch_taken_0x124b48 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x124B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B48u;
            // 0x124b4c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b48) {
            ctx->pc = 0x124B90u;
            goto label_124b90;
        }
    }
    ctx->pc = 0x124B50u;
    // 0x124b50: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x124b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x124b54: 0x460012e  bltz        $v1, . + 4 + (0x12E << 2)
    ctx->pc = 0x124B54u;
    {
        const bool branch_taken_0x124b54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x124B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B54u;
            // 0x124b58: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b54) {
            ctx->pc = 0x125010u;
            goto label_125010;
        }
    }
    ctx->pc = 0x124B5Cu;
    // 0x124b5c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x124b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x124b60: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x124b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x124b64: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124B64u;
    SET_GPR_U32(ctx, 31, 0x124B6Cu);
    ctx->pc = 0x124B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124B64u;
            // 0x124b68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B6Cu; }
        if (ctx->pc != 0x124B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B6Cu; }
        if (ctx->pc != 0x124B6Cu) { return; }
    }
    ctx->pc = 0x124B6Cu;
label_124b6c:
    // 0x124b6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124b70: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124B70u;
    SET_GPR_U32(ctx, 31, 0x124B78u);
    ctx->pc = 0x124B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124B70u;
            // 0x124b74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B78u; }
        if (ctx->pc != 0x124B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124B78u; }
        if (ctx->pc != 0x124B78u) { return; }
    }
    ctx->pc = 0x124B78u;
label_124b78:
    // 0x124b78: 0x18400125  blez        $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x124B78u;
    {
        const bool branch_taken_0x124b78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x124B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B78u;
            // 0x124b7c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b78) {
            ctx->pc = 0x125010u;
            goto label_125010;
        }
    }
    ctx->pc = 0x124B80u;
    // 0x124b80: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x124B80u;
    {
        const bool branch_taken_0x124b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B80u;
            // 0x124b84: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b80) {
            ctx->pc = 0x125024u;
            goto label_125024;
        }
    }
    ctx->pc = 0x124B88u;
label_124b88:
    // 0x124b88: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x124b88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124b8c: 0x0  nop
    ctx->pc = 0x124b8cu;
    // NOP
label_124b90:
    // 0x124b90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x124B90u;
    {
        const bool branch_taken_0x124b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124B90u;
            // 0x124b94: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124b90) {
            ctx->pc = 0x124BC0u;
            goto label_124bc0;
        }
    }
    ctx->pc = 0x124B98u;
label_124b98:
    // 0x124b98: 0x34048048  ori         $a0, $zero, 0x8048
    ctx->pc = 0x124b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x124b9c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x124b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x124ba0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124BA0u;
    SET_GPR_U32(ctx, 31, 0x124BA8u);
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BA8u; }
        if (ctx->pc != 0x124BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BA8u; }
        if (ctx->pc != 0x124BA8u) { return; }
    }
    ctx->pc = 0x124BA8u;
label_124ba8:
    // 0x124ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x124ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bb0: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124BB0u;
    SET_GPR_U32(ctx, 31, 0x124BB8u);
    ctx->pc = 0x124BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124BB0u;
            // 0x124bb4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BB8u; }
        if (ctx->pc != 0x124BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BB8u; }
        if (ctx->pc != 0x124BB8u) { return; }
    }
    ctx->pc = 0x124BB8u;
label_124bb8:
    // 0x124bb8: 0x10400204  beqz        $v0, . + 4 + (0x204 << 2)
    ctx->pc = 0x124BB8u;
    {
        const bool branch_taken_0x124bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124BB8u;
            // 0x124bbc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bb8) {
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x124BC0u;
label_124bc0:
    // 0x124bc0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bc4: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x124BC4u;
    SET_GPR_U32(ctx, 31, 0x124BCCu);
    ctx->pc = 0x124BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124BC4u;
            // 0x124bc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BCCu; }
        if (ctx->pc != 0x124BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BCCu; }
        if (ctx->pc != 0x124BCCu) { return; }
    }
    ctx->pc = 0x124BCCu;
label_124bcc:
    // 0x124bcc: 0xc0a218a  jal         func_288628
    ctx->pc = 0x124BCCu;
    SET_GPR_U32(ctx, 31, 0x124BD4u);
    ctx->pc = 0x124BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124BCCu;
            // 0x124bd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288628u;
    if (runtime->hasFunction(0x288628u)) {
        auto targetFn = runtime->lookupFunction(0x288628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BD4u; }
        if (ctx->pc != 0x124BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x288628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BD4u; }
        if (ctx->pc != 0x124BD4u) { return; }
    }
    ctx->pc = 0x124BD4u;
label_124bd4:
    // 0x124bd4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bd8: 0xc0a215c  jal         func_288570
    ctx->pc = 0x124BD8u;
    SET_GPR_U32(ctx, 31, 0x124BE0u);
    ctx->pc = 0x124BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124BD8u;
            // 0x124bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BE0u; }
        if (ctx->pc != 0x124BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BE0u; }
        if (ctx->pc != 0x124BE0u) { return; }
    }
    ctx->pc = 0x124BE0u;
label_124be0:
    // 0x124be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x124be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124be4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x124BE4u;
    SET_GPR_U32(ctx, 31, 0x124BECu);
    ctx->pc = 0x124BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124BE4u;
            // 0x124be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BECu; }
        if (ctx->pc != 0x124BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BECu; }
        if (ctx->pc != 0x124BECu) { return; }
    }
    ctx->pc = 0x124BECu;
label_124bec:
    // 0x124bec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x124becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bf0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x124BF0u;
    SET_GPR_U32(ctx, 31, 0x124BF8u);
    ctx->pc = 0x124BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124BF0u;
            // 0x124bf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BF8u; }
        if (ctx->pc != 0x124BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124BF8u; }
        if (ctx->pc != 0x124BF8u) { return; }
    }
    ctx->pc = 0x124BF8u;
label_124bf8:
    // 0x124bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bfc: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x124bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x124c00: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x124c00u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x124c04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x124c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124c08: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x124C08u;
    {
        const bool branch_taken_0x124c08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x124C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C08u;
            // 0x124c0c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c08) {
            ctx->pc = 0x124B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124b98;
        }
    }
    ctx->pc = 0x124C10u;
    // 0x124c10: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x124C10u;
    SET_GPR_U32(ctx, 31, 0x124C18u);
    ctx->pc = 0x124C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C10u;
            // 0x124c14: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C18u; }
        if (ctx->pc != 0x124C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C18u; }
        if (ctx->pc != 0x124C18u) { return; }
    }
    ctx->pc = 0x124C18u;
label_124c18:
    // 0x124c18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x124c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c20: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124C20u;
    SET_GPR_U32(ctx, 31, 0x124C28u);
    ctx->pc = 0x124C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C20u;
            // 0x124c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C28u; }
        if (ctx->pc != 0x124C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C28u; }
        if (ctx->pc != 0x124C28u) { return; }
    }
    ctx->pc = 0x124C28u;
label_124c28:
    // 0x124c28: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x124C28u;
    {
        const bool branch_taken_0x124c28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x124C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C28u;
            // 0x124c2c: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c28) {
            ctx->pc = 0x124C5Cu;
            goto label_124c5c;
        }
    }
    ctx->pc = 0x124C30u;
    // 0x124c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c34: 0xc0a2148  jal         func_288520
    ctx->pc = 0x124C34u;
    SET_GPR_U32(ctx, 31, 0x124C3Cu);
    ctx->pc = 0x124C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124C34u;
            // 0x124c38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C3Cu; }
        if (ctx->pc != 0x124C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124C3Cu; }
        if (ctx->pc != 0x124C3Cu) { return; }
    }
    ctx->pc = 0x124C3Cu;
label_124c3c:
    // 0x124c3c: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x124C3Cu;
    {
        const bool branch_taken_0x124c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C3Cu;
            // 0x124c40: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c3c) {
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x124C44u;
    // 0x124c44: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x124C44u;
    {
        const bool branch_taken_0x124c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C44u;
            // 0x124c48: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c44) {
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x124C4Cu;
    // 0x124c4c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x124C4Cu;
    {
        const bool branch_taken_0x124c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C4Cu;
            // 0x124c50: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c4c) {
            ctx->pc = 0x124C60u;
            goto label_124c60;
        }
    }
    ctx->pc = 0x124C54u;
label_124c54:
    // 0x124c54: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x124c54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_124c58:
    // 0x124c58: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x124c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_124c5c:
    // 0x124c5c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x124c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_124c60:
    // 0x124c60: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x124c60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_124c64:
    // 0x124c64: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x124c64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x124c68: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x124C68u;
    {
        const bool branch_taken_0x124c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x124C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C68u;
            // 0x124c6c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c68) {
            ctx->pc = 0x124C88u;
            goto label_124c88;
        }
    }
    ctx->pc = 0x124C70u;
    // 0x124c70: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x124c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x124c74: 0x56a2fffb  bnel        $s5, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x124C74u;
    {
        const bool branch_taken_0x124c74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x124c74) {
            ctx->pc = 0x124C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124C74u;
            // 0x124c78: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_124c64;
        }
    }
    ctx->pc = 0x124C7Cu;
    // 0x124c7c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x124c7cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x124c80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x124c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c84: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x124c84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_124c88:
    // 0x124c88: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x124c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x124c8c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x124c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x124c90: 0x100001ce  b           . + 4 + (0x1CE << 2)
    ctx->pc = 0x124C90u;
    {
        const bool branch_taken_0x124c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124C90u;
            // 0x124c94: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c90) {
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x124C98u;
label_124c98:
    // 0x124c98: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x124c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x124c9c: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x124c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124ca0: 0x8fb2001c  lw          $s2, 0x1C($sp)
    ctx->pc = 0x124ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x124ca4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x124ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x124ca8: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x124CA8u;
    {
        const bool branch_taken_0x124ca8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CA8u;
            // 0x124cac: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ca8) {
            ctx->pc = 0x124D58u;
            goto label_124d58;
        }
    }
    ctx->pc = 0x124CB0u;
    // 0x124cb0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x124cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124cb4: 0x28570002  slti        $s7, $v0, 0x2
    ctx->pc = 0x124cb4u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x124cb8: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x124CB8u;
    {
        const bool branch_taken_0x124cb8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CB8u;
            // 0x124cbc: 0x8fa40044  lw          $a0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cb8) {
            ctx->pc = 0x124CD8u;
            goto label_124cd8;
        }
    }
    ctx->pc = 0x124CC0u;
    // 0x124cc0: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x124CC0u;
    {
        const bool branch_taken_0x124cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x124CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CC0u;
            // 0x124cc4: 0x24740433  addiu       $s4, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cc0) {
            ctx->pc = 0x124D2Cu;
            goto label_124d2c;
        }
    }
    ctx->pc = 0x124CC8u;
    // 0x124cc8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x124cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x124ccc: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x124cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x124cd0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x124CD0u;
    {
        const bool branch_taken_0x124cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CD0u;
            // 0x124cd4: 0x43a023  subu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cd0) {
            ctx->pc = 0x124D2Cu;
            goto label_124d2c;
        }
    }
    ctx->pc = 0x124CD8u;
label_124cd8:
    // 0x124cd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x124cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124cdc: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x124cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x124ce0: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x124ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x124ce4: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x124ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x124ce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x124CE8u;
    {
        const bool branch_taken_0x124ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CE8u;
            // 0x124cec: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ce8) {
            ctx->pc = 0x124CF8u;
            goto label_124cf8;
        }
    }
    ctx->pc = 0x124CF0u;
    // 0x124cf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x124CF0u;
    {
        const bool branch_taken_0x124cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124CF0u;
            // 0x124cf4: 0x709023  subu        $s2, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124cf0) {
            ctx->pc = 0x124D14u;
            goto label_124d14;
        }
    }
    ctx->pc = 0x124CF8u;
label_124cf8:
    // 0x124cf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x124cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124cfc: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x124cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x124d00: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x124d04: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x124d08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x124d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x124d0c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x124d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x124d10: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x124d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_124d14:
    // 0x124d14: 0x8fb40020  lw          $s4, 0x20($sp)
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124d18: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x124D18u;
    {
        const bool branch_taken_0x124d18 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x124D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D18u;
            // 0x124d1c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d18) {
            ctx->pc = 0x124D30u;
            goto label_124d30;
        }
    }
    ctx->pc = 0x124D20u;
    // 0x124d20: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x124d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d24: 0x748823  subu        $s1, $v1, $s4
    ctx->pc = 0x124d24u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x124d28: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x124d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_124d2c:
    // 0x124d2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_124d30:
    // 0x124d30: 0xc049dda  jal         func_127768
    ctx->pc = 0x124D30u;
    SET_GPR_U32(ctx, 31, 0x124D38u);
    ctx->pc = 0x124D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124D30u;
            // 0x124d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127768u;
    if (runtime->hasFunction(0x127768u)) {
        auto targetFn = runtime->lookupFunction(0x127768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124D38u; }
        if (ctx->pc != 0x124D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x127768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124D38u; }
        if (ctx->pc != 0x124D38u) { return; }
    }
    ctx->pc = 0x124D38u;
label_124d38:
    // 0x124d38: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x124d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x124d3c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124d40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x124d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d44: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x124d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x124d48: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x124d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x124d4c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x124d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x124d50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124D50u;
    {
        const bool branch_taken_0x124d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D50u;
            // 0x124d54: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d50) {
            ctx->pc = 0x124D60u;
            goto label_124d60;
        }
    }
    ctx->pc = 0x124D58u;
label_124d58:
    // 0x124d58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x124d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124d5c: 0x28770002  slti        $s7, $v1, 0x2
    ctx->pc = 0x124d5cu;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_124d60:
    // 0x124d60: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x124D60u;
    {
        const bool branch_taken_0x124d60 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x124D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D60u;
            // 0x124d64: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d60) {
            ctx->pc = 0x124D90u;
            goto label_124d90;
        }
    }
    ctx->pc = 0x124D68u;
    // 0x124d68: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124D68u;
    {
        const bool branch_taken_0x124d68 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x124D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D68u;
            // 0x124d6c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d68) {
            ctx->pc = 0x124D90u;
            goto label_124d90;
        }
    }
    ctx->pc = 0x124D70u;
    // 0x124d70: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x124d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x124d74: 0x222a00b  movn        $s4, $s1, $v0
    ctx->pc = 0x124d74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17));
    // 0x124d78: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124d7c: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x124d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x124d80: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x124d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x124d84: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x124d88: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x124d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x124d8c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x124d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_124d90:
    // 0x124d90: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x124d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x124d94: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x124D94u;
    {
        const bool branch_taken_0x124d94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x124D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D94u;
            // 0x124d98: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d94) {
            ctx->pc = 0x124E10u;
            goto label_124e10;
        }
    }
    ctx->pc = 0x124D9Cu;
    // 0x124d9c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x124D9Cu;
    {
        const bool branch_taken_0x124d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124D9Cu;
            // 0x124da0: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d9c) {
            ctx->pc = 0x124E00u;
            goto label_124e00;
        }
    }
    ctx->pc = 0x124DA4u;
    // 0x124da4: 0x1a40000d  blez        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x124DA4u;
    {
        const bool branch_taken_0x124da4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x124DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DA4u;
            // 0x124da8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124da4) {
            ctx->pc = 0x124DDCu;
            goto label_124ddc;
        }
    }
    ctx->pc = 0x124DACu;
    // 0x124dac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124db0: 0xc049e74  jal         func_1279D0
    ctx->pc = 0x124DB0u;
    SET_GPR_U32(ctx, 31, 0x124DB8u);
    ctx->pc = 0x124DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124DB0u;
            // 0x124db4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1279D0u;
    if (runtime->hasFunction(0x1279D0u)) {
        auto targetFn = runtime->lookupFunction(0x1279D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DB8u; }
        if (ctx->pc != 0x124DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x1279d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DB8u; }
        if (ctx->pc != 0x124DB8u) { return; }
    }
    ctx->pc = 0x124DB8u;
label_124db8:
    // 0x124db8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x124db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x124dbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dc0: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x124dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124dc4: 0xc049de8  jal         func_1277A0
    ctx->pc = 0x124DC4u;
    SET_GPR_U32(ctx, 31, 0x124DCCu);
    ctx->pc = 0x124DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124DC4u;
            // 0x124dc8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1277A0u;
    if (runtime->hasFunction(0x1277A0u)) {
        auto targetFn = runtime->lookupFunction(0x1277A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DCCu; }
        if (ctx->pc != 0x124DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x1277a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DCCu; }
        if (ctx->pc != 0x124DCCu) { return; }
    }
    ctx->pc = 0x124DCCu;
label_124dcc:
    // 0x124dcc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x124dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124dd0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124dd4: 0xc049ce4  jal         func_127390
    ctx->pc = 0x124DD4u;
    SET_GPR_U32(ctx, 31, 0x124DDCu);
    ctx->pc = 0x124DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124DD4u;
            // 0x124dd8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DDCu; }
        if (ctx->pc != 0x124DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DDCu; }
        if (ctx->pc != 0x124DDCu) { return; }
    }
    ctx->pc = 0x124DDCu;
label_124ddc:
    // 0x124ddc: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x124ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x124de0: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x124de4: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x124DE4u;
    {
        const bool branch_taken_0x124de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DE4u;
            // 0x124de8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124de4) {
            ctx->pc = 0x124E10u;
            goto label_124e10;
        }
    }
    ctx->pc = 0x124DECu;
    // 0x124dec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x124decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124df0: 0xc049e74  jal         func_1279D0
    ctx->pc = 0x124DF0u;
    SET_GPR_U32(ctx, 31, 0x124DF8u);
    ctx->pc = 0x124DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124DF0u;
            // 0x124df4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1279D0u;
    if (runtime->hasFunction(0x1279D0u)) {
        auto targetFn = runtime->lookupFunction(0x1279D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DF8u; }
        if (ctx->pc != 0x124DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x1279d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124DF8u; }
        if (ctx->pc != 0x124DF8u) { return; }
    }
    ctx->pc = 0x124DF8u;
label_124df8:
    // 0x124df8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x124DF8u;
    {
        const bool branch_taken_0x124df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124DF8u;
            // 0x124dfc: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124df8) {
            ctx->pc = 0x124E10u;
            goto label_124e10;
        }
    }
    ctx->pc = 0x124E00u;
label_124e00:
    // 0x124e00: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e04: 0xc049e74  jal         func_1279D0
    ctx->pc = 0x124E04u;
    SET_GPR_U32(ctx, 31, 0x124E0Cu);
    ctx->pc = 0x124E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124E04u;
            // 0x124e08: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1279D0u;
    if (runtime->hasFunction(0x1279D0u)) {
        auto targetFn = runtime->lookupFunction(0x1279D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E0Cu; }
        if (ctx->pc != 0x124E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x1279d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E0Cu; }
        if (ctx->pc != 0x124E0Cu) { return; }
    }
    ctx->pc = 0x124E0Cu;
label_124e0c:
    // 0x124e0c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x124e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_124e10:
    // 0x124e10: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e14: 0xc049dda  jal         func_127768
    ctx->pc = 0x124E14u;
    SET_GPR_U32(ctx, 31, 0x124E1Cu);
    ctx->pc = 0x124E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124E14u;
            // 0x124e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127768u;
    if (runtime->hasFunction(0x127768u)) {
        auto targetFn = runtime->lookupFunction(0x127768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E1Cu; }
        if (ctx->pc != 0x124E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x127768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E1Cu; }
        if (ctx->pc != 0x124E1Cu) { return; }
    }
    ctx->pc = 0x124E1Cu;
label_124e1c:
    // 0x124e1c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x124e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x124e20: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x124E20u;
    {
        const bool branch_taken_0x124e20 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x124E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E20u;
            // 0x124e24: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e20) {
            ctx->pc = 0x124E3Cu;
            goto label_124e3c;
        }
    }
    ctx->pc = 0x124E28u;
    // 0x124e28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e30: 0xc049e74  jal         func_1279D0
    ctx->pc = 0x124E30u;
    SET_GPR_U32(ctx, 31, 0x124E38u);
    ctx->pc = 0x124E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124E30u;
            // 0x124e34: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1279D0u;
    if (runtime->hasFunction(0x1279D0u)) {
        auto targetFn = runtime->lookupFunction(0x1279D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E38u; }
        if (ctx->pc != 0x124E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x1279d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124E38u; }
        if (ctx->pc != 0x124E38u) { return; }
    }
    ctx->pc = 0x124E38u;
label_124e38:
    // 0x124e38: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x124e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_124e3c:
    // 0x124e3c: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x124E3Cu;
    {
        const bool branch_taken_0x124e3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E3Cu;
            // 0x124e40: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e3c) {
            ctx->pc = 0x124E94u;
            goto label_124e94;
        }
    }
    ctx->pc = 0x124E44u;
    // 0x124e44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x124e48: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x124e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x124e4c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x124e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x124e50: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x124E50u;
    {
        const bool branch_taken_0x124e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124e50) {
            ctx->pc = 0x124E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124E50u;
            // 0x124e54: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x124E90u;
            goto label_124e90;
        }
    }
    ctx->pc = 0x124E58u;
    // 0x124e58: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x124e58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x124e5c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x124e60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x124e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x124e64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124E64u;
    {
        const bool branch_taken_0x124e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E64u;
            // 0x124e68: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e64) {
            ctx->pc = 0x124E8Cu;
            goto label_124e8c;
        }
    }
    ctx->pc = 0x124E6Cu;
    // 0x124e6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x124e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x124e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124e74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x124e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x124e78: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x124e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x124e7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x124e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x124e80: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x124e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x124e84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124E84u;
    {
        const bool branch_taken_0x124e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E84u;
            // 0x124e88: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e84) {
            ctx->pc = 0x124E90u;
            goto label_124e90;
        }
    }
    ctx->pc = 0x124E8Cu;
label_124e8c:
    // 0x124e8c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x124e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_124e90:
    // 0x124e90: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x124e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_124e94:
    // 0x124e94: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x124E94u;
    {
        const bool branch_taken_0x124e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124E94u;
            // 0x124e98: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e94) {
            ctx->pc = 0x124EC0u;
            goto label_124ec0;
        }
    }
    ctx->pc = 0x124E9Cu;
    // 0x124e9c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x124e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x124ea0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x124ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x124ea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x124ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x124ea8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x124ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x124eac: 0xc049d88  jal         func_127620
    ctx->pc = 0x124EACu;
    SET_GPR_U32(ctx, 31, 0x124EB4u);
    ctx->pc = 0x124EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124EACu;
            // 0x124eb0: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127620u;
    if (runtime->hasFunction(0x127620u)) {
        auto targetFn = runtime->lookupFunction(0x127620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124EB4u; }
        if (ctx->pc != 0x124EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x127620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124EB4u; }
        if (ctx->pc != 0x124EB4u) { return; }
    }
    ctx->pc = 0x124EB4u;
label_124eb4:
    // 0x124eb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124EB8u;
    {
        const bool branch_taken_0x124eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124EB8u;
            // 0x124ebc: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124eb8) {
            ctx->pc = 0x124EC8u;
            goto label_124ec8;
        }
    }
    ctx->pc = 0x124EC0u;
label_124ec0:
    // 0x124ec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124ec4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_124ec8:
    // 0x124ec8: 0x3054001f  andi        $s4, $v0, 0x1F
    ctx->pc = 0x124ec8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x124ecc: 0x12800002  beqz        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x124ECCu;
    {
        const bool branch_taken_0x124ecc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x124ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124ECCu;
            // 0x124ed0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ecc) {
            ctx->pc = 0x124ED8u;
            goto label_124ed8;
        }
    }
    ctx->pc = 0x124ED4u;
    // 0x124ed4: 0x54a023  subu        $s4, $v0, $s4
    ctx->pc = 0x124ed4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_124ed8:
    // 0x124ed8: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x124ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x124edc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124EDCu;
    {
        const bool branch_taken_0x124edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124EDCu;
            // 0x124ee0: 0x2a820004  slti        $v0, $s4, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124edc) {
            ctx->pc = 0x124F08u;
            goto label_124f08;
        }
    }
    ctx->pc = 0x124EE4u;
    // 0x124ee4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x124ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124ee8: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x124eec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x124eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124ef0: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x124ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x124ef4: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x124ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x124ef8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x124ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x124efc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x124efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x124f00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x124F00u;
    {
        const bool branch_taken_0x124f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F00u;
            // 0x124f04: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f00) {
            ctx->pc = 0x124F2Cu;
            goto label_124f2c;
        }
    }
    ctx->pc = 0x124F08u;
label_124f08:
    // 0x124f08: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x124F08u;
    {
        const bool branch_taken_0x124f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F08u;
            // 0x124f0c: 0x8fa30038  lw          $v1, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f08) {
            ctx->pc = 0x124F2Cu;
            goto label_124f2c;
        }
    }
    ctx->pc = 0x124F10u;
    // 0x124f10: 0x2694001c  addiu       $s4, $s4, 0x1C
    ctx->pc = 0x124f10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x124f14: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x124f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124f18: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x124f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x124f1c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x124f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x124f20: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x124f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x124f24: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x124f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x124f28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x124f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_124f2c:
    // 0x124f2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x124f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124f30: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x124F30u;
    {
        const bool branch_taken_0x124f30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x124F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F30u;
            // 0x124f34: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f30) {
            ctx->pc = 0x124F48u;
            goto label_124f48;
        }
    }
    ctx->pc = 0x124F38u;
    // 0x124f38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x124f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f3c: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x124F3Cu;
    SET_GPR_U32(ctx, 31, 0x124F44u);
    ctx->pc = 0x124F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124F3Cu;
            // 0x124f40: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F44u; }
        if (ctx->pc != 0x124F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F44u; }
        if (ctx->pc != 0x124F44u) { return; }
    }
    ctx->pc = 0x124F44u;
label_124f44:
    // 0x124f44: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x124f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_124f48:
    // 0x124f48: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x124f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124f4c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x124F4Cu;
    {
        const bool branch_taken_0x124f4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x124F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F4Cu;
            // 0x124f50: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f4c) {
            ctx->pc = 0x124F64u;
            goto label_124f64;
        }
    }
    ctx->pc = 0x124F54u;
    // 0x124f54: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x124f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f58: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x124F58u;
    SET_GPR_U32(ctx, 31, 0x124F60u);
    ctx->pc = 0x124F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124F58u;
            // 0x124f5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F60u; }
        if (ctx->pc != 0x124F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F60u; }
        if (ctx->pc != 0x124F60u) { return; }
    }
    ctx->pc = 0x124F60u;
label_124f60:
    // 0x124f60: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x124f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_124f64:
    // 0x124f64: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x124f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124f68: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x124F68u;
    {
        const bool branch_taken_0x124f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F68u;
            // 0x124f6c: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f68) {
            ctx->pc = 0x124FC4u;
            goto label_124fc4;
        }
    }
    ctx->pc = 0x124F70u;
    // 0x124f70: 0xc049f12  jal         func_127C48
    ctx->pc = 0x124F70u;
    SET_GPR_U32(ctx, 31, 0x124F78u);
    ctx->pc = 0x124F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124F70u;
            // 0x124f74: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F78u; }
        if (ctx->pc != 0x124F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F78u; }
        if (ctx->pc != 0x124F78u) { return; }
    }
    ctx->pc = 0x124F78u;
label_124f78:
    // 0x124f78: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x124F78u;
    {
        const bool branch_taken_0x124f78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x124F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F78u;
            // 0x124f7c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f78) {
            ctx->pc = 0x124FC8u;
            goto label_124fc8;
        }
    }
    ctx->pc = 0x124F80u;
    // 0x124f80: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f88: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x124f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x124f8c: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x124F8Cu;
    SET_GPR_U32(ctx, 31, 0x124F94u);
    ctx->pc = 0x124F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124F8Cu;
            // 0x124f90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F94u; }
        if (ctx->pc != 0x124F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124F94u; }
        if (ctx->pc != 0x124F94u) { return; }
    }
    ctx->pc = 0x124F94u;
label_124f94:
    // 0x124f94: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x124f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x124f98: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x124f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x124f9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x124F9Cu;
    {
        const bool branch_taken_0x124f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124F9Cu;
            // 0x124fa0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f9c) {
            ctx->pc = 0x124FBCu;
            goto label_124fbc;
        }
    }
    ctx->pc = 0x124FA4u;
    // 0x124fa4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x124fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x124fa8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x124facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x124fb0: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x124FB0u;
    SET_GPR_U32(ctx, 31, 0x124FB8u);
    ctx->pc = 0x124FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124FB0u;
            // 0x124fb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FB8u; }
        if (ctx->pc != 0x124FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FB8u; }
        if (ctx->pc != 0x124FB8u) { return; }
    }
    ctx->pc = 0x124FB8u;
label_124fb8:
    // 0x124fb8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x124fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_124fbc:
    // 0x124fbc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124fc0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x124fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_124fc4:
    // 0x124fc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x124fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_124fc8:
    // 0x124fc8: 0x5c80001a  bgtzl       $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x124FC8u;
    {
        const bool branch_taken_0x124fc8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x124fc8) {
            ctx->pc = 0x124FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124FC8u;
            // 0x124fcc: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125034u;
            goto label_125034;
        }
    }
    ctx->pc = 0x124FD0u;
    // 0x124fd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x124fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124fd4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x124fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x124fd8: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x124FD8u;
    {
        const bool branch_taken_0x124fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x124fd8) {
            ctx->pc = 0x124FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x124FD8u;
            // 0x124fdc: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125034u;
            goto label_125034;
        }
    }
    ctx->pc = 0x124FE0u;
    // 0x124fe0: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x124FE0u;
    {
        const bool branch_taken_0x124fe0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x124FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x124FE0u;
            // 0x124fe4: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124fe0) {
            ctx->pc = 0x125010u;
            goto label_125010;
        }
    }
    ctx->pc = 0x124FE8u;
    // 0x124fe8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x124fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124fec: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x124fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x124ff0: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x124FF0u;
    SET_GPR_U32(ctx, 31, 0x124FF8u);
    ctx->pc = 0x124FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x124FF0u;
            // 0x124ff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FF8u; }
        if (ctx->pc != 0x124FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124FF8u; }
        if (ctx->pc != 0x124FF8u) { return; }
    }
    ctx->pc = 0x124FF8u;
label_124ff8:
    // 0x124ff8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x124ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x124ffc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x124ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125000: 0xc049f12  jal         func_127C48
    ctx->pc = 0x125000u;
    SET_GPR_U32(ctx, 31, 0x125008u);
    ctx->pc = 0x125004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125000u;
            // 0x125004: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125008u; }
        if (ctx->pc != 0x125008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125008u; }
        if (ctx->pc != 0x125008u) { return; }
    }
    ctx->pc = 0x125008u;
label_125008:
    // 0x125008: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125008u;
    {
        const bool branch_taken_0x125008 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125008u;
            // 0x12500c: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125008) {
            ctx->pc = 0x125020u;
            goto label_125020;
        }
    }
    ctx->pc = 0x125010u;
label_125010:
    // 0x125010: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x125014: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x125018: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x125018u;
    {
        const bool branch_taken_0x125018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125018u;
            // 0x12501c: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125018) {
            ctx->pc = 0x125388u;
            goto label_125388;
        }
    }
    ctx->pc = 0x125020u;
label_125020:
    // 0x125020: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x125020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_125024:
    // 0x125024: 0x26770002  addiu       $s7, $s3, 0x2
    ctx->pc = 0x125024u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x125028: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x125028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12502c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x12502Cu;
    {
        const bool branch_taken_0x12502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12502Cu;
            // 0x125030: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12502c) {
            ctx->pc = 0x125388u;
            goto label_125388;
        }
    }
    ctx->pc = 0x125034u;
label_125034:
    // 0x125034: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x125034u;
    {
        const bool branch_taken_0x125034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125034u;
            // 0x125038: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125034) {
            ctx->pc = 0x12528Cu;
            goto label_12528c;
        }
    }
    ctx->pc = 0x12503Cu;
    // 0x12503c: 0x1a200005  blez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12503Cu;
    {
        const bool branch_taken_0x12503c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x125040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12503Cu;
            // 0x125040: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12503c) {
            ctx->pc = 0x125054u;
            goto label_125054;
        }
    }
    ctx->pc = 0x125044u;
    // 0x125044: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x125044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125048: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x125048u;
    SET_GPR_U32(ctx, 31, 0x125050u);
    ctx->pc = 0x12504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125048u;
            // 0x12504c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125050u; }
        if (ctx->pc != 0x125050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125050u; }
        if (ctx->pc != 0x125050u) { return; }
    }
    ctx->pc = 0x125050u;
label_125050:
    // 0x125050: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x125050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_125054:
    // 0x125054: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x125054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125058: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12505c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12505Cu;
    {
        const bool branch_taken_0x12505c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12505Cu;
            // 0x125060: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12505c) {
            ctx->pc = 0x1250A8u;
            goto label_1250a8;
        }
    }
    ctx->pc = 0x125064u;
    // 0x125064: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x125064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x125068: 0xc049cba  jal         func_1272E8
    ctx->pc = 0x125068u;
    SET_GPR_U32(ctx, 31, 0x125070u);
    ctx->pc = 0x12506Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125068u;
            // 0x12506c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272E8u;
    if (runtime->hasFunction(0x1272E8u)) {
        auto targetFn = runtime->lookupFunction(0x1272E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125070u; }
        if (ctx->pc != 0x125070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1272e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125070u; }
        if (ctx->pc != 0x125070u) { return; }
    }
    ctx->pc = 0x125070u;
label_125070:
    // 0x125070: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x125070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x125074: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x125074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x125078: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x125078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x12507c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x12507cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x125080: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x125080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x125084: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x125084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x125088: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x125088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x12508c: 0xc049c18  jal         func_127060
    ctx->pc = 0x12508Cu;
    SET_GPR_U32(ctx, 31, 0x125094u);
    ctx->pc = 0x125090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12508Cu;
            // 0x125090: 0x2445000c  addiu       $a1, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125094u; }
        if (ctx->pc != 0x125094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125094u; }
        if (ctx->pc != 0x125094u) { return; }
    }
    ctx->pc = 0x125094u;
label_125094:
    // 0x125094: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x125094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125098: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x125098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12509c: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x12509Cu;
    SET_GPR_U32(ctx, 31, 0x1250A4u);
    ctx->pc = 0x1250A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12509Cu;
            // 0x1250a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250A4u; }
        if (ctx->pc != 0x1250A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250A4u; }
        if (ctx->pc != 0x1250A4u) { return; }
    }
    ctx->pc = 0x1250A4u;
label_1250a4:
    // 0x1250a4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1250a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_1250a8:
    // 0x1250a8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1250a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1250ac: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1250ACu;
    {
        const bool branch_taken_0x1250ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250ACu;
            // 0x1250b0: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250ac) {
            ctx->pc = 0x125130u;
            goto label_125130;
        }
    }
    ctx->pc = 0x1250B4u;
    // 0x1250b4: 0x0  nop
    ctx->pc = 0x1250b4u;
    // NOP
label_1250b8:
    // 0x1250b8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1250b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1250bc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1250bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1250c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1250c4: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x1250C4u;
    SET_GPR_U32(ctx, 31, 0x1250CCu);
    ctx->pc = 0x1250C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1250C4u;
            // 0x1250c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250CCu; }
        if (ctx->pc != 0x1250CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250CCu; }
        if (ctx->pc != 0x1250CCu) { return; }
    }
    ctx->pc = 0x1250CCu;
label_1250cc:
    // 0x1250cc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1250ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1250d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1250d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1250d4: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1250D4u;
    {
        const bool branch_taken_0x1250d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1250D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250D4u;
            // 0x1250d8: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250d4) {
            ctx->pc = 0x1250FCu;
            goto label_1250fc;
        }
    }
    ctx->pc = 0x1250DCu;
    // 0x1250dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250e0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1250e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1250e4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1250e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1250e8: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x1250E8u;
    SET_GPR_U32(ctx, 31, 0x1250F0u);
    ctx->pc = 0x1250ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1250E8u;
            // 0x1250ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250F0u; }
        if (ctx->pc != 0x1250F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250F0u; }
        if (ctx->pc != 0x1250F0u) { return; }
    }
    ctx->pc = 0x1250F0u;
label_1250f0:
    // 0x1250f0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1250f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1250f4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1250F4u;
    {
        const bool branch_taken_0x1250f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1250F4u;
            // 0x1250f8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250f4) {
            ctx->pc = 0x12512Cu;
            goto label_12512c;
        }
    }
    ctx->pc = 0x1250FCu;
label_1250fc:
    // 0x1250fc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1250fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x125100: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x125100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125104: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x125104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x125108: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x125108u;
    SET_GPR_U32(ctx, 31, 0x125110u);
    ctx->pc = 0x12510Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125108u;
            // 0x12510c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125110u; }
        if (ctx->pc != 0x125110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125110u; }
        if (ctx->pc != 0x125110u) { return; }
    }
    ctx->pc = 0x125110u;
label_125110:
    // 0x125110: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x125110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125114: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x125114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125118: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x125118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x12511c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12511cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x125120: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x125120u;
    SET_GPR_U32(ctx, 31, 0x125128u);
    ctx->pc = 0x125124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125120u;
            // 0x125124: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125128u; }
        if (ctx->pc != 0x125128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125128u; }
        if (ctx->pc != 0x125128u) { return; }
    }
    ctx->pc = 0x125128u;
label_125128:
    // 0x125128: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x125128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_12512c:
    // 0x12512c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x12512cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_125130:
    // 0x125130: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125134: 0xc049010  jal         func_124040
    ctx->pc = 0x125134u;
    SET_GPR_U32(ctx, 31, 0x12513Cu);
    ctx->pc = 0x125138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125134u;
            // 0x125138: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124040u;
    if (runtime->hasFunction(0x124040u)) {
        auto targetFn = runtime->lookupFunction(0x124040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12513Cu; }
        if (ctx->pc != 0x12513Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x124040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12513Cu; }
        if (ctx->pc != 0x12513Cu) { return; }
    }
    ctx->pc = 0x12513Cu;
label_12513c:
    // 0x12513c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125140: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x125140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x125144: 0xc049f12  jal         func_127C48
    ctx->pc = 0x125144u;
    SET_GPR_U32(ctx, 31, 0x12514Cu);
    ctx->pc = 0x125148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125144u;
            // 0x125148: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12514Cu; }
        if (ctx->pc != 0x12514Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12514Cu; }
        if (ctx->pc != 0x12514Cu) { return; }
    }
    ctx->pc = 0x12514Cu;
label_12514c:
    // 0x12514c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x12514cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x125150: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x125150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125154: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x125154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125158: 0xc049f2c  jal         func_127CB0
    ctx->pc = 0x125158u;
    SET_GPR_U32(ctx, 31, 0x125160u);
    ctx->pc = 0x12515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125158u;
            // 0x12515c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127CB0u;
    if (runtime->hasFunction(0x127CB0u)) {
        auto targetFn = runtime->lookupFunction(0x127CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125160u; }
        if (ctx->pc != 0x125160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x127cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125160u; }
        if (ctx->pc != 0x125160u) { return; }
    }
    ctx->pc = 0x125160u;
label_125160:
    // 0x125160: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x125160u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125164: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x125164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x125168: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125168u;
    {
        const bool branch_taken_0x125168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125168u;
            // 0x12516c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125168) {
            ctx->pc = 0x125180u;
            goto label_125180;
        }
    }
    ctx->pc = 0x125170u;
    // 0x125170: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x125170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x125174: 0xc049f12  jal         func_127C48
    ctx->pc = 0x125174u;
    SET_GPR_U32(ctx, 31, 0x12517Cu);
    ctx->pc = 0x125178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125174u;
            // 0x125178: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12517Cu; }
        if (ctx->pc != 0x12517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12517Cu; }
        if (ctx->pc != 0x12517Cu) { return; }
    }
    ctx->pc = 0x12517Cu;
label_12517c:
    // 0x12517c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12517cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125180:
    // 0x125180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125184: 0xc049ce4  jal         func_127390
    ctx->pc = 0x125184u;
    SET_GPR_U32(ctx, 31, 0x12518Cu);
    ctx->pc = 0x125188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125184u;
            // 0x125188: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12518Cu; }
        if (ctx->pc != 0x12518Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12518Cu; }
        if (ctx->pc != 0x12518Cu) { return; }
    }
    ctx->pc = 0x12518Cu;
label_12518c:
    // 0x12518c: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x12518Cu;
    {
        const bool branch_taken_0x12518c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12518Cu;
            // 0x125190: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12518c) {
            ctx->pc = 0x1251C4u;
            goto label_1251c4;
        }
    }
    ctx->pc = 0x125194u;
    // 0x125194: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x125194u;
    {
        const bool branch_taken_0x125194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125194) {
            ctx->pc = 0x1251C4u;
            goto label_1251c4;
        }
    }
    ctx->pc = 0x12519Cu;
    // 0x12519c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x12519cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1251a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1251a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1251a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1251a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1251a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1251A8u;
    {
        const bool branch_taken_0x1251a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251A8u;
            // 0x1251ac: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251a8) {
            ctx->pc = 0x1251C4u;
            goto label_1251c4;
        }
    }
    ctx->pc = 0x1251B0u;
    // 0x1251b0: 0x1262002a  beq         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1251B0u;
    {
        const bool branch_taken_0x1251b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1251B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251B0u;
            // 0x1251b4: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251b0) {
            ctx->pc = 0x12525Cu;
            goto label_12525c;
        }
    }
    ctx->pc = 0x1251B8u;
    // 0x1251b8: 0x539821  addu        $s3, $v0, $s3
    ctx->pc = 0x1251b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1251bc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1251BCu;
    {
        const bool branch_taken_0x1251bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1251C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251BCu;
            // 0x1251c0: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251bc) {
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x1251C4u;
label_1251c4:
    // 0x1251c4: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1251C4u;
    {
        const bool branch_taken_0x1251c4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1251c4) {
            ctx->pc = 0x1251F0u;
            goto label_1251f0;
        }
    }
    ctx->pc = 0x1251CCu;
    // 0x1251cc: 0x1600001f  bnez        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1251CCu;
    {
        const bool branch_taken_0x1251cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1251D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251CCu;
            // 0x1251d0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251cc) {
            ctx->pc = 0x12524Cu;
            goto label_12524c;
        }
    }
    ctx->pc = 0x1251D4u;
    // 0x1251d4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1251D4u;
    {
        const bool branch_taken_0x1251d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1251d4) {
            ctx->pc = 0x12524Cu;
            goto label_12524c;
        }
    }
    ctx->pc = 0x1251DCu;
    // 0x1251dc: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x1251dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1251e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1251e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1251e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1251e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1251e8: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1251E8u;
    {
        const bool branch_taken_0x1251e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1251e8) {
            ctx->pc = 0x12524Cu;
            goto label_12524c;
        }
    }
    ctx->pc = 0x1251F0u;
label_1251f0:
    // 0x1251f0: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1251F0u;
    {
        const bool branch_taken_0x1251f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1251F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1251F0u;
            // 0x1251f4: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1251f0) {
            ctx->pc = 0x125244u;
            goto label_125244;
        }
    }
    ctx->pc = 0x1251F8u;
    // 0x1251f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1251f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1251fc: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x1251FCu;
    SET_GPR_U32(ctx, 31, 0x125204u);
    ctx->pc = 0x125200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1251FCu;
            // 0x125200: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125204u; }
        if (ctx->pc != 0x125204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125204u; }
        if (ctx->pc != 0x125204u) { return; }
    }
    ctx->pc = 0x125204u;
label_125204:
    // 0x125204: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x125204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x125208: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x125208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12520c: 0xc049f12  jal         func_127C48
    ctx->pc = 0x12520Cu;
    SET_GPR_U32(ctx, 31, 0x125214u);
    ctx->pc = 0x125210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12520Cu;
            // 0x125210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125214u; }
        if (ctx->pc != 0x125214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125214u; }
        if (ctx->pc != 0x125214u) { return; }
    }
    ctx->pc = 0x125214u;
label_125214:
    // 0x125214: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x125214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125218: 0x5e200007  bgtzl       $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x125218u;
    {
        const bool branch_taken_0x125218 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x125218) {
            ctx->pc = 0x12521Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125218u;
            // 0x12521c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125238u;
            goto label_125238;
        }
    }
    ctx->pc = 0x125220u;
    // 0x125220: 0x56200058  bnel        $s1, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x125220u;
    {
        const bool branch_taken_0x125220 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x125220) {
            ctx->pc = 0x125224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125220u;
            // 0x125224: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x125228u;
    // 0x125228: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x125228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x12522c: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x12522Cu;
    {
        const bool branch_taken_0x12522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12522c) {
            ctx->pc = 0x125230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12522Cu;
            // 0x125230: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x125234u;
    // 0x125234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x125234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_125238:
    // 0x125238: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x125238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x12523c: 0x12620008  beq         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12523Cu;
    {
        const bool branch_taken_0x12523c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x125240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12523Cu;
            // 0x125240: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12523c) {
            ctx->pc = 0x125260u;
            goto label_125260;
        }
    }
    ctx->pc = 0x125244u;
label_125244:
    // 0x125244: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x125244u;
    {
        const bool branch_taken_0x125244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125244u;
            // 0x125248: 0xa2b30000  sb          $s3, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125244) {
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x12524Cu;
label_12524c:
    // 0x12524c: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12524Cu;
    {
        const bool branch_taken_0x12524c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x125250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12524Cu;
            // 0x125250: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12524c) {
            ctx->pc = 0x125274u;
            goto label_125274;
        }
    }
    ctx->pc = 0x125254u;
    // 0x125254: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x125254u;
    {
        const bool branch_taken_0x125254 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x125258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125254u;
            // 0x125258: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125254) {
            ctx->pc = 0x12526Cu;
            goto label_12526c;
        }
    }
    ctx->pc = 0x12525Cu;
label_12525c:
    // 0x12525c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x12525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_125260:
    // 0x125260: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x125260u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x125264: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x125264u;
    {
        const bool branch_taken_0x125264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125264u;
            // 0x125268: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125264) {
            ctx->pc = 0x125318u;
            goto label_125318;
        }
    }
    ctx->pc = 0x12526Cu;
label_12526c:
    // 0x12526c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x12526Cu;
    {
        const bool branch_taken_0x12526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12526Cu;
            // 0x125270: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12526c) {
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x125274u;
label_125274:
    // 0x125274: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x125274u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x125278: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x125278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12527c: 0x1684ff8e  bne         $s4, $a0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x12527Cu;
    {
        const bool branch_taken_0x12527c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x125280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12527Cu;
            // 0x125280: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12527c) {
            ctx->pc = 0x1250B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1250b8;
        }
    }
    ctx->pc = 0x125284u;
    // 0x125284: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x125284u;
    {
        const bool branch_taken_0x125284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125284u;
            // 0x125288: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125284) {
            ctx->pc = 0x1252DCu;
            goto label_1252dc;
        }
    }
    ctx->pc = 0x12528Cu;
label_12528c:
    // 0x12528c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12528Cu;
    {
        const bool branch_taken_0x12528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12528Cu;
            // 0x125290: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12528c) {
            ctx->pc = 0x1252B4u;
            goto label_1252b4;
        }
    }
    ctx->pc = 0x125294u;
    // 0x125294: 0x0  nop
    ctx->pc = 0x125294u;
    // NOP
label_125298:
    // 0x125298: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x125298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12529c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x12529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252a0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1252a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1252a4: 0xc049cf0  jal         func_1273C0
    ctx->pc = 0x1252A4u;
    SET_GPR_U32(ctx, 31, 0x1252ACu);
    ctx->pc = 0x1252A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1252A4u;
            // 0x1252a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1273C0u;
    if (runtime->hasFunction(0x1273C0u)) {
        auto targetFn = runtime->lookupFunction(0x1273C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252ACu; }
        if (ctx->pc != 0x1252ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1273c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252ACu; }
        if (ctx->pc != 0x1252ACu) { return; }
    }
    ctx->pc = 0x1252ACu;
label_1252ac:
    // 0x1252ac: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1252acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1252b0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1252b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_1252b4:
    // 0x1252b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1252b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1252b8: 0xc049010  jal         func_124040
    ctx->pc = 0x1252B8u;
    SET_GPR_U32(ctx, 31, 0x1252C0u);
    ctx->pc = 0x1252BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1252B8u;
            // 0x1252bc: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124040u;
    if (runtime->hasFunction(0x124040u)) {
        auto targetFn = runtime->lookupFunction(0x124040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252C0u; }
        if (ctx->pc != 0x1252C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x124040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252C0u; }
        if (ctx->pc != 0x1252C0u) { return; }
    }
    ctx->pc = 0x1252C0u;
label_1252c0:
    // 0x1252c0: 0x24530030  addiu       $s3, $v0, 0x30
    ctx->pc = 0x1252c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1252c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1252c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1252c8: 0xa2b30000  sb          $s3, 0x0($s5)
    ctx->pc = 0x1252c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x1252cc: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1252ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1252d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1252D0u;
    {
        const bool branch_taken_0x1252d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1252D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1252D0u;
            // 0x1252d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1252d0) {
            ctx->pc = 0x125298u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125298;
        }
    }
    ctx->pc = 0x1252D8u;
    // 0x1252d8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1252d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1252dc:
    // 0x1252dc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1252dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252e0: 0xc049eb4  jal         func_127AD0
    ctx->pc = 0x1252E0u;
    SET_GPR_U32(ctx, 31, 0x1252E8u);
    ctx->pc = 0x1252E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1252E0u;
            // 0x1252e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127AD0u;
    if (runtime->hasFunction(0x127AD0u)) {
        auto targetFn = runtime->lookupFunction(0x127AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252E8u; }
        if (ctx->pc != 0x1252E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x127ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252E8u; }
        if (ctx->pc != 0x1252E8u) { return; }
    }
    ctx->pc = 0x1252E8u;
label_1252e8:
    // 0x1252e8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1252e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1252ec: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x1252ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1252f0: 0xc049f12  jal         func_127C48
    ctx->pc = 0x1252F0u;
    SET_GPR_U32(ctx, 31, 0x1252F8u);
    ctx->pc = 0x1252F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1252F0u;
            // 0x1252f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C48u;
    if (runtime->hasFunction(0x127C48u)) {
        auto targetFn = runtime->lookupFunction(0x127C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252F8u; }
        if (ctx->pc != 0x1252F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x127c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1252F8u; }
        if (ctx->pc != 0x1252F8u) { return; }
    }
    ctx->pc = 0x1252F8u;
label_1252f8:
    // 0x1252f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1252f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1252fc: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1252FCu;
    {
        const bool branch_taken_0x1252fc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1252fc) {
            ctx->pc = 0x125300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1252FCu;
            // 0x125300: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12531Cu;
            goto label_12531c;
        }
    }
    ctx->pc = 0x125304u;
    // 0x125304: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x125304u;
    {
        const bool branch_taken_0x125304 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x125308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125304u;
            // 0x125308: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125304) {
            ctx->pc = 0x125368u;
            goto label_125368;
        }
    }
    ctx->pc = 0x12530Cu;
    // 0x12530c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x12530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x125310: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x125310u;
    {
        const bool branch_taken_0x125310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125310) {
            ctx->pc = 0x125314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125310u;
            // 0x125314: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12536Cu;
            goto label_12536c;
        }
    }
    ctx->pc = 0x125318u;
label_125318:
    // 0x125318: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x125318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12531c:
    // 0x12531c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12531Cu;
    {
        const bool branch_taken_0x12531c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12531Cu;
            // 0x125320: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12531c) {
            ctx->pc = 0x125334u;
            goto label_125334;
        }
    }
    ctx->pc = 0x125324u;
    // 0x125324: 0x0  nop
    ctx->pc = 0x125324u;
    // NOP
label_125328:
    // 0x125328: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x125328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12532c: 0x12a40007  beq         $s5, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12532Cu;
    {
        const bool branch_taken_0x12532c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 4));
        ctx->pc = 0x125330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12532Cu;
            // 0x125330: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12532c) {
            ctx->pc = 0x12534Cu;
            goto label_12534c;
        }
    }
    ctx->pc = 0x125334u;
label_125334:
    // 0x125334: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x125334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x125338: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x125338u;
    {
        const bool branch_taken_0x125338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125338u;
            // 0x12533c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125338) {
            ctx->pc = 0x125328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125328;
        }
    }
    ctx->pc = 0x125340u;
    // 0x125340: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x125340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x125344: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x125344u;
    {
        const bool branch_taken_0x125344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125344u;
            // 0x125348: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125344) {
            ctx->pc = 0x125384u;
            goto label_125384;
        }
    }
    ctx->pc = 0x12534Cu;
label_12534c:
    // 0x12534c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x12534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125350: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x125350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x125354: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x125354u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x125358: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x125358u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12535c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12535Cu;
    {
        const bool branch_taken_0x12535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12535Cu;
            // 0x125360: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12535c) {
            ctx->pc = 0x125388u;
            goto label_125388;
        }
    }
    ctx->pc = 0x125364u;
    // 0x125364: 0x0  nop
    ctx->pc = 0x125364u;
    // NOP
label_125368:
    // 0x125368: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x125368u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12536c:
    // 0x12536c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x12536cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x125370: 0x0  nop
    ctx->pc = 0x125370u;
    // NOP
    // 0x125374: 0x0  nop
    ctx->pc = 0x125374u;
    // NOP
    // 0x125378: 0x0  nop
    ctx->pc = 0x125378u;
    // NOP
    // 0x12537c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12537Cu;
    {
        const bool branch_taken_0x12537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12537c) {
            ctx->pc = 0x125368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125368;
        }
    }
    ctx->pc = 0x125384u;
label_125384:
    // 0x125384: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x125384u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_125388:
    // 0x125388: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x125388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x12538c: 0xc049ce4  jal         func_127390
    ctx->pc = 0x12538Cu;
    SET_GPR_U32(ctx, 31, 0x125394u);
    ctx->pc = 0x125390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12538Cu;
            // 0x125390: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125394u; }
        if (ctx->pc != 0x125394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125394u; }
        if (ctx->pc != 0x125394u) { return; }
    }
    ctx->pc = 0x125394u;
label_125394:
    // 0x125394: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x125394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x125398: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x125398u;
    {
        const bool branch_taken_0x125398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125398u;
            // 0x12539c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125398) {
            ctx->pc = 0x1253CCu;
            goto label_1253cc;
        }
    }
    ctx->pc = 0x1253A0u;
    // 0x1253a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1253A0u;
    {
        const bool branch_taken_0x1253a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253A0u;
            // 0x1253a4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253a0) {
            ctx->pc = 0x1253BCu;
            goto label_1253bc;
        }
    }
    ctx->pc = 0x1253A8u;
    // 0x1253a8: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1253A8u;
    {
        const bool branch_taken_0x1253a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1253ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253A8u;
            // 0x1253ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253a8) {
            ctx->pc = 0x1253B8u;
            goto label_1253b8;
        }
    }
    ctx->pc = 0x1253B0u;
    // 0x1253b0: 0xc049ce4  jal         func_127390
    ctx->pc = 0x1253B0u;
    SET_GPR_U32(ctx, 31, 0x1253B8u);
    ctx->pc = 0x1253B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1253B0u;
            // 0x1253b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253B8u; }
        if (ctx->pc != 0x1253B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253B8u; }
        if (ctx->pc != 0x1253B8u) { return; }
    }
    ctx->pc = 0x1253B8u;
label_1253b8:
    // 0x1253b8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1253b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1253bc:
    // 0x1253bc: 0xc049ce4  jal         func_127390
    ctx->pc = 0x1253BCu;
    SET_GPR_U32(ctx, 31, 0x1253C4u);
    ctx->pc = 0x1253C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1253BCu;
            // 0x1253c0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253C4u; }
        if (ctx->pc != 0x1253C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253C4u; }
        if (ctx->pc != 0x1253C4u) { return; }
    }
    ctx->pc = 0x1253C4u;
label_1253c4:
    // 0x1253c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1253C4u;
    {
        const bool branch_taken_0x1253c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1253C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1253C4u;
            // 0x1253c8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253c4) {
            ctx->pc = 0x1253D0u;
            goto label_1253d0;
        }
    }
    ctx->pc = 0x1253CCu;
label_1253cc:
    // 0x1253cc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1253ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1253d0:
    // 0x1253d0: 0xc049ce4  jal         func_127390
    ctx->pc = 0x1253D0u;
    SET_GPR_U32(ctx, 31, 0x1253D8u);
    ctx->pc = 0x1253D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1253D0u;
            // 0x1253d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127390u;
    if (runtime->hasFunction(0x127390u)) {
        auto targetFn = runtime->lookupFunction(0x127390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253D8u; }
        if (ctx->pc != 0x1253D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x127390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1253D8u; }
        if (ctx->pc != 0x1253D8u) { return; }
    }
    ctx->pc = 0x1253D8u;
label_1253d8:
    // 0x1253d8: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1253d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1253dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1253dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1253e0: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x1253e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x1253e4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1253e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1253e8: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1253E8u;
    {
        const bool branch_taken_0x1253e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1253e8) {
            ctx->pc = 0x1253ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1253E8u;
            // 0x1253ec: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1253F0u;
            goto label_1253f0;
        }
    }
    ctx->pc = 0x1253F0u;
label_1253f0:
    // 0x1253f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1253f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1253f4:
    // 0x1253f4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1253f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1253f8: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x1253f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1253fc: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x1253fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x125400: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x125400u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x125404: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x125404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x125408: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x125408u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12540c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x12540cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x125410: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x125414: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x125414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x125418: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x125418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12541c: 0x3e00008  jr          $ra
    ctx->pc = 0x12541Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12541Cu;
            // 0x125420: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125424u;
}
