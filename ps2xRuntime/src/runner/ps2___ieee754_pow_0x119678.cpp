#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ieee754_pow
// Address: 0x119678 - 0x11a3a0
void ps2___ieee754_pow_0x119678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ieee754_pow_0x119678");
#endif

    switch (ctx->pc) {
        case 0x119738u: goto label_119738;
        case 0x1197f4u: goto label_1197f4;
        case 0x119830u: goto label_119830;
        case 0x119858u: goto label_119858;
        case 0x11988cu: goto label_11988c;
        case 0x11989cu: goto label_11989c;
        case 0x1198d8u: goto label_1198d8;
        case 0x119908u: goto label_119908;
        case 0x119914u: goto label_119914;
        case 0x119934u: goto label_119934;
        case 0x119964u: goto label_119964;
        case 0x119970u: goto label_119970;
        case 0x1199b0u: goto label_1199b0;
        case 0x119a14u: goto label_119a14;
        case 0x119a24u: goto label_119a24;
        case 0x119a38u: goto label_119a38;
        case 0x119a48u: goto label_119a48;
        case 0x119a54u: goto label_119a54;
        case 0x119a64u: goto label_119a64;
        case 0x119a70u: goto label_119a70;
        case 0x119a84u: goto label_119a84;
        case 0x119a98u: goto label_119a98;
        case 0x119aacu: goto label_119aac;
        case 0x119ab8u: goto label_119ab8;
        case 0x119ac8u: goto label_119ac8;
        case 0x119ae0u: goto label_119ae0;
        case 0x119b14u: goto label_119b14;
        case 0x119bbcu: goto label_119bbc;
        case 0x119bccu: goto label_119bcc;
        case 0x119bdcu: goto label_119bdc;
        case 0x119becu: goto label_119bec;
        case 0x119c34u: goto label_119c34;
        case 0x119c40u: goto label_119c40;
        case 0x119c50u: goto label_119c50;
        case 0x119c5cu: goto label_119c5c;
        case 0x119c6cu: goto label_119c6c;
        case 0x119c78u: goto label_119c78;
        case 0x119c84u: goto label_119c84;
        case 0x119c94u: goto label_119c94;
        case 0x119ca4u: goto label_119ca4;
        case 0x119cb8u: goto label_119cb8;
        case 0x119cc8u: goto label_119cc8;
        case 0x119cd4u: goto label_119cd4;
        case 0x119ce4u: goto label_119ce4;
        case 0x119cf0u: goto label_119cf0;
        case 0x119d00u: goto label_119d00;
        case 0x119d0cu: goto label_119d0c;
        case 0x119d1cu: goto label_119d1c;
        case 0x119d28u: goto label_119d28;
        case 0x119d38u: goto label_119d38;
        case 0x119d44u: goto label_119d44;
        case 0x119d54u: goto label_119d54;
        case 0x119d60u: goto label_119d60;
        case 0x119d6cu: goto label_119d6c;
        case 0x119d7cu: goto label_119d7c;
        case 0x119d8cu: goto label_119d8c;
        case 0x119d98u: goto label_119d98;
        case 0x119da8u: goto label_119da8;
        case 0x119db4u: goto label_119db4;
        case 0x119dc0u: goto label_119dc0;
        case 0x119dd0u: goto label_119dd0;
        case 0x119de0u: goto label_119de0;
        case 0x119df0u: goto label_119df0;
        case 0x119dfcu: goto label_119dfc;
        case 0x119e0cu: goto label_119e0c;
        case 0x119e1cu: goto label_119e1c;
        case 0x119e28u: goto label_119e28;
        case 0x119e3cu: goto label_119e3c;
        case 0x119e50u: goto label_119e50;
        case 0x119e64u: goto label_119e64;
        case 0x119e70u: goto label_119e70;
        case 0x119e88u: goto label_119e88;
        case 0x119e94u: goto label_119e94;
        case 0x119ea4u: goto label_119ea4;
        case 0x119ec0u: goto label_119ec0;
        case 0x119eccu: goto label_119ecc;
        case 0x119edcu: goto label_119edc;
        case 0x119ee8u: goto label_119ee8;
        case 0x119ef4u: goto label_119ef4;
        case 0x119f00u: goto label_119f00;
        case 0x119f50u: goto label_119f50;
        case 0x119f5cu: goto label_119f5c;
        case 0x119f6cu: goto label_119f6c;
        case 0x119f78u: goto label_119f78;
        case 0x119f88u: goto label_119f88;
        case 0x119f98u: goto label_119f98;
        case 0x119fdcu: goto label_119fdc;
        case 0x119ff8u: goto label_119ff8;
        case 0x11a008u: goto label_11a008;
        case 0x11a014u: goto label_11a014;
        case 0x11a02cu: goto label_11a02c;
        case 0x11a07cu: goto label_11a07c;
        case 0x11a094u: goto label_11a094;
        case 0x11a0a0u: goto label_11a0a0;
        case 0x11a0bcu: goto label_11a0bc;
        case 0x11a15cu: goto label_11a15c;
        case 0x11a16cu: goto label_11a16c;
        case 0x11a188u: goto label_11a188;
        case 0x11a198u: goto label_11a198;
        case 0x11a1a4u: goto label_11a1a4;
        case 0x11a1b4u: goto label_11a1b4;
        case 0x11a1c8u: goto label_11a1c8;
        case 0x11a1d4u: goto label_11a1d4;
        case 0x11a1e4u: goto label_11a1e4;
        case 0x11a1f4u: goto label_11a1f4;
        case 0x11a200u: goto label_11a200;
        case 0x11a210u: goto label_11a210;
        case 0x11a224u: goto label_11a224;
        case 0x11a234u: goto label_11a234;
        case 0x11a240u: goto label_11a240;
        case 0x11a250u: goto label_11a250;
        case 0x11a25cu: goto label_11a25c;
        case 0x11a26cu: goto label_11a26c;
        case 0x11a278u: goto label_11a278;
        case 0x11a288u: goto label_11a288;
        case 0x11a294u: goto label_11a294;
        case 0x11a2a0u: goto label_11a2a0;
        case 0x11a2b0u: goto label_11a2b0;
        case 0x11a2c4u: goto label_11a2c4;
        case 0x11a2d0u: goto label_11a2d0;
        case 0x11a2e0u: goto label_11a2e0;
        case 0x11a2ecu: goto label_11a2ec;
        case 0x11a2f8u: goto label_11a2f8;
        case 0x11a304u: goto label_11a304;
        case 0x11a314u: goto label_11a314;
        case 0x11a340u: goto label_11a340;
        case 0x11a370u: goto label_11a370;
        default: break;
    }

    ctx->pc = 0x119678u;

    // 0x119678: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x119678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11967c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x11967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x119680: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x119680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x119684: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119688: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x119688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11968c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x11968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x119690: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x119690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x119694: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x119694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x119698: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x119698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x11969c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x11969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1196a0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1196a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x1196a4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1196a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x1196a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1196a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1196ac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1196acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196b0: 0x2b03f  dsra32      $s6, $v0, 0
    ctx->pc = 0x1196b0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1196b4: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x1196b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1196b8: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x1196b8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x1196bc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1196bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1196c0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1196c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1196c4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1196c4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1196c8: 0x3a03f  dsra32      $s4, $v1, 0
    ctx->pc = 0x1196c8u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1196cc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1196ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1196d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1196d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1196d4: 0x2828024  and         $s0, $s4, $v0
    ctx->pc = 0x1196d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1196d8: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x1196d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x1196dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1196DCu;
    {
        const bool branch_taken_0x1196dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1196E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196DCu;
            // 0x1196e0: 0x2c2a824  and         $s5, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196dc) {
            ctx->pc = 0x1196F8u;
            goto label_1196f8;
        }
    }
    ctx->pc = 0x1196E4u;
    // 0x1196e4: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x1196e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1196e8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x1196e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x1196ec: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x1196ECu;
    {
        const bool branch_taken_0x1196ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1196F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1196ECu;
            // 0x1196f0: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1196ec) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x1196F4u;
    // 0x1196f4: 0x0  nop
    ctx->pc = 0x1196f4u;
    // NOP
label_1196f8:
    // 0x1196f8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x1196f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x1196fc: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x1196fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x119700: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x119700u;
    {
        const bool branch_taken_0x119700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119700u;
            // 0x119704: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119700) {
            ctx->pc = 0x119730u;
            goto label_119730;
        }
    }
    ctx->pc = 0x119708u;
    // 0x119708: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119708u;
    {
        const bool branch_taken_0x119708 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x11970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119708u;
            // 0x11970c: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119708) {
            ctx->pc = 0x119718u;
            goto label_119718;
        }
    }
    ctx->pc = 0x119710u;
    // 0x119710: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x119710u;
    {
        const bool branch_taken_0x119710 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x119710) {
            ctx->pc = 0x119730u;
            goto label_119730;
        }
    }
    ctx->pc = 0x119718u;
label_119718:
    // 0x119718: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119718u;
    {
        const bool branch_taken_0x119718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119718) {
            ctx->pc = 0x11971Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119718u;
            // 0x11971c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119730u;
            goto label_119730;
        }
    }
    ctx->pc = 0x119720u;
    // 0x119720: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x119720u;
    {
        const bool branch_taken_0x119720 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x119720) {
            ctx->pc = 0x119740u;
            goto label_119740;
        }
    }
    ctx->pc = 0x119728u;
    // 0x119728: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119728u;
    {
        const bool branch_taken_0x119728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119728u;
            // 0x11972c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119728) {
            ctx->pc = 0x119740u;
            goto label_119740;
        }
    }
    ctx->pc = 0x119730u;
label_119730:
    // 0x119730: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119730u;
    SET_GPR_U32(ctx, 31, 0x119738u);
    ctx->pc = 0x119734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119730u;
            // 0x119734: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119738u; }
        if (ctx->pc != 0x119738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119738u; }
        if (ctx->pc != 0x119738u) { return; }
    }
    ctx->pc = 0x119738u;
label_119738:
    // 0x119738: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x119738u;
    {
        const bool branch_taken_0x119738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119738u;
            // 0x11973c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119738) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x119740u;
label_119740:
    // 0x119740: 0x6c10020  bgez        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x119740u;
    {
        const bool branch_taken_0x119740 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x119744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119740u;
            // 0x119744: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119740) {
            ctx->pc = 0x1197C4u;
            goto label_1197c4;
        }
    }
    ctx->pc = 0x119748u;
    // 0x119748: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x119748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
    // 0x11974c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x119750: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x119750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119754: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x119754u;
    {
        const bool branch_taken_0x119754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119754u;
            // 0x119758: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119754) {
            ctx->pc = 0x1197C0u;
            goto label_1197c0;
        }
    }
    ctx->pc = 0x11975Cu;
    // 0x11975c: 0x3c023fef  lui         $v0, 0x3FEF
    ctx->pc = 0x11975cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
    // 0x119760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x119760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x119764: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x119764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119768: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x119768u;
    {
        const bool branch_taken_0x119768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119768u;
            // 0x11976c: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119768) {
            ctx->pc = 0x1197C4u;
            goto label_1197c4;
        }
    }
    ctx->pc = 0x119770u;
    // 0x119770: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x119770u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x119774: 0x2a630015  slti        $v1, $s3, 0x15
    ctx->pc = 0x119774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x119778: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x119778u;
    {
        const bool branch_taken_0x119778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11977Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119778u;
            // 0x11977c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119778) {
            ctx->pc = 0x11979Cu;
            goto label_11979c;
        }
    }
    ctx->pc = 0x119780u;
    // 0x119780: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x119780u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x119784: 0x448806  srlv        $s1, $a0, $v0
    ctx->pc = 0x119784u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x119788: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x119788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x11978c: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x11978Cu;
    {
        const bool branch_taken_0x11978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x119790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11978Cu;
            // 0x119790: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11978c) {
            ctx->pc = 0x1197C4u;
            goto label_1197c4;
        }
    }
    ctx->pc = 0x119794u;
    // 0x119794: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x119794u;
    {
        const bool branch_taken_0x119794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119794u;
            // 0x119798: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119794) {
            ctx->pc = 0x1197BCu;
            goto label_1197bc;
        }
    }
    ctx->pc = 0x11979Cu;
label_11979c:
    // 0x11979c: 0x1480003d  bnez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11979Cu;
    {
        const bool branch_taken_0x11979c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1197A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11979Cu;
            // 0x1197a0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11979c) {
            ctx->pc = 0x119894u;
            goto label_119894;
        }
    }
    ctx->pc = 0x1197A4u;
    // 0x1197a4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1197a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1197a8: 0x508807  srav        $s1, $s0, $v0
    ctx->pc = 0x1197a8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1197ac: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x1197acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x1197b0: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1197B0u;
    {
        const bool branch_taken_0x1197b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1197B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197B0u;
            // 0x1197b4: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197b0) {
            ctx->pc = 0x1197C4u;
            goto label_1197c4;
        }
    }
    ctx->pc = 0x1197B8u;
    // 0x1197b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1197b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1197bc:
    // 0x1197bc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1197bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1197c0:
    // 0x1197c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1197c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1197c4:
    // 0x1197c4: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1197C4u;
    {
        const bool branch_taken_0x1197c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1197C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197C4u;
            // 0x1197c8: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197c4) {
            ctx->pc = 0x119894u;
            goto label_119894;
        }
    }
    ctx->pc = 0x1197CCu;
    // 0x1197cc: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1197CCu;
    {
        const bool branch_taken_0x1197cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1197D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197CCu;
            // 0x1197d0: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197cc) {
            ctx->pc = 0x119838u;
            goto label_119838;
        }
    }
    ctx->pc = 0x1197D4u;
    // 0x1197d4: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x1197d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x1197d8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1197d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1197dc: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x1197dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x1197e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1197E0u;
    {
        const bool branch_taken_0x1197e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1197E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197E0u;
            // 0x1197e4: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197e0) {
            ctx->pc = 0x1197FCu;
            goto label_1197fc;
        }
    }
    ctx->pc = 0x1197E8u;
    // 0x1197e8: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x1197e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1197ec: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x1197ECu;
    SET_GPR_U32(ctx, 31, 0x1197F4u);
    ctx->pc = 0x1197F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1197ECu;
            // 0x1197f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197F4u; }
        if (ctx->pc != 0x1197F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1197F4u; }
        if (ctx->pc != 0x1197F4u) { return; }
    }
    ctx->pc = 0x1197F4u;
label_1197f4:
    // 0x1197f4: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x1197F4u;
    {
        const bool branch_taken_0x1197f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1197F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1197F4u;
            // 0x1197f8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1197f4) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x1197FCu;
label_1197fc:
    // 0x1197fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1197fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x119800: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x119800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x119804: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119804u;
    {
        const bool branch_taken_0x119804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119804) {
            ctx->pc = 0x11981Cu;
            goto label_11981c;
        }
    }
    ctx->pc = 0x11980Cu;
    // 0x11980c: 0x68002d8  bltz        $s4, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x11980Cu;
    {
        const bool branch_taken_0x11980c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x119810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11980Cu;
            // 0x119810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11980c) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x119814u;
    // 0x119814: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x119814u;
    {
        const bool branch_taken_0x119814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119814u;
            // 0x119818: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119814) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x11981Cu;
label_11981c:
    // 0x11981c: 0x68102d4  bgez        $s4, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x11981Cu;
    {
        const bool branch_taken_0x11981c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x119820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11981Cu;
            // 0x119820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11981c) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x119824u;
    // 0x119824: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x119824u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119828: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119828u;
    SET_GPR_U32(ctx, 31, 0x119830u);
    ctx->pc = 0x11982Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119828u;
            // 0x11982c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119830u; }
        if (ctx->pc != 0x119830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119830u; }
        if (ctx->pc != 0x119830u) { return; }
    }
    ctx->pc = 0x119830u;
label_119830:
    // 0x119830: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x119830u;
    {
        const bool branch_taken_0x119830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119830u;
            // 0x119834: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119830) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x119838u;
label_119838:
    // 0x119838: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119838u;
    {
        const bool branch_taken_0x119838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119838u;
            // 0x11983c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119838) {
            ctx->pc = 0x119860u;
            goto label_119860;
        }
    }
    ctx->pc = 0x119840u;
    // 0x119840: 0x68102cb  bgez        $s4, . + 4 + (0x2CB << 2)
    ctx->pc = 0x119840u;
    {
        const bool branch_taken_0x119840 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x119844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119840u;
            // 0x119844: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119840) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x119848u;
    // 0x119848: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x119848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11984c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11984cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x119850: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x119850u;
    SET_GPR_U32(ctx, 31, 0x119858u);
    ctx->pc = 0x119854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119850u;
            // 0x119854: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119858u; }
        if (ctx->pc != 0x119858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119858u; }
        if (ctx->pc != 0x119858u) { return; }
    }
    ctx->pc = 0x119858u;
label_119858:
    // 0x119858: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x119858u;
    {
        const bool branch_taken_0x119858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11985Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119858u;
            // 0x11985c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119858) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x119860u;
label_119860:
    // 0x119860: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119860u;
    {
        const bool branch_taken_0x119860 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x119864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119860u;
            // 0x119864: 0x3c023fe0  lui         $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119860) {
            ctx->pc = 0x119874u;
            goto label_119874;
        }
    }
    ctx->pc = 0x119868u;
    // 0x119868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11986c: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x11986Cu;
    {
        const bool branch_taken_0x11986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11986Cu;
            // 0x119870: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11986c) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x119874u;
label_119874:
    // 0x119874: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119874u;
    {
        const bool branch_taken_0x119874 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x119874) {
            ctx->pc = 0x119894u;
            goto label_119894;
        }
    }
    ctx->pc = 0x11987Cu;
    // 0x11987c: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x11987Cu;
    {
        const bool branch_taken_0x11987c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x11987c) {
            ctx->pc = 0x119894u;
            goto label_119894;
        }
    }
    ctx->pc = 0x119884u;
    // 0x119884: 0xc046a30  jal         func_11A8C0
    ctx->pc = 0x119884u;
    SET_GPR_U32(ctx, 31, 0x11988Cu);
    ctx->pc = 0x119888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119884u;
            // 0x119888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11A8C0u;
    if (runtime->hasFunction(0x11A8C0u)) {
        auto targetFn = runtime->lookupFunction(0x11A8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11988Cu; }
        if (ctx->pc != 0x11988Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ieee754_sqrt_0x11a8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11988Cu; }
        if (ctx->pc != 0x11988Cu) { return; }
    }
    ctx->pc = 0x11988Cu;
label_11988c:
    // 0x11988c: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x11988Cu;
    {
        const bool branch_taken_0x11988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11988Cu;
            // 0x119890: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11988c) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x119894u;
label_119894:
    // 0x119894: 0xc0476cc  jal         func_11DB30
    ctx->pc = 0x119894u;
    SET_GPR_U32(ctx, 31, 0x11989Cu);
    ctx->pc = 0x119898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119894u;
            // 0x119898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DB30u;
    if (runtime->hasFunction(0x11DB30u)) {
        auto targetFn = runtime->lookupFunction(0x11DB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11989Cu; }
        if (ctx->pc != 0x11989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fabs_0x11db30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11989Cu; }
        if (ctx->pc != 0x11989Cu) { return; }
    }
    ctx->pc = 0x11989Cu;
label_11989c:
    // 0x11989c: 0x16e00028  bnez        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x11989Cu;
    {
        const bool branch_taken_0x11989c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1198A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11989Cu;
            // 0x1198a0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11989c) {
            ctx->pc = 0x119940u;
            goto label_119940;
        }
    }
    ctx->pc = 0x1198A4u;
    // 0x1198a4: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x1198a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x1198a8: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1198A8u;
    {
        const bool branch_taken_0x1198a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1198a8) {
            ctx->pc = 0x1198C0u;
            goto label_1198c0;
        }
    }
    ctx->pc = 0x1198B0u;
    // 0x1198b0: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1198B0u;
    {
        const bool branch_taken_0x1198b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1198B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198B0u;
            // 0x1198b4: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198b0) {
            ctx->pc = 0x1198C0u;
            goto label_1198c0;
        }
    }
    ctx->pc = 0x1198B8u;
    // 0x1198b8: 0x56a20022  bnel        $s5, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1198B8u;
    {
        const bool branch_taken_0x1198b8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1198b8) {
            ctx->pc = 0x1198BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1198B8u;
            // 0x1198bc: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119944u;
            goto label_119944;
        }
    }
    ctx->pc = 0x1198C0u;
label_1198c0:
    // 0x1198c0: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x1198C0u;
    {
        const bool branch_taken_0x1198c0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1198C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198C0u;
            // 0x1198c4: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198c0) {
            ctx->pc = 0x1198DCu;
            goto label_1198dc;
        }
    }
    ctx->pc = 0x1198C8u;
    // 0x1198c8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1198c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1198cc: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1198ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1198d0: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x1198D0u;
    SET_GPR_U32(ctx, 31, 0x1198D8u);
    ctx->pc = 0x1198D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1198D0u;
            // 0x1198d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198D8u; }
        if (ctx->pc != 0x1198D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1198D8u; }
        if (ctx->pc != 0x1198D8u) { return; }
    }
    ctx->pc = 0x1198D8u;
label_1198d8:
    // 0x1198d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1198d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1198dc:
    // 0x1198dc: 0x6c102a4  bgez        $s6, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x1198DCu;
    {
        const bool branch_taken_0x1198dc = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x1198E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198DCu;
            // 0x1198e0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198dc) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x1198E4u;
    // 0x1198e4: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x1198e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x1198e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1198e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1198ec: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1198ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1198f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1198f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1198f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1198F4u;
    {
        const bool branch_taken_0x1198f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1198F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1198F4u;
            // 0x1198f8: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1198f4) {
            ctx->pc = 0x11991Cu;
            goto label_11991c;
        }
    }
    ctx->pc = 0x1198FCu;
    // 0x1198fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1198fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119900: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119900u;
    SET_GPR_U32(ctx, 31, 0x119908u);
    ctx->pc = 0x119904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119900u;
            // 0x119904: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119908u; }
        if (ctx->pc != 0x119908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119908u; }
        if (ctx->pc != 0x119908u) { return; }
    }
    ctx->pc = 0x119908u;
label_119908:
    // 0x119908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11990c: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x11990Cu;
    SET_GPR_U32(ctx, 31, 0x119914u);
    ctx->pc = 0x119910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11990Cu;
            // 0x119910: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119914u; }
        if (ctx->pc != 0x119914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119914u; }
        if (ctx->pc != 0x119914u) { return; }
    }
    ctx->pc = 0x119914u;
label_119914:
    // 0x119914: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x119914u;
    {
        const bool branch_taken_0x119914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119914u;
            // 0x119918: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119914) {
            ctx->pc = 0x119938u;
            goto label_119938;
        }
    }
    ctx->pc = 0x11991Cu;
label_11991c:
    // 0x11991c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119920: 0x54820293  bnel        $a0, $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x119920u;
    {
        const bool branch_taken_0x119920 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x119920) {
            ctx->pc = 0x119924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119920u;
            // 0x119924: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x119928u;
    // 0x119928: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x119928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11992c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11992Cu;
    SET_GPR_U32(ctx, 31, 0x119934u);
    ctx->pc = 0x119930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11992Cu;
            // 0x119930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119934u; }
        if (ctx->pc != 0x119934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119934u; }
        if (ctx->pc != 0x119934u) { return; }
    }
    ctx->pc = 0x119934u;
label_119934:
    // 0x119934: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x119934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_119938:
    // 0x119938: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x119938u;
    {
        const bool branch_taken_0x119938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11993Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119938u;
            // 0x11993c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119938) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x119940u;
label_119940:
    // 0x119940: 0x16b7c2  srl         $s6, $s6, 31
    ctx->pc = 0x119940u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
label_119944:
    // 0x119944: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x119944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119948: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x119948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x11994c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x11994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x119950: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x119950u;
    {
        const bool branch_taken_0x119950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119950u;
            // 0x119954: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119950) {
            ctx->pc = 0x119978u;
            goto label_119978;
        }
    }
    ctx->pc = 0x119958u;
    // 0x119958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11995c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11995Cu;
    SET_GPR_U32(ctx, 31, 0x119964u);
    ctx->pc = 0x119960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11995Cu;
            // 0x119960: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119964u; }
        if (ctx->pc != 0x119964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119964u; }
        if (ctx->pc != 0x119964u) { return; }
    }
    ctx->pc = 0x119964u;
label_119964:
    // 0x119964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119968: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x119968u;
    SET_GPR_U32(ctx, 31, 0x119970u);
    ctx->pc = 0x11996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119968u;
            // 0x11996c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119970u; }
        if (ctx->pc != 0x119970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119970u; }
        if (ctx->pc != 0x119970u) { return; }
    }
    ctx->pc = 0x119970u;
label_119970:
    // 0x119970: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x119970u;
    {
        const bool branch_taken_0x119970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119970u;
            // 0x119974: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119970) {
            ctx->pc = 0x11A374u;
            goto label_11a374;
        }
    }
    ctx->pc = 0x119978u;
label_119978:
    // 0x119978: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x119978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x11997c: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x11997cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x119980: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x119980u;
    {
        const bool branch_taken_0x119980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119980u;
            // 0x119984: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119980) {
            ctx->pc = 0x119AE8u;
            goto label_119ae8;
        }
    }
    ctx->pc = 0x119988u;
    // 0x119988: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x119988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11998c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11998Cu;
    {
        const bool branch_taken_0x11998c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11998Cu;
            // 0x119990: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11998c) {
            ctx->pc = 0x1199C8u;
            goto label_1199c8;
        }
    }
    ctx->pc = 0x119994u;
    // 0x119994: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x119994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x119998: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x119998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x11999c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11999Cu;
    {
        const bool branch_taken_0x11999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11999c) {
            ctx->pc = 0x1199B8u;
            goto label_1199b8;
        }
    }
    ctx->pc = 0x1199A4u;
    // 0x1199a4: 0x6830272  bgezl       $s4, . + 4 + (0x272 << 2)
    ctx->pc = 0x1199A4u;
    {
        const bool branch_taken_0x1199a4 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1199a4) {
            ctx->pc = 0x1199A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1199A4u;
            // 0x1199a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x1199ACu;
    // 0x1199ac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1199acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1199b0:
    // 0x1199b0: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x1199B0u;
    {
        const bool branch_taken_0x1199b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199B0u;
            // 0x1199b4: 0xdc420f90  ld          $v0, 0xF90($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199b0) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x1199B8u;
label_1199b8:
    // 0x1199b8: 0x1e80fffd  bgtz        $s4, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1199B8u;
    {
        const bool branch_taken_0x1199b8 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x1199BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199B8u;
            // 0x1199bc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199b8) {
            ctx->pc = 0x1199B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199b0;
        }
    }
    ctx->pc = 0x1199C0u;
    // 0x1199c0: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x1199C0u;
    {
        const bool branch_taken_0x1199c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199C0u;
            // 0x1199c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199c0) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x1199C8u;
label_1199c8:
    // 0x1199c8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1199c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1199cc: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x1199ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1199d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1199D0u;
    {
        const bool branch_taken_0x1199d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1199d0) {
            ctx->pc = 0x1199D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1199D0u;
            // 0x1199d4: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1199E8u;
            goto label_1199e8;
        }
    }
    ctx->pc = 0x1199D8u;
    // 0x1199d8: 0x680fff5  bltz        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x1199D8u;
    {
        const bool branch_taken_0x1199d8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1199DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199D8u;
            // 0x1199dc: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d8) {
            ctx->pc = 0x1199B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199b0;
        }
    }
    ctx->pc = 0x1199E0u;
    // 0x1199e0: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x1199E0u;
    {
        const bool branch_taken_0x1199e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1199E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199E0u;
            // 0x1199e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199e0) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x1199E8u;
label_1199e8:
    // 0x1199e8: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x1199e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1199ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1199ECu;
    {
        const bool branch_taken_0x1199ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1199ec) {
            ctx->pc = 0x119A04u;
            goto label_119a04;
        }
    }
    ctx->pc = 0x1199F4u;
    // 0x1199f4: 0x1e80ffee  bgtz        $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1199F4u;
    {
        const bool branch_taken_0x1199f4 = (GPR_S32(ctx, 20) > 0);
        ctx->pc = 0x1199F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199F4u;
            // 0x1199f8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199f4) {
            ctx->pc = 0x1199B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1199b0;
        }
    }
    ctx->pc = 0x1199FCu;
    // 0x1199fc: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x1199FCu;
    {
        const bool branch_taken_0x1199fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199FCu;
            // 0x119a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199fc) {
            ctx->pc = 0x11A370u;
            goto label_11a370;
        }
    }
    ctx->pc = 0x119A04u;
label_119a04:
    // 0x119a04: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x119a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x119a08: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x119a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x119a0c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119A0Cu;
    SET_GPR_U32(ctx, 31, 0x119A14u);
    ctx->pc = 0x119A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A0Cu;
            // 0x119a10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A14u; }
        if (ctx->pc != 0x119A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A14u; }
        if (ctx->pc != 0x119A14u) { return; }
    }
    ctx->pc = 0x119A14u;
label_119a14:
    // 0x119a14: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x119a14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a1c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119A1Cu;
    SET_GPR_U32(ctx, 31, 0x119A24u);
    ctx->pc = 0x119A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A1Cu;
            // 0x119a20: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A24u; }
        if (ctx->pc != 0x119A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A24u; }
        if (ctx->pc != 0x119A24u) { return; }
    }
    ctx->pc = 0x119A24u;
label_119a24:
    // 0x119a24: 0x3405ff40  ori         $a1, $zero, 0xFF40
    ctx->pc = 0x119a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65344);
    // 0x119a28: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x119a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x119a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a30: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119A30u;
    SET_GPR_U32(ctx, 31, 0x119A38u);
    ctx->pc = 0x119A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A30u;
            // 0x119a34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A38u; }
        if (ctx->pc != 0x119A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A38u; }
        if (ctx->pc != 0x119A38u) { return; }
    }
    ctx->pc = 0x119A38u;
label_119a38:
    // 0x119a38: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119a3c: 0xdc240fa8  ld          $a0, 0xFA8($at)
    ctx->pc = 0x119a3cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 1), 4008)));
    // 0x119a40: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119A40u;
    SET_GPR_U32(ctx, 31, 0x119A48u);
    ctx->pc = 0x119A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A40u;
            // 0x119a44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A48u; }
        if (ctx->pc != 0x119A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A48u; }
        if (ctx->pc != 0x119A48u) { return; }
    }
    ctx->pc = 0x119A48u;
label_119a48:
    // 0x119a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a4c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119A4Cu;
    SET_GPR_U32(ctx, 31, 0x119A54u);
    ctx->pc = 0x119A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A4Cu;
            // 0x119a50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A54u; }
        if (ctx->pc != 0x119A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A54u; }
        if (ctx->pc != 0x119A54u) { return; }
    }
    ctx->pc = 0x119A54u;
label_119a54:
    // 0x119a54: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x119a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x119a58: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x119a58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x119a5c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119A5Cu;
    SET_GPR_U32(ctx, 31, 0x119A64u);
    ctx->pc = 0x119A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A5Cu;
            // 0x119a60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A64u; }
        if (ctx->pc != 0x119A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A64u; }
        if (ctx->pc != 0x119A64u) { return; }
    }
    ctx->pc = 0x119A64u;
label_119a64:
    // 0x119a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a68: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119A68u;
    SET_GPR_U32(ctx, 31, 0x119A70u);
    ctx->pc = 0x119A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A68u;
            // 0x119a6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A70u; }
        if (ctx->pc != 0x119A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A70u; }
        if (ctx->pc != 0x119A70u) { return; }
    }
    ctx->pc = 0x119A70u;
label_119a70:
    // 0x119a70: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119a74: 0xdc250fb0  ld          $a1, 0xFB0($at)
    ctx->pc = 0x119a74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4016)));
    // 0x119a78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a7c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119A7Cu;
    SET_GPR_U32(ctx, 31, 0x119A84u);
    ctx->pc = 0x119A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A7Cu;
            // 0x119a80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A84u; }
        if (ctx->pc != 0x119A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A84u; }
        if (ctx->pc != 0x119A84u) { return; }
    }
    ctx->pc = 0x119A84u;
label_119a84:
    // 0x119a84: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119a88: 0xdc250fb8  ld          $a1, 0xFB8($at)
    ctx->pc = 0x119a88u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4024)));
    // 0x119a8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x119a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119a90: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119A90u;
    SET_GPR_U32(ctx, 31, 0x119A98u);
    ctx->pc = 0x119A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A90u;
            // 0x119a94: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A98u; }
        if (ctx->pc != 0x119A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A98u; }
        if (ctx->pc != 0x119A98u) { return; }
    }
    ctx->pc = 0x119A98u;
label_119a98:
    // 0x119a98: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119a9c: 0xdc250fc0  ld          $a1, 0xFC0($at)
    ctx->pc = 0x119a9cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4032)));
    // 0x119aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119aa4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119AA4u;
    SET_GPR_U32(ctx, 31, 0x119AACu);
    ctx->pc = 0x119AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119AA4u;
            // 0x119aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AACu; }
        if (ctx->pc != 0x119AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AACu; }
        if (ctx->pc != 0x119AACu) { return; }
    }
    ctx->pc = 0x119AACu;
label_119aac:
    // 0x119aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ab0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119AB0u;
    SET_GPR_U32(ctx, 31, 0x119AB8u);
    ctx->pc = 0x119AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119AB0u;
            // 0x119ab4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AB8u; }
        if (ctx->pc != 0x119AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AB8u; }
        if (ctx->pc != 0x119AB8u) { return; }
    }
    ctx->pc = 0x119AB8u;
label_119ab8:
    // 0x119ab8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119ab8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119abc: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x119abcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ac0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119AC0u;
    SET_GPR_U32(ctx, 31, 0x119AC8u);
    ctx->pc = 0x119AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119AC0u;
            // 0x119ac4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AC8u; }
        if (ctx->pc != 0x119AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AC8u; }
        if (ctx->pc != 0x119AC8u) { return; }
    }
    ctx->pc = 0x119AC8u;
label_119ac8:
    // 0x119ac8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x119ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119acc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x119accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x119ad0: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x119ad0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x119ad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ad8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119AD8u;
    SET_GPR_U32(ctx, 31, 0x119AE0u);
    ctx->pc = 0x119ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119AD8u;
            // 0x119adc: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AE0u; }
        if (ctx->pc != 0x119AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119AE0u; }
        if (ctx->pc != 0x119AE0u) { return; }
    }
    ctx->pc = 0x119AE0u;
label_119ae0:
    // 0x119ae0: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x119AE0u;
    {
        const bool branch_taken_0x119ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AE0u;
            // 0x119ae4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ae0) {
            ctx->pc = 0x119EF8u;
            goto label_119ef8;
        }
    }
    ctx->pc = 0x119AE8u;
label_119ae8:
    // 0x119ae8: 0x3c10000f  lui         $s0, 0xF
    ctx->pc = 0x119ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
    // 0x119aec: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x119af0: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x119af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x119af4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x119AF4u;
    {
        const bool branch_taken_0x119af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AF4u;
            // 0x119af8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119af4) {
            ctx->pc = 0x119B20u;
            goto label_119b20;
        }
    }
    ctx->pc = 0x119AFCu;
    // 0x119afc: 0x2402ffcb  addiu       $v0, $zero, -0x35
    ctx->pc = 0x119afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967243));
    // 0x119b00: 0x34058680  ori         $a1, $zero, 0x8680
    ctx->pc = 0x119b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34432);
    // 0x119b04: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x119b04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x119b08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x119b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b0c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119B0Cu;
    SET_GPR_U32(ctx, 31, 0x119B14u);
    ctx->pc = 0x119B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119B0Cu;
            // 0x119b10: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B14u; }
        if (ctx->pc != 0x119B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119B14u; }
        if (ctx->pc != 0x119B14u) { return; }
    }
    ctx->pc = 0x119B14u;
label_119b14:
    // 0x119b14: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x119b14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b18: 0x2a83f  dsra32      $s5, $v0, 0
    ctx->pc = 0x119b18u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119b1c: 0x0  nop
    ctx->pc = 0x119b1cu;
    // NOP
label_119b20:
    // 0x119b20: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x119b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x119b24: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x119b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x119b28: 0x2b08824  and         $s1, $s5, $s0
    ctx->pc = 0x119b28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x119b2c: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x119b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x119b30: 0x2465fc01  addiu       $a1, $v1, -0x3FF
    ctx->pc = 0x119b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x119b34: 0x3442988e  ori         $v0, $v0, 0x988E
    ctx->pc = 0x119b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39054);
    // 0x119b38: 0x151d03  sra         $v1, $s5, 20
    ctx->pc = 0x119b38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 20));
    // 0x119b3c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x119b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x119b40: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x119b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x119b44: 0x224a825  or          $s5, $s1, $a0
    ctx->pc = 0x119b44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x119b48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119B48u;
    {
        const bool branch_taken_0x119b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B48u;
            // 0x119b4c: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b48) {
            ctx->pc = 0x119B58u;
            goto label_119b58;
        }
    }
    ctx->pc = 0x119B50u;
    // 0x119b50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x119B50u;
    {
        const bool branch_taken_0x119b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B50u;
            // 0x119b54: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b50) {
            ctx->pc = 0x119B84u;
            goto label_119b84;
        }
    }
    ctx->pc = 0x119B58u;
label_119b58:
    // 0x119b58: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x119b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x119b5c: 0x3442b679  ori         $v0, $v0, 0xB679
    ctx->pc = 0x119b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46713);
    // 0x119b60: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x119b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x119b64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119B64u;
    {
        const bool branch_taken_0x119b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119B64u;
            // 0x119b68: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b64) {
            ctx->pc = 0x119B84u;
            goto label_119b84;
        }
    }
    ctx->pc = 0x119B6Cu;
    // 0x119b6c: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x119b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x119b70: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x119b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x119b74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x119b74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b78: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x119b78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x119b7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x119b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x119b80: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x119b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_119b84:
    // 0x119b84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x119b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b88: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x119b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x119b8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x119b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x119b90: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x119b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x119b94: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x119b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x119b98: 0x83f025  or          $fp, $a0, $v1
    ctx->pc = 0x119b98u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x119b9c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x119b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x119ba0: 0x24420e88  addiu       $v0, $v0, 0xE88
    ctx->pc = 0x119ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3720));
    // 0x119ba4: 0x13a0c0  sll         $s4, $s3, 3
    ctx->pc = 0x119ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x119ba8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x119ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x119bac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x119bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bb0: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x119bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x119bb4: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119BB4u;
    SET_GPR_U32(ctx, 31, 0x119BBCu);
    ctx->pc = 0x119BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119BB4u;
            // 0x119bb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BBCu; }
        if (ctx->pc != 0x119BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BBCu; }
        if (ctx->pc != 0x119BBCu) { return; }
    }
    ctx->pc = 0x119BBCu;
label_119bbc:
    // 0x119bbc: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x119bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x119bc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x119bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bc4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119BC4u;
    SET_GPR_U32(ctx, 31, 0x119BCCu);
    ctx->pc = 0x119BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119BC4u;
            // 0x119bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BCCu; }
        if (ctx->pc != 0x119BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BCCu; }
        if (ctx->pc != 0x119BCCu) { return; }
    }
    ctx->pc = 0x119BCCu;
label_119bcc:
    // 0x119bcc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x119bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x119bd0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x119bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x119bd4: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x119BD4u;
    SET_GPR_U32(ctx, 31, 0x119BDCu);
    ctx->pc = 0x119BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119BD4u;
            // 0x119bd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BDCu; }
        if (ctx->pc != 0x119BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BDCu; }
        if (ctx->pc != 0x119BDCu) { return; }
    }
    ctx->pc = 0x119BDCu;
label_119bdc:
    // 0x119bdc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119bdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119be0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x119be0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119be4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119BE4u;
    SET_GPR_U32(ctx, 31, 0x119BECu);
    ctx->pc = 0x119BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119BE4u;
            // 0x119be8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BECu; }
        if (ctx->pc != 0x119BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119BECu; }
        if (ctx->pc != 0x119BECu) { return; }
    }
    ctx->pc = 0x119BECu;
label_119bec:
    // 0x119bec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x119becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x119bf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x119bf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119bf4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x119bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119bf8: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x119bf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x119bfc: 0x728824  and         $s1, $v1, $s2
    ctx->pc = 0x119bfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x119c00: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x119c00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x119c04: 0x131c80  sll         $v1, $s3, 18
    ctx->pc = 0x119c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 18));
    // 0x119c08: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x119c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x119c0c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x119c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x119c10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x119c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x119c14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x119c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x119c18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x119c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x119c1c: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x119c1cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119c20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c24: 0x34158010  ori         $s5, $zero, 0x8010
    ctx->pc = 0x119c24u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x119c28: 0x15abfc  dsll32      $s5, $s5, 15
    ctx->pc = 0x119c28u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 15));
    // 0x119c2c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119C2Cu;
    SET_GPR_U32(ctx, 31, 0x119C34u);
    ctx->pc = 0x119C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C2Cu;
            // 0x119c30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C34u; }
        if (ctx->pc != 0x119C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C34u; }
        if (ctx->pc != 0x119C34u) { return; }
    }
    ctx->pc = 0x119C34u;
label_119c34:
    // 0x119c34: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x119c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c38: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119C38u;
    SET_GPR_U32(ctx, 31, 0x119C40u);
    ctx->pc = 0x119C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C38u;
            // 0x119c3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C40u; }
        if (ctx->pc != 0x119C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C40u; }
        if (ctx->pc != 0x119C40u) { return; }
    }
    ctx->pc = 0x119C40u;
label_119c40:
    // 0x119c40: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x119c40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c44: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x119c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c48: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119C48u;
    SET_GPR_U32(ctx, 31, 0x119C50u);
    ctx->pc = 0x119C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C48u;
            // 0x119c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C50u; }
        if (ctx->pc != 0x119C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C50u; }
        if (ctx->pc != 0x119C50u) { return; }
    }
    ctx->pc = 0x119C50u;
label_119c50:
    // 0x119c50: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x119c50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c54: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119C54u;
    SET_GPR_U32(ctx, 31, 0x119C5Cu);
    ctx->pc = 0x119C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C54u;
            // 0x119c58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C5Cu; }
        if (ctx->pc != 0x119C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C5Cu; }
        if (ctx->pc != 0x119C5Cu) { return; }
    }
    ctx->pc = 0x119C5Cu;
label_119c5c:
    // 0x119c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c60: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x119c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c64: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119C64u;
    SET_GPR_U32(ctx, 31, 0x119C6Cu);
    ctx->pc = 0x119C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C64u;
            // 0x119c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C6Cu; }
        if (ctx->pc != 0x119C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C6Cu; }
        if (ctx->pc != 0x119C6Cu) { return; }
    }
    ctx->pc = 0x119C6Cu;
label_119c6c:
    // 0x119c6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c70: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119C70u;
    SET_GPR_U32(ctx, 31, 0x119C78u);
    ctx->pc = 0x119C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C70u;
            // 0x119c74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C78u; }
        if (ctx->pc != 0x119C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C78u; }
        if (ctx->pc != 0x119C78u) { return; }
    }
    ctx->pc = 0x119C78u;
label_119c78:
    // 0x119c78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c7c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119C7Cu;
    SET_GPR_U32(ctx, 31, 0x119C84u);
    ctx->pc = 0x119C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C7Cu;
            // 0x119c80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C84u; }
        if (ctx->pc != 0x119C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C84u; }
        if (ctx->pc != 0x119C84u) { return; }
    }
    ctx->pc = 0x119C84u;
label_119c84:
    // 0x119c84: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x119c84u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119c88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c8c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119C8Cu;
    SET_GPR_U32(ctx, 31, 0x119C94u);
    ctx->pc = 0x119C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C8Cu;
            // 0x119c90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C94u; }
        if (ctx->pc != 0x119C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119C94u; }
        if (ctx->pc != 0x119C94u) { return; }
    }
    ctx->pc = 0x119C94u;
label_119c94:
    // 0x119c94: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119c94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c9c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119C9Cu;
    SET_GPR_U32(ctx, 31, 0x119CA4u);
    ctx->pc = 0x119CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119C9Cu;
            // 0x119ca0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CA4u; }
        if (ctx->pc != 0x119CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CA4u; }
        if (ctx->pc != 0x119CA4u) { return; }
    }
    ctx->pc = 0x119CA4u;
label_119ca4:
    // 0x119ca4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119ca8: 0xdc250fc8  ld          $a1, 0xFC8($at)
    ctx->pc = 0x119ca8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4040)));
    // 0x119cac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119cb0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119CB0u;
    SET_GPR_U32(ctx, 31, 0x119CB8u);
    ctx->pc = 0x119CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CB0u;
            // 0x119cb4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CB8u; }
        if (ctx->pc != 0x119CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CB8u; }
        if (ctx->pc != 0x119CB8u) { return; }
    }
    ctx->pc = 0x119CB8u;
label_119cb8:
    // 0x119cb8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119cbc: 0xdc250fd0  ld          $a1, 0xFD0($at)
    ctx->pc = 0x119cbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4048)));
    // 0x119cc0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119CC0u;
    SET_GPR_U32(ctx, 31, 0x119CC8u);
    ctx->pc = 0x119CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CC0u;
            // 0x119cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CC8u; }
        if (ctx->pc != 0x119CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CC8u; }
        if (ctx->pc != 0x119CC8u) { return; }
    }
    ctx->pc = 0x119CC8u;
label_119cc8:
    // 0x119cc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ccc: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119CCCu;
    SET_GPR_U32(ctx, 31, 0x119CD4u);
    ctx->pc = 0x119CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CCCu;
            // 0x119cd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CD4u; }
        if (ctx->pc != 0x119CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CD4u; }
        if (ctx->pc != 0x119CD4u) { return; }
    }
    ctx->pc = 0x119CD4u;
label_119cd4:
    // 0x119cd4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119cd8: 0xdc250fd8  ld          $a1, 0xFD8($at)
    ctx->pc = 0x119cd8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4056)));
    // 0x119cdc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119CDCu;
    SET_GPR_U32(ctx, 31, 0x119CE4u);
    ctx->pc = 0x119CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CDCu;
            // 0x119ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CE4u; }
        if (ctx->pc != 0x119CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CE4u; }
        if (ctx->pc != 0x119CE4u) { return; }
    }
    ctx->pc = 0x119CE4u;
label_119ce4:
    // 0x119ce4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ce8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119CE8u;
    SET_GPR_U32(ctx, 31, 0x119CF0u);
    ctx->pc = 0x119CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CE8u;
            // 0x119cec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CF0u; }
        if (ctx->pc != 0x119CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119CF0u; }
        if (ctx->pc != 0x119CF0u) { return; }
    }
    ctx->pc = 0x119CF0u;
label_119cf0:
    // 0x119cf0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119cf4: 0xdc250fe0  ld          $a1, 0xFE0($at)
    ctx->pc = 0x119cf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4064)));
    // 0x119cf8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119CF8u;
    SET_GPR_U32(ctx, 31, 0x119D00u);
    ctx->pc = 0x119CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119CF8u;
            // 0x119cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D00u; }
        if (ctx->pc != 0x119D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D00u; }
        if (ctx->pc != 0x119D00u) { return; }
    }
    ctx->pc = 0x119D00u;
label_119d00:
    // 0x119d00: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d04: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119D04u;
    SET_GPR_U32(ctx, 31, 0x119D0Cu);
    ctx->pc = 0x119D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D04u;
            // 0x119d08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D0Cu; }
        if (ctx->pc != 0x119D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D0Cu; }
        if (ctx->pc != 0x119D0Cu) { return; }
    }
    ctx->pc = 0x119D0Cu;
label_119d0c:
    // 0x119d0c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119d10: 0xdc250fe8  ld          $a1, 0xFE8($at)
    ctx->pc = 0x119d10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4072)));
    // 0x119d14: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119D14u;
    SET_GPR_U32(ctx, 31, 0x119D1Cu);
    ctx->pc = 0x119D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D14u;
            // 0x119d18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D1Cu; }
        if (ctx->pc != 0x119D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D1Cu; }
        if (ctx->pc != 0x119D1Cu) { return; }
    }
    ctx->pc = 0x119D1Cu;
label_119d1c:
    // 0x119d1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d20: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119D20u;
    SET_GPR_U32(ctx, 31, 0x119D28u);
    ctx->pc = 0x119D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D20u;
            // 0x119d24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D28u; }
        if (ctx->pc != 0x119D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D28u; }
        if (ctx->pc != 0x119D28u) { return; }
    }
    ctx->pc = 0x119D28u;
label_119d28:
    // 0x119d28: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119d2c: 0xdc250ff0  ld          $a1, 0xFF0($at)
    ctx->pc = 0x119d2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4080)));
    // 0x119d30: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119D30u;
    SET_GPR_U32(ctx, 31, 0x119D38u);
    ctx->pc = 0x119D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D30u;
            // 0x119d34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D38u; }
        if (ctx->pc != 0x119D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D38u; }
        if (ctx->pc != 0x119D38u) { return; }
    }
    ctx->pc = 0x119D38u;
label_119d38:
    // 0x119d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d3c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119D3Cu;
    SET_GPR_U32(ctx, 31, 0x119D44u);
    ctx->pc = 0x119D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D3Cu;
            // 0x119d40: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D44u; }
        if (ctx->pc != 0x119D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D44u; }
        if (ctx->pc != 0x119D44u) { return; }
    }
    ctx->pc = 0x119D44u;
label_119d44:
    // 0x119d44: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x119d44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119d48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d4c: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119D4Cu;
    SET_GPR_U32(ctx, 31, 0x119D54u);
    ctx->pc = 0x119D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D4Cu;
            // 0x119d50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D54u; }
        if (ctx->pc != 0x119D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D54u; }
        if (ctx->pc != 0x119D54u) { return; }
    }
    ctx->pc = 0x119D54u;
label_119d54:
    // 0x119d54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d58: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119D58u;
    SET_GPR_U32(ctx, 31, 0x119D60u);
    ctx->pc = 0x119D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D58u;
            // 0x119d5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D60u; }
        if (ctx->pc != 0x119D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D60u; }
        if (ctx->pc != 0x119D60u) { return; }
    }
    ctx->pc = 0x119D60u;
label_119d60:
    // 0x119d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d64: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119D64u;
    SET_GPR_U32(ctx, 31, 0x119D6Cu);
    ctx->pc = 0x119D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D64u;
            // 0x119d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D6Cu; }
        if (ctx->pc != 0x119D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D6Cu; }
        if (ctx->pc != 0x119D6Cu) { return; }
    }
    ctx->pc = 0x119D6Cu;
label_119d6c:
    // 0x119d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d74: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119D74u;
    SET_GPR_U32(ctx, 31, 0x119D7Cu);
    ctx->pc = 0x119D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D74u;
            // 0x119d78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D7Cu; }
        if (ctx->pc != 0x119D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D7Cu; }
        if (ctx->pc != 0x119D7Cu) { return; }
    }
    ctx->pc = 0x119D7Cu;
label_119d7c:
    // 0x119d7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119d7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x119d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d84: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119D84u;
    SET_GPR_U32(ctx, 31, 0x119D8Cu);
    ctx->pc = 0x119D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D84u;
            // 0x119d88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D8Cu; }
        if (ctx->pc != 0x119D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D8Cu; }
        if (ctx->pc != 0x119D8Cu) { return; }
    }
    ctx->pc = 0x119D8Cu;
label_119d8c:
    // 0x119d8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d90: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119D90u;
    SET_GPR_U32(ctx, 31, 0x119D98u);
    ctx->pc = 0x119D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119D90u;
            // 0x119d94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D98u; }
        if (ctx->pc != 0x119D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119D98u; }
        if (ctx->pc != 0x119D98u) { return; }
    }
    ctx->pc = 0x119D98u;
label_119d98:
    // 0x119d98: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x119d98u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x119d9c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119da0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119DA0u;
    SET_GPR_U32(ctx, 31, 0x119DA8u);
    ctx->pc = 0x119DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DA0u;
            // 0x119da4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DA8u; }
        if (ctx->pc != 0x119DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DA8u; }
        if (ctx->pc != 0x119DA8u) { return; }
    }
    ctx->pc = 0x119DA8u;
label_119da8:
    // 0x119da8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x119da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dac: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119DACu;
    SET_GPR_U32(ctx, 31, 0x119DB4u);
    ctx->pc = 0x119DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DACu;
            // 0x119db0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DB4u; }
        if (ctx->pc != 0x119DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DB4u; }
        if (ctx->pc != 0x119DB4u) { return; }
    }
    ctx->pc = 0x119DB4u;
label_119db4:
    // 0x119db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119db8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119DB8u;
    SET_GPR_U32(ctx, 31, 0x119DC0u);
    ctx->pc = 0x119DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DB8u;
            // 0x119dbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DC0u; }
        if (ctx->pc != 0x119DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DC0u; }
        if (ctx->pc != 0x119DC0u) { return; }
    }
    ctx->pc = 0x119DC0u;
label_119dc0:
    // 0x119dc0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x119dc0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dc8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119DC8u;
    SET_GPR_U32(ctx, 31, 0x119DD0u);
    ctx->pc = 0x119DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DC8u;
            // 0x119dcc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DD0u; }
        if (ctx->pc != 0x119DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DD0u; }
        if (ctx->pc != 0x119DD0u) { return; }
    }
    ctx->pc = 0x119DD0u;
label_119dd0:
    // 0x119dd0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x119dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x119dd4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119dd8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119DD8u;
    SET_GPR_U32(ctx, 31, 0x119DE0u);
    ctx->pc = 0x119DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DD8u;
            // 0x119ddc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DE0u; }
        if (ctx->pc != 0x119DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DE0u; }
        if (ctx->pc != 0x119DE0u) { return; }
    }
    ctx->pc = 0x119DE0u;
label_119de0:
    // 0x119de0: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x119de0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119de8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119DE8u;
    SET_GPR_U32(ctx, 31, 0x119DF0u);
    ctx->pc = 0x119DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DE8u;
            // 0x119dec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DF0u; }
        if (ctx->pc != 0x119DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DF0u; }
        if (ctx->pc != 0x119DF0u) { return; }
    }
    ctx->pc = 0x119DF0u;
label_119df0:
    // 0x119df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119df4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119DF4u;
    SET_GPR_U32(ctx, 31, 0x119DFCu);
    ctx->pc = 0x119DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119DF4u;
            // 0x119df8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DFCu; }
        if (ctx->pc != 0x119DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119DFCu; }
        if (ctx->pc != 0x119DFCu) { return; }
    }
    ctx->pc = 0x119DFCu;
label_119dfc:
    // 0x119dfc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119dfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e00: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x119e00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e04: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119E04u;
    SET_GPR_U32(ctx, 31, 0x119E0Cu);
    ctx->pc = 0x119E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E04u;
            // 0x119e08: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E0Cu; }
        if (ctx->pc != 0x119E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E0Cu; }
        if (ctx->pc != 0x119E0Cu) { return; }
    }
    ctx->pc = 0x119E0Cu;
label_119e0c:
    // 0x119e0c: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x119e0cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x119e10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x119e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e14: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119E14u;
    SET_GPR_U32(ctx, 31, 0x119E1Cu);
    ctx->pc = 0x119E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E14u;
            // 0x119e18: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E1Cu; }
        if (ctx->pc != 0x119E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E1Cu; }
        if (ctx->pc != 0x119E1Cu) { return; }
    }
    ctx->pc = 0x119E1Cu;
label_119e1c:
    // 0x119e1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e20: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119E20u;
    SET_GPR_U32(ctx, 31, 0x119E28u);
    ctx->pc = 0x119E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E20u;
            // 0x119e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E28u; }
        if (ctx->pc != 0x119E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E28u; }
        if (ctx->pc != 0x119E28u) { return; }
    }
    ctx->pc = 0x119E28u;
label_119e28:
    // 0x119e28: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119e2c: 0xdc250ff8  ld          $a1, 0xFF8($at)
    ctx->pc = 0x119e2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4088)));
    // 0x119e30: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119e30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e34: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119E34u;
    SET_GPR_U32(ctx, 31, 0x119E3Cu);
    ctx->pc = 0x119E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E34u;
            // 0x119e38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E3Cu; }
        if (ctx->pc != 0x119E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E3Cu; }
        if (ctx->pc != 0x119E3Cu) { return; }
    }
    ctx->pc = 0x119E3Cu;
label_119e3c:
    // 0x119e3c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119e40: 0xdc251000  ld          $a1, 0x1000($at)
    ctx->pc = 0x119e40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
    // 0x119e44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x119e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e48: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119E48u;
    SET_GPR_U32(ctx, 31, 0x119E50u);
    ctx->pc = 0x119E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E48u;
            // 0x119e4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E50u; }
        if (ctx->pc != 0x119E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E50u; }
        if (ctx->pc != 0x119E50u) { return; }
    }
    ctx->pc = 0x119E50u;
label_119e50:
    // 0x119e50: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119e54: 0xdc251008  ld          $a1, 0x1008($at)
    ctx->pc = 0x119e54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4104)));
    // 0x119e58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e5c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119E5Cu;
    SET_GPR_U32(ctx, 31, 0x119E64u);
    ctx->pc = 0x119E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E5Cu;
            // 0x119e60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E64u; }
        if (ctx->pc != 0x119E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E64u; }
        if (ctx->pc != 0x119E64u) { return; }
    }
    ctx->pc = 0x119E64u;
label_119e64:
    // 0x119e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e68: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119E68u;
    SET_GPR_U32(ctx, 31, 0x119E70u);
    ctx->pc = 0x119E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E68u;
            // 0x119e6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E70u; }
        if (ctx->pc != 0x119E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E70u; }
        if (ctx->pc != 0x119E70u) { return; }
    }
    ctx->pc = 0x119E70u;
label_119e70:
    // 0x119e70: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x119e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x119e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e78: 0x24630ea8  addiu       $v1, $v1, 0xEA8
    ctx->pc = 0x119e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3752));
    // 0x119e7c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x119e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x119e80: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119E80u;
    SET_GPR_U32(ctx, 31, 0x119E88u);
    ctx->pc = 0x119E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E80u;
            // 0x119e84: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E88u; }
        if (ctx->pc != 0x119E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E88u; }
        if (ctx->pc != 0x119E88u) { return; }
    }
    ctx->pc = 0x119E88u;
label_119e88:
    // 0x119e88: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x119e8c: 0xc0a215c  jal         func_288570
    ctx->pc = 0x119E8Cu;
    SET_GPR_U32(ctx, 31, 0x119E94u);
    ctx->pc = 0x119E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E8Cu;
            // 0x119e90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288570u;
    if (runtime->hasFunction(0x288570u)) {
        auto targetFn = runtime->lookupFunction(0x288570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E94u; }
        if (ctx->pc != 0x119E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x288570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119E94u; }
        if (ctx->pc != 0x119E94u) { return; }
    }
    ctx->pc = 0x119E94u;
label_119e94:
    // 0x119e94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x119e94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x119e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e9c: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119E9Cu;
    SET_GPR_U32(ctx, 31, 0x119EA4u);
    ctx->pc = 0x119EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119E9Cu;
            // 0x119ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EA4u; }
        if (ctx->pc != 0x119EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EA4u; }
        if (ctx->pc != 0x119EA4u) { return; }
    }
    ctx->pc = 0x119EA4u;
label_119ea4:
    // 0x119ea4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x119ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x119ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eac: 0x24630e98  addiu       $v1, $v1, 0xE98
    ctx->pc = 0x119eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3736));
    // 0x119eb0: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x119eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x119eb4: 0xde900000  ld          $s0, 0x0($s4)
    ctx->pc = 0x119eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x119eb8: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119EB8u;
    SET_GPR_U32(ctx, 31, 0x119EC0u);
    ctx->pc = 0x119EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EB8u;
            // 0x119ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EC0u; }
        if (ctx->pc != 0x119EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EC0u; }
        if (ctx->pc != 0x119EC0u) { return; }
    }
    ctx->pc = 0x119EC0u;
label_119ec0:
    // 0x119ec0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x119ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ec4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119EC4u;
    SET_GPR_U32(ctx, 31, 0x119ECCu);
    ctx->pc = 0x119EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EC4u;
            // 0x119ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ECCu; }
        if (ctx->pc != 0x119ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ECCu; }
        if (ctx->pc != 0x119ECCu) { return; }
    }
    ctx->pc = 0x119ECCu;
label_119ecc:
    // 0x119ecc: 0x52a024  and         $s4, $v0, $s2
    ctx->pc = 0x119eccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x119ed0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x119ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ed4: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119ED4u;
    SET_GPR_U32(ctx, 31, 0x119EDCu);
    ctx->pc = 0x119ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119ED4u;
            // 0x119ed8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EDCu; }
        if (ctx->pc != 0x119EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EDCu; }
        if (ctx->pc != 0x119EDCu) { return; }
    }
    ctx->pc = 0x119EDCu;
label_119edc:
    // 0x119edc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ee0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119EE0u;
    SET_GPR_U32(ctx, 31, 0x119EE8u);
    ctx->pc = 0x119EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EE0u;
            // 0x119ee4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EE8u; }
        if (ctx->pc != 0x119EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EE8u; }
        if (ctx->pc != 0x119EE8u) { return; }
    }
    ctx->pc = 0x119EE8u;
label_119ee8:
    // 0x119ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eec: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119EECu;
    SET_GPR_U32(ctx, 31, 0x119EF4u);
    ctx->pc = 0x119EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EECu;
            // 0x119ef0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EF4u; }
        if (ctx->pc != 0x119EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EF4u; }
        if (ctx->pc != 0x119EF4u) { return; }
    }
    ctx->pc = 0x119EF4u;
label_119ef4:
    // 0x119ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_119ef8:
    // 0x119ef8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119EF8u;
    SET_GPR_U32(ctx, 31, 0x119F00u);
    ctx->pc = 0x119EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EF8u;
            // 0x119efc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F00u; }
        if (ctx->pc != 0x119F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F00u; }
        if (ctx->pc != 0x119F00u) { return; }
    }
    ctx->pc = 0x119F00u;
label_119f00:
    // 0x119f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x119f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x119f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119f08: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x119f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119f0c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x119f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x119f10: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x119f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x119f14: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x119f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x119f18: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x119f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x119f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x119f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x119f20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119F20u;
    {
        const bool branch_taken_0x119f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119F20u;
            // 0x119f24: 0xffa50008  sd          $a1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119f20) {
            ctx->pc = 0x119F34u;
            goto label_119f34;
        }
    }
    ctx->pc = 0x119F28u;
    // 0x119f28: 0x3402bff0  ori         $v0, $zero, 0xBFF0
    ctx->pc = 0x119f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x119f2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x119f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x119f30: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x119f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_119f34:
    // 0x119f34: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x119f34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x119f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x119f3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x119f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119f40: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x119f40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x119f44: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x119f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f48: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x119F48u;
    SET_GPR_U32(ctx, 31, 0x119F50u);
    ctx->pc = 0x119F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F48u;
            // 0x119f4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F50u; }
        if (ctx->pc != 0x119F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F50u; }
        if (ctx->pc != 0x119F50u) { return; }
    }
    ctx->pc = 0x119F50u;
label_119f50:
    // 0x119f50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x119f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f54: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119F54u;
    SET_GPR_U32(ctx, 31, 0x119F5Cu);
    ctx->pc = 0x119F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F54u;
            // 0x119f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F5Cu; }
        if (ctx->pc != 0x119F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F5Cu; }
        if (ctx->pc != 0x119F5Cu) { return; }
    }
    ctx->pc = 0x119F5Cu;
label_119f5c:
    // 0x119f5c: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x119f5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119f60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f64: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119F64u;
    SET_GPR_U32(ctx, 31, 0x119F6Cu);
    ctx->pc = 0x119F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F64u;
            // 0x119f68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F6Cu; }
        if (ctx->pc != 0x119F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F6Cu; }
        if (ctx->pc != 0x119F6Cu) { return; }
    }
    ctx->pc = 0x119F6Cu;
label_119f6c:
    // 0x119f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f70: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119F70u;
    SET_GPR_U32(ctx, 31, 0x119F78u);
    ctx->pc = 0x119F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F70u;
            // 0x119f74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F78u; }
        if (ctx->pc != 0x119F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F78u; }
        if (ctx->pc != 0x119F78u) { return; }
    }
    ctx->pc = 0x119F78u;
label_119f78:
    // 0x119f78: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x119f78u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f80: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119F80u;
    SET_GPR_U32(ctx, 31, 0x119F88u);
    ctx->pc = 0x119F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F80u;
            // 0x119f84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F88u; }
        if (ctx->pc != 0x119F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F88u; }
        if (ctx->pc != 0x119F88u) { return; }
    }
    ctx->pc = 0x119F88u;
label_119f88:
    // 0x119f88: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x119f88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x119f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119f90: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119F90u;
    SET_GPR_U32(ctx, 31, 0x119F98u);
    ctx->pc = 0x119F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119F90u;
            // 0x119f94: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F98u; }
        if (ctx->pc != 0x119F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119F98u; }
        if (ctx->pc != 0x119F98u) { return; }
    }
    ctx->pc = 0x119F98u;
label_119f98:
    // 0x119f98: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x119f98u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x119f9c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x119f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x119fa0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x119fa0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x119fa4: 0x3c03408f  lui         $v1, 0x408F
    ctx->pc = 0x119fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16527 << 16));
    // 0x119fa8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x119fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x119fac: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x119facu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x119fb0: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x119FB0u;
    {
        const bool branch_taken_0x119fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FB0u;
            // 0x119fb4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fb0) {
            ctx->pc = 0x11A038u;
            goto label_11a038;
        }
    }
    ctx->pc = 0x119FB8u;
    // 0x119fb8: 0x3c02bf70  lui         $v0, 0xBF70
    ctx->pc = 0x119fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49008 << 16));
    // 0x119fbc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x119fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x119fc0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x119fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x119fc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119FC4u;
    {
        const bool branch_taken_0x119fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FC4u;
            // 0x119fc8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fc4) {
            ctx->pc = 0x119FE8u;
            goto label_119fe8;
        }
    }
    ctx->pc = 0x119FCCu;
    // 0x119fcc: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x119fccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119fd0: 0xdc500f98  ld          $s0, 0xF98($v0)
    ctx->pc = 0x119fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 3992)));
    // 0x119fd4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x119FD4u;
    SET_GPR_U32(ctx, 31, 0x119FDCu);
    ctx->pc = 0x119FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119FD4u;
            // 0x119fd8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119FDCu; }
        if (ctx->pc != 0x119FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119FDCu; }
        if (ctx->pc != 0x119FDCu) { return; }
    }
    ctx->pc = 0x119FDCu;
label_119fdc:
    // 0x119fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x119fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119fe0: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x119FE0u;
    {
        const bool branch_taken_0x119fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119FE0u;
            // 0x119fe4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119fe0) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x119FE8u;
label_119fe8:
    // 0x119fe8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x119fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x119fec: 0xdc251010  ld          $a1, 0x1010($at)
    ctx->pc = 0x119fecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4112)));
    // 0x119ff0: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x119FF0u;
    SET_GPR_U32(ctx, 31, 0x119FF8u);
    ctx->pc = 0x119FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119FF0u;
            // 0x119ff4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119FF8u; }
        if (ctx->pc != 0x119FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119FF8u; }
        if (ctx->pc != 0x119FF8u) { return; }
    }
    ctx->pc = 0x119FF8u;
label_119ff8:
    // 0x119ff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a000: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A000u;
    SET_GPR_U32(ctx, 31, 0x11A008u);
    ctx->pc = 0x11A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A000u;
            // 0x11a004: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A008u; }
        if (ctx->pc != 0x11A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A008u; }
        if (ctx->pc != 0x11A008u) { return; }
    }
    ctx->pc = 0x11A008u;
label_11a008:
    // 0x11a008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a00c: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11A00Cu;
    SET_GPR_U32(ctx, 31, 0x11A014u);
    ctx->pc = 0x11A010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A00Cu;
            // 0x11a010: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A014u; }
        if (ctx->pc != 0x11A014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A014u; }
        if (ctx->pc != 0x11A014u) { return; }
    }
    ctx->pc = 0x11A014u;
label_11a014:
    // 0x11a014: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11A014u;
    {
        const bool branch_taken_0x11a014 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A014u;
            // 0x11a018: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a014) {
            ctx->pc = 0x11A0C8u;
            goto label_11a0c8;
        }
    }
    ctx->pc = 0x11A01Cu;
    // 0x11a01c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x11a01cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a020: 0xdc500f98  ld          $s0, 0xF98($v0)
    ctx->pc = 0x11a020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 3992)));
    // 0x11a024: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A024u;
    SET_GPR_U32(ctx, 31, 0x11A02Cu);
    ctx->pc = 0x11A028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A024u;
            // 0x11a028: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A02Cu; }
        if (ctx->pc != 0x11A02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A02Cu; }
        if (ctx->pc != 0x11A02Cu) { return; }
    }
    ctx->pc = 0x11A02Cu;
label_11a02c:
    // 0x11a02c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a030: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x11A030u;
    {
        const bool branch_taken_0x11a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A030u;
            // 0x11a034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a030) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x11A038u;
label_11a038:
    // 0x11a038: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11a038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11a03c: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x11a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x11a040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a044: 0x3463cbff  ori         $v1, $v1, 0xCBFF
    ctx->pc = 0x11a044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52223);
    // 0x11a048: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x11a048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x11a04c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11a04cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a050: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11A050u;
    {
        const bool branch_taken_0x11a050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A050u;
            // 0x11a054: 0x3c023f6f  lui         $v0, 0x3F6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16239 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a050) {
            ctx->pc = 0x11A0C8u;
            goto label_11a0c8;
        }
    }
    ctx->pc = 0x11A058u;
    // 0x11a058: 0x34423400  ori         $v0, $v0, 0x3400
    ctx->pc = 0x11a058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13312);
    // 0x11a05c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11a060: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x11a060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11a064: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11A064u;
    {
        const bool branch_taken_0x11a064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A064u;
            // 0x11a068: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a064) {
            ctx->pc = 0x11A088u;
            goto label_11a088;
        }
    }
    ctx->pc = 0x11A06Cu;
    // 0x11a06c: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x11a06cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a070: 0xdc500fa0  ld          $s0, 0xFA0($v0)
    ctx->pc = 0x11a070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4000)));
    // 0x11a074: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A074u;
    SET_GPR_U32(ctx, 31, 0x11A07Cu);
    ctx->pc = 0x11A078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A074u;
            // 0x11a078: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A07Cu; }
        if (ctx->pc != 0x11A07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A07Cu; }
        if (ctx->pc != 0x11A07Cu) { return; }
    }
    ctx->pc = 0x11A07Cu;
label_11a07c:
    // 0x11a07c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a080: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x11A080u;
    {
        const bool branch_taken_0x11a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A080u;
            // 0x11a084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a080) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x11A088u;
label_11a088:
    // 0x11a088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a08c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A08Cu;
    SET_GPR_U32(ctx, 31, 0x11A094u);
    ctx->pc = 0x11A090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A08Cu;
            // 0x11a090: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A094u; }
        if (ctx->pc != 0x11A094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A094u; }
        if (ctx->pc != 0x11A094u) { return; }
    }
    ctx->pc = 0x11A094u;
label_11a094:
    // 0x11a094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a098: 0xc0a2148  jal         func_288520
    ctx->pc = 0x11A098u;
    SET_GPR_U32(ctx, 31, 0x11A0A0u);
    ctx->pc = 0x11A09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A098u;
            // 0x11a09c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x288520u;
    if (runtime->hasFunction(0x288520u)) {
        auto targetFn = runtime->lookupFunction(0x288520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0A0u; }
        if (ctx->pc != 0x11A0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x288520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0A0u; }
        if (ctx->pc != 0x11A0A0u) { return; }
    }
    ctx->pc = 0x11A0A0u;
label_11a0a0:
    // 0x11a0a0: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11A0A0u;
    {
        const bool branch_taken_0x11a0a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x11A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0A0u;
            // 0x11a0a4: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0a0) {
            ctx->pc = 0x11A0CCu;
            goto label_11a0cc;
        }
    }
    ctx->pc = 0x11A0A8u;
    // 0x11a0a8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11a0ac: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x11a0acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a0b0: 0xdc500fa0  ld          $s0, 0xFA0($v0)
    ctx->pc = 0x11a0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4000)));
    // 0x11a0b4: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A0B4u;
    SET_GPR_U32(ctx, 31, 0x11A0BCu);
    ctx->pc = 0x11A0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0B4u;
            // 0x11a0b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0BCu; }
        if (ctx->pc != 0x11A0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A0BCu; }
        if (ctx->pc != 0x11A0BCu) { return; }
    }
    ctx->pc = 0x11A0BCu;
label_11a0bc:
    // 0x11a0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11a0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a0c0: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x11A0C0u;
    {
        const bool branch_taken_0x11a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0C0u;
            // 0x11a0c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0c0) {
            ctx->pc = 0x11A368u;
            goto label_11a368;
        }
    }
    ctx->pc = 0x11A0C8u;
label_11a0c8:
    // 0x11a0c8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x11a0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_11a0cc:
    // 0x11a0cc: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x11a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x11a0d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x11a0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x11a0d4: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x11a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x11a0d8: 0x2262024  and         $a0, $s1, $a2
    ctx->pc = 0x11a0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x11a0dc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11a0dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11a0e0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x11A0E0u;
    {
        const bool branch_taken_0x11a0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A0E0u;
            // 0x11a0e4: 0x41d03  sra         $v1, $a0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a0e0) {
            ctx->pc = 0x11A160u;
            goto label_11a160;
        }
    }
    ctx->pc = 0x11A0E8u;
    // 0x11a0e8: 0x2463fc02  addiu       $v1, $v1, -0x3FE
    ctx->pc = 0x11a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966274));
    // 0x11a0ec: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x11a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x11a0f0: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x11a0f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x11a0f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11a0f8: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x11a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x11a0fc: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11a0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x11a100: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x11a100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x11a104: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x11a104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x11a108: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x11a108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x11a10c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11a10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11a110: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x11a110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11a114: 0x2631007  srav        $v0, $v1, $s3
    ctx->pc = 0x11a114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x11a118: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x11a118u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x11a11c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x11a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x11a120: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x11a120u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11a124: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x11a124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x11a128: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x11a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11a12c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11a130: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x11a130u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x11a134: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a138: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x11a138u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x11a13c: 0xb1282a  slt         $a1, $a1, $s1
    ctx->pc = 0x11a13cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11a140: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11a140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x11a144: 0x31023  negu        $v0, $v1
    ctx->pc = 0x11a144u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x11a148: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x11a148u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x11a14c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a150: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x11a150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x11a154: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A154u;
    SET_GPR_U32(ctx, 31, 0x11A15Cu);
    ctx->pc = 0x11A158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A154u;
            // 0x11a158: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A15Cu; }
        if (ctx->pc != 0x11A15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A15Cu; }
        if (ctx->pc != 0x11A15Cu) { return; }
    }
    ctx->pc = 0x11A15Cu;
label_11a15c:
    // 0x11a15c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11a15cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a160:
    // 0x11a160: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a164: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A164u;
    SET_GPR_U32(ctx, 31, 0x11A16Cu);
    ctx->pc = 0x11A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A164u;
            // 0x11a168: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A16Cu; }
        if (ctx->pc != 0x11A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A16Cu; }
        if (ctx->pc != 0x11A16Cu) { return; }
    }
    ctx->pc = 0x11A16Cu;
label_11a16c:
    // 0x11a16c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a170: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11a174: 0x43a824  and         $s5, $v0, $v1
    ctx->pc = 0x11a174u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11a178: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a17c: 0xdc251018  ld          $a1, 0x1018($at)
    ctx->pc = 0x11a17cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4120)));
    // 0x11a180: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A180u;
    SET_GPR_U32(ctx, 31, 0x11A188u);
    ctx->pc = 0x11A184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A180u;
            // 0x11a184: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A188u; }
        if (ctx->pc != 0x11A188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A188u; }
        if (ctx->pc != 0x11A188u) { return; }
    }
    ctx->pc = 0x11A188u;
label_11a188:
    // 0x11a188: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x11a188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x11a18c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11a18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a190: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A190u;
    SET_GPR_U32(ctx, 31, 0x11A198u);
    ctx->pc = 0x11A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A190u;
            // 0x11a194: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A198u; }
        if (ctx->pc != 0x11A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A198u; }
        if (ctx->pc != 0x11A198u) { return; }
    }
    ctx->pc = 0x11A198u;
label_11a198:
    // 0x11a198: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a19c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A19Cu;
    SET_GPR_U32(ctx, 31, 0x11A1A4u);
    ctx->pc = 0x11A1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A19Cu;
            // 0x11a1a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1A4u; }
        if (ctx->pc != 0x11A1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1A4u; }
        if (ctx->pc != 0x11A1A4u) { return; }
    }
    ctx->pc = 0x11A1A4u;
label_11a1a4:
    // 0x11a1a4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a1a8: 0xdc251020  ld          $a1, 0x1020($at)
    ctx->pc = 0x11a1a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4128)));
    // 0x11a1ac: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A1ACu;
    SET_GPR_U32(ctx, 31, 0x11A1B4u);
    ctx->pc = 0x11A1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1ACu;
            // 0x11a1b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1B4u; }
        if (ctx->pc != 0x11A1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1B4u; }
        if (ctx->pc != 0x11A1B4u) { return; }
    }
    ctx->pc = 0x11A1B4u;
label_11a1b4:
    // 0x11a1b4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a1b8: 0xdc251028  ld          $a1, 0x1028($at)
    ctx->pc = 0x11a1b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4136)));
    // 0x11a1bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1c0: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A1C0u;
    SET_GPR_U32(ctx, 31, 0x11A1C8u);
    ctx->pc = 0x11A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1C0u;
            // 0x11a1c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1C8u; }
        if (ctx->pc != 0x11A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1C8u; }
        if (ctx->pc != 0x11A1C8u) { return; }
    }
    ctx->pc = 0x11A1C8u;
label_11a1c8:
    // 0x11a1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1cc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A1CCu;
    SET_GPR_U32(ctx, 31, 0x11A1D4u);
    ctx->pc = 0x11A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1CCu;
            // 0x11a1d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1D4u; }
        if (ctx->pc != 0x11A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1D4u; }
        if (ctx->pc != 0x11A1D4u) { return; }
    }
    ctx->pc = 0x11A1D4u;
label_11a1d4:
    // 0x11a1d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11a1d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1d8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x11a1d8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a1dc: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A1DCu;
    SET_GPR_U32(ctx, 31, 0x11A1E4u);
    ctx->pc = 0x11A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1DCu;
            // 0x11a1e0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1E4u; }
        if (ctx->pc != 0x11A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1E4u; }
        if (ctx->pc != 0x11A1E4u) { return; }
    }
    ctx->pc = 0x11A1E4u;
label_11a1e4:
    // 0x11a1e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1e8: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x11a1e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a1ec: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A1ECu;
    SET_GPR_U32(ctx, 31, 0x11A1F4u);
    ctx->pc = 0x11A1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1ECu;
            // 0x11a1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1F4u; }
        if (ctx->pc != 0x11A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A1F4u; }
        if (ctx->pc != 0x11A1F4u) { return; }
    }
    ctx->pc = 0x11A1F4u;
label_11a1f4:
    // 0x11a1f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11a1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1f8: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A1F8u;
    SET_GPR_U32(ctx, 31, 0x11A200u);
    ctx->pc = 0x11A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A1F8u;
            // 0x11a1fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A200u; }
        if (ctx->pc != 0x11A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A200u; }
        if (ctx->pc != 0x11A200u) { return; }
    }
    ctx->pc = 0x11A200u;
label_11a200:
    // 0x11a200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11a200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a208: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A208u;
    SET_GPR_U32(ctx, 31, 0x11A210u);
    ctx->pc = 0x11A20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A208u;
            // 0x11a20c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A210u; }
        if (ctx->pc != 0x11A210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A210u; }
        if (ctx->pc != 0x11A210u) { return; }
    }
    ctx->pc = 0x11A210u;
label_11a210:
    // 0x11a210: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11a210u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a214: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a218: 0xdc251030  ld          $a1, 0x1030($at)
    ctx->pc = 0x11a218u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4144)));
    // 0x11a21c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A21Cu;
    SET_GPR_U32(ctx, 31, 0x11A224u);
    ctx->pc = 0x11A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A21Cu;
            // 0x11a220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A224u; }
        if (ctx->pc != 0x11A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A224u; }
        if (ctx->pc != 0x11A224u) { return; }
    }
    ctx->pc = 0x11A224u;
label_11a224:
    // 0x11a224: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a228: 0xdc251038  ld          $a1, 0x1038($at)
    ctx->pc = 0x11a228u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4152)));
    // 0x11a22c: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A22Cu;
    SET_GPR_U32(ctx, 31, 0x11A234u);
    ctx->pc = 0x11A230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A22Cu;
            // 0x11a230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A234u; }
        if (ctx->pc != 0x11A234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A234u; }
        if (ctx->pc != 0x11A234u) { return; }
    }
    ctx->pc = 0x11A234u;
label_11a234:
    // 0x11a234: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a238: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A238u;
    SET_GPR_U32(ctx, 31, 0x11A240u);
    ctx->pc = 0x11A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A238u;
            // 0x11a23c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A240u; }
        if (ctx->pc != 0x11A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A240u; }
        if (ctx->pc != 0x11A240u) { return; }
    }
    ctx->pc = 0x11A240u;
label_11a240:
    // 0x11a240: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a244: 0xdc251040  ld          $a1, 0x1040($at)
    ctx->pc = 0x11a244u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4160)));
    // 0x11a248: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A248u;
    SET_GPR_U32(ctx, 31, 0x11A250u);
    ctx->pc = 0x11A24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A248u;
            // 0x11a24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A250u; }
        if (ctx->pc != 0x11A250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A250u; }
        if (ctx->pc != 0x11A250u) { return; }
    }
    ctx->pc = 0x11A250u;
label_11a250:
    // 0x11a250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a254: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A254u;
    SET_GPR_U32(ctx, 31, 0x11A25Cu);
    ctx->pc = 0x11A258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A254u;
            // 0x11a258: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A25Cu; }
        if (ctx->pc != 0x11A25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A25Cu; }
        if (ctx->pc != 0x11A25Cu) { return; }
    }
    ctx->pc = 0x11A25Cu;
label_11a25c:
    // 0x11a25c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a260: 0xdc251048  ld          $a1, 0x1048($at)
    ctx->pc = 0x11a260u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4168)));
    // 0x11a264: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A264u;
    SET_GPR_U32(ctx, 31, 0x11A26Cu);
    ctx->pc = 0x11A268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A264u;
            // 0x11a268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A26Cu; }
        if (ctx->pc != 0x11A26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A26Cu; }
        if (ctx->pc != 0x11A26Cu) { return; }
    }
    ctx->pc = 0x11A26Cu;
label_11a26c:
    // 0x11a26c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a270: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A270u;
    SET_GPR_U32(ctx, 31, 0x11A278u);
    ctx->pc = 0x11A274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A270u;
            // 0x11a274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A278u; }
        if (ctx->pc != 0x11A278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A278u; }
        if (ctx->pc != 0x11A278u) { return; }
    }
    ctx->pc = 0x11A278u;
label_11a278:
    // 0x11a278: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x11a278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x11a27c: 0xdc251050  ld          $a1, 0x1050($at)
    ctx->pc = 0x11a27cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4176)));
    // 0x11a280: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A280u;
    SET_GPR_U32(ctx, 31, 0x11A288u);
    ctx->pc = 0x11A284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A280u;
            // 0x11a284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A288u; }
        if (ctx->pc != 0x11A288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A288u; }
        if (ctx->pc != 0x11A288u) { return; }
    }
    ctx->pc = 0x11A288u;
label_11a288:
    // 0x11a288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11a288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a28c: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A28Cu;
    SET_GPR_U32(ctx, 31, 0x11A294u);
    ctx->pc = 0x11A290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A28Cu;
            // 0x11a290: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
        if (ctx->pc != 0x11A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A294u; }
        if (ctx->pc != 0x11A294u) { return; }
    }
    ctx->pc = 0x11A294u;
label_11a294:
    // 0x11a294: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a298: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A298u;
    SET_GPR_U32(ctx, 31, 0x11A2A0u);
    ctx->pc = 0x11A29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A298u;
            // 0x11a29c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2A0u; }
        if (ctx->pc != 0x11A2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2A0u; }
        if (ctx->pc != 0x11A2A0u) { return; }
    }
    ctx->pc = 0x11A2A0u;
label_11a2a0:
    // 0x11a2a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11a2a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2a8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A2A8u;
    SET_GPR_U32(ctx, 31, 0x11A2B0u);
    ctx->pc = 0x11A2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2A8u;
            // 0x11a2ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2B0u; }
        if (ctx->pc != 0x11A2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2B0u; }
        if (ctx->pc != 0x11A2B0u) { return; }
    }
    ctx->pc = 0x11A2B0u;
label_11a2b0:
    // 0x11a2b0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x11a2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11a2b4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x11a2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11a2b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2bc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A2BCu;
    SET_GPR_U32(ctx, 31, 0x11A2C4u);
    ctx->pc = 0x11A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2BCu;
            // 0x11a2c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2C4u; }
        if (ctx->pc != 0x11A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2C4u; }
        if (ctx->pc != 0x11A2C4u) { return; }
    }
    ctx->pc = 0x11A2C4u;
label_11a2c4:
    // 0x11a2c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2c8: 0xc0a20a8  jal         func_2882A0
    ctx->pc = 0x11A2C8u;
    SET_GPR_U32(ctx, 31, 0x11A2D0u);
    ctx->pc = 0x11A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2C8u;
            // 0x11a2cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2882A0u;
    if (runtime->hasFunction(0x2882A0u)) {
        auto targetFn = runtime->lookupFunction(0x2882A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2D0u; }
        if (ctx->pc != 0x11A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2882a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2D0u; }
        if (ctx->pc != 0x11A2D0u) { return; }
    }
    ctx->pc = 0x11A2D0u;
label_11a2d0:
    // 0x11a2d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2d8: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A2D8u;
    SET_GPR_U32(ctx, 31, 0x11A2E0u);
    ctx->pc = 0x11A2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2D8u;
            // 0x11a2dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2E0u; }
        if (ctx->pc != 0x11A2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2E0u; }
        if (ctx->pc != 0x11A2E0u) { return; }
    }
    ctx->pc = 0x11A2E0u;
label_11a2e0:
    // 0x11a2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2e4: 0xc0a1fce  jal         func_287F38
    ctx->pc = 0x11A2E4u;
    SET_GPR_U32(ctx, 31, 0x11A2ECu);
    ctx->pc = 0x11A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2E4u;
            // 0x11a2e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F38u;
    if (runtime->hasFunction(0x287F38u)) {
        auto targetFn = runtime->lookupFunction(0x287F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2ECu; }
        if (ctx->pc != 0x11A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x287f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2ECu; }
        if (ctx->pc != 0x11A2ECu) { return; }
    }
    ctx->pc = 0x11A2ECu;
label_11a2ec:
    // 0x11a2ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2f0: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A2F0u;
    SET_GPR_U32(ctx, 31, 0x11A2F8u);
    ctx->pc = 0x11A2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2F0u;
            // 0x11a2f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2F8u; }
        if (ctx->pc != 0x11A2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A2F8u; }
        if (ctx->pc != 0x11A2F8u) { return; }
    }
    ctx->pc = 0x11A2F8u;
label_11a2f8:
    // 0x11a2f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2fc: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A2FCu;
    SET_GPR_U32(ctx, 31, 0x11A304u);
    ctx->pc = 0x11A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A2FCu;
            // 0x11a300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A304u; }
        if (ctx->pc != 0x11A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A304u; }
        if (ctx->pc != 0x11A304u) { return; }
    }
    ctx->pc = 0x11A304u;
label_11a304:
    // 0x11a304: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x11a304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x11a308: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11a308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x11a30c: 0xc0a1fe4  jal         func_287F90
    ctx->pc = 0x11A30Cu;
    SET_GPR_U32(ctx, 31, 0x11A314u);
    ctx->pc = 0x11A310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A30Cu;
            // 0x11a310: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287F90u;
    if (runtime->hasFunction(0x287F90u)) {
        auto targetFn = runtime->lookupFunction(0x287F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A314u; }
        if (ctx->pc != 0x11A314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x287f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A314u; }
        if (ctx->pc != 0x11A314u) { return; }
    }
    ctx->pc = 0x11A314u;
label_11a314:
    // 0x11a314: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11a314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a318: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x11a318u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11a31c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x11a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11a320: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x11a320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x11a324: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x11a324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11a328: 0x111503  sra         $v0, $s1, 20
    ctx->pc = 0x11a328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 20));
    // 0x11a32c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11A32Cu;
    {
        const bool branch_taken_0x11a32c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x11A330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A32Cu;
            // 0x11a330: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a32c) {
            ctx->pc = 0x11A348u;
            goto label_11a348;
        }
    }
    ctx->pc = 0x11A334u;
    // 0x11a334: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x11a334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11a338: 0xc047802  jal         func_11E008
    ctx->pc = 0x11A338u;
    SET_GPR_U32(ctx, 31, 0x11A340u);
    ctx->pc = 0x11A33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11A338u;
            // 0x11a33c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E008u;
    if (runtime->hasFunction(0x11E008u)) {
        auto targetFn = runtime->lookupFunction(0x11E008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A340u; }
        if (ctx->pc != 0x11A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scalbn_0x11e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A340u; }
        if (ctx->pc != 0x11A340u) { return; }
    }
    ctx->pc = 0x11A340u;
label_11a340:
    // 0x11a340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11A340u;
    {
        const bool branch_taken_0x11a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A340u;
            // 0x11a344: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a340) {
            ctx->pc = 0x11A360u;
            goto label_11a360;
        }
    }
    ctx->pc = 0x11A348u;
label_11a348:
    // 0x11a348: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x11a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x11a34c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11a34cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11a350: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x11a350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x11a354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11a358: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x11a358u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x11a35c: 0x0  nop
    ctx->pc = 0x11a35cu;
    // NOP
label_11a360:
    // 0x11a360: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a364: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11a364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11a368:
    // 0x11a368: 0xc0a1ffe  jal         func_287FF8
    ctx->pc = 0x11A368u;
    SET_GPR_U32(ctx, 31, 0x11A370u);
    ctx->pc = 0x287FF8u;
    if (runtime->hasFunction(0x287FF8u)) {
        auto targetFn = runtime->lookupFunction(0x287FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A370u; }
        if (ctx->pc != 0x11A370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x287ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11A370u; }
        if (ctx->pc != 0x11A370u) { return; }
    }
    ctx->pc = 0x11A370u;
label_11a370:
    // 0x11a370: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11a370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_11a374:
    // 0x11a374: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x11a374u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11a378: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x11a378u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11a37c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x11a37cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11a380: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x11a380u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11a384: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x11a384u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11a388: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x11a388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a38c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11a38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11a390: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x11a390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11a394: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11a394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a398: 0x3e00008  jr          $ra
    ctx->pc = 0x11A398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11A398u;
            // 0x11a39c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A3A0u;
}
