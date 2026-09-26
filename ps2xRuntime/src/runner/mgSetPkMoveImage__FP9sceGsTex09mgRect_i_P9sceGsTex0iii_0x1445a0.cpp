#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkMoveImage__FP9sceGsTex09mgRect<i>P9sceGsTex0iii
// Address: 0x1445a0 - 0x14490c
void mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkMoveImage__FP9sceGsTex09mgRect_i_P9sceGsTex0iii_0x1445a0");
#endif

    switch (ctx->pc) {
        case 0x14472cu: goto label_14472c;
        case 0x144738u: goto label_144738;
        case 0x14474cu: goto label_14474c;
        case 0x1447d8u: goto label_1447d8;
        case 0x14483cu: goto label_14483c;
        case 0x144870u: goto label_144870;
        case 0x144880u: goto label_144880;
        case 0x144888u: goto label_144888;
        case 0x144890u: goto label_144890;
        case 0x14489cu: goto label_14489c;
        case 0x1448a8u: goto label_1448a8;
        case 0x1448bcu: goto label_1448bc;
        case 0x1448ccu: goto label_1448cc;
        case 0x1448d4u: goto label_1448d4;
        case 0x1448dcu: goto label_1448dc;
        default: break;
    }

    ctx->pc = 0x1445a0u;

    // 0x1445a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1445a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1445a4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1445a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1445a8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1445a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1445ac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1445acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1445b0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1445b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445b4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1445b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1445b8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1445b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1445bc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1445bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1445c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1445c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1445c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1445c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1445c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1445c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1445cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1445ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1445d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1445d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1445d4: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x1445d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
    // 0x1445d8: 0xafa800a8  sw          $t0, 0xA8($sp)
    ctx->pc = 0x1445d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 8));
    // 0x1445dc: 0xafa900a4  sw          $t1, 0xA4($sp)
    ctx->pc = 0x1445dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 9));
    // 0x1445e0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1445e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1445e4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1445e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1445e8: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1445e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1445ec: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1445ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1445f0: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x1445f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1445f4: 0x8f938774  lw          $s3, -0x788C($gp)
    ctx->pc = 0x1445f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x1445f8: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x1445f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x1445fc: 0x5233c  dsll32      $a0, $a1, 12
    ctx->pc = 0x1445fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 12));
    // 0x144600: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x144600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x144604: 0x426be  dsrl32      $a0, $a0, 26
    ctx->pc = 0x144604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 26));
    // 0x144608: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x144608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x14460c: 0x421b8  dsll        $a0, $a0, 6
    ctx->pc = 0x14460cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
    // 0x144610: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x144610u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144614: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x144614u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
    // 0x144618: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x144618u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x14461c: 0x2a010040  slti        $at, $s0, 0x40
    ctx->pc = 0x14461cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x144620: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x144620u;
    {
        const bool branch_taken_0x144620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144620u;
            // 0x144624: 0x11883f  dsra32      $s1, $s1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144620) {
            ctx->pc = 0x14462Cu;
            goto label_14462c;
        }
    }
    ctx->pc = 0x144628u;
    // 0x144628: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_14462c:
    // 0x14462c: 0x2a210040  slti        $at, $s1, 0x40
    ctx->pc = 0x14462cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x144630: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x144630u;
    {
        const bool branch_taken_0x144630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x144630) {
            ctx->pc = 0x14463Cu;
            goto label_14463c;
        }
    }
    ctx->pc = 0x144638u;
    // 0x144638: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x144638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_14463c:
    // 0x14463c: 0x8fb400b8  lw          $s4, 0xB8($sp)
    ctx->pc = 0x14463cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x144640: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x144640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x144644: 0x2841823  subu        $v1, $s4, $a0
    ctx->pc = 0x144644u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x144648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14464c: 0x186000a3  blez        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x14464Cu;
    {
        const bool branch_taken_0x14464c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x14464c) {
            ctx->pc = 0x1448DCu;
            goto label_1448dc;
        }
    }
    ctx->pc = 0x144654u;
    // 0x144654: 0x8fb500bc  lw          $s5, 0xBC($sp)
    ctx->pc = 0x144654u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x144658: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x144658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x14465c: 0x2a51823  subu        $v1, $s5, $a1
    ctx->pc = 0x14465cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x144660: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x144664: 0x1860009d  blez        $v1, . + 4 + (0x9D << 2)
    ctx->pc = 0x144664u;
    {
        const bool branch_taken_0x144664 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x144668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144664u;
            // 0x144668: 0x4b103  sra         $s6, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144664) {
            ctx->pc = 0x1448DCu;
            goto label_1448dc;
        }
    }
    ctx->pc = 0x14466Cu;
    // 0x14466c: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14466Cu;
    {
        const bool branch_taken_0x14466c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x144670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14466Cu;
            // 0x144670: 0x59103  sra         $s2, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14466c) {
            ctx->pc = 0x14467Cu;
            goto label_14467c;
        }
    }
    ctx->pc = 0x144674u;
    // 0x144674: 0x2482000f  addiu       $v0, $a0, 0xF
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x144678: 0x2b103  sra         $s6, $v0, 4
    ctx->pc = 0x144678u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 4));
label_14467c:
    // 0x14467c: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14467Cu;
    {
        const bool branch_taken_0x14467c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x144680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14467Cu;
            // 0x144680: 0x3282000f  andi        $v0, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14467c) {
            ctx->pc = 0x144690u;
            goto label_144690;
        }
    }
    ctx->pc = 0x144684u;
    // 0x144684: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x144684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x144688: 0x29103  sra         $s2, $v0, 4
    ctx->pc = 0x144688u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 4));
    // 0x14468c: 0x3282000f  andi        $v0, $s4, 0xF
    ctx->pc = 0x14468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_144690:
    // 0x144690: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x144690u;
    {
        const bool branch_taken_0x144690 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x144690) {
            ctx->pc = 0x1446A4u;
            goto label_1446a4;
        }
    }
    ctx->pc = 0x144698u;
    // 0x144698: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x144698u;
    {
        const bool branch_taken_0x144698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144698) {
            ctx->pc = 0x1446A4u;
            goto label_1446a4;
        }
    }
    ctx->pc = 0x1446A0u;
    // 0x1446a0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1446a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1446a4:
    // 0x1446a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1446A4u;
    {
        const bool branch_taken_0x1446a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446A4u;
            // 0x1446a8: 0x141103  sra         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446a4) {
            ctx->pc = 0x1446C4u;
            goto label_1446c4;
        }
    }
    ctx->pc = 0x1446ACu;
    // 0x1446ac: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1446ACu;
    {
        const bool branch_taken_0x1446ac = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1446B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446ACu;
            // 0x1446b0: 0x141103  sra         $v0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446ac) {
            ctx->pc = 0x1446BCu;
            goto label_1446bc;
        }
    }
    ctx->pc = 0x1446B4u;
    // 0x1446b4: 0x2682000f  addiu       $v0, $s4, 0xF
    ctx->pc = 0x1446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x1446b8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1446b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1446bc:
    // 0x1446bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1446BCu;
    {
        const bool branch_taken_0x1446bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446BCu;
            // 0x1446c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446bc) {
            ctx->pc = 0x1446D8u;
            goto label_1446d8;
        }
    }
    ctx->pc = 0x1446C4u;
label_1446c4:
    // 0x1446c4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1446C4u;
    {
        const bool branch_taken_0x1446c4 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x1446c4) {
            ctx->pc = 0x1446D4u;
            goto label_1446d4;
        }
    }
    ctx->pc = 0x1446CCu;
    // 0x1446cc: 0x2682000f  addiu       $v0, $s4, 0xF
    ctx->pc = 0x1446ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x1446d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1446d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1446d4:
    // 0x1446d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1446d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1446d8:
    // 0x1446d8: 0x6a10004  bgez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1446D8u;
    {
        const bool branch_taken_0x1446d8 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x1446DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446D8u;
            // 0x1446dc: 0x32a2000f  andi        $v0, $s5, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446d8) {
            ctx->pc = 0x1446ECu;
            goto label_1446ec;
        }
    }
    ctx->pc = 0x1446E0u;
    // 0x1446e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1446E0u;
    {
        const bool branch_taken_0x1446e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1446e0) {
            ctx->pc = 0x1446ECu;
            goto label_1446ec;
        }
    }
    ctx->pc = 0x1446E8u;
    // 0x1446e8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1446ec:
    // 0x1446ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1446ECu;
    {
        const bool branch_taken_0x1446ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1446F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446ECu;
            // 0x1446f0: 0x151103  sra         $v0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446ec) {
            ctx->pc = 0x14470Cu;
            goto label_14470c;
        }
    }
    ctx->pc = 0x1446F4u;
    // 0x1446f4: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1446F4u;
    {
        const bool branch_taken_0x1446f4 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x1446F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1446F4u;
            // 0x1446f8: 0x151103  sra         $v0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446f4) {
            ctx->pc = 0x144704u;
            goto label_144704;
        }
    }
    ctx->pc = 0x1446FCu;
    // 0x1446fc: 0x26a2000f  addiu       $v0, $s5, 0xF
    ctx->pc = 0x1446fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x144700: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x144700u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_144704:
    // 0x144704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x144704u;
    {
        const bool branch_taken_0x144704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144704u;
            // 0x144708: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144704) {
            ctx->pc = 0x144720u;
            goto label_144720;
        }
    }
    ctx->pc = 0x14470Cu;
label_14470c:
    // 0x14470c: 0x6a10003  bgez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x14470Cu;
    {
        const bool branch_taken_0x14470c = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x14470c) {
            ctx->pc = 0x14471Cu;
            goto label_14471c;
        }
    }
    ctx->pc = 0x144714u;
    // 0x144714: 0x26a2000f  addiu       $v0, $s5, 0xF
    ctx->pc = 0x144714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 15));
    // 0x144718: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x144718u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_14471c:
    // 0x14471c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14471cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_144720:
    // 0x144720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144724: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x144724u;
    SET_GPR_U32(ctx, 31, 0x14472Cu);
    ctx->pc = 0x144728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144724u;
            // 0x144728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14472Cu; }
        if (ctx->pc != 0x14472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14472Cu; }
        if (ctx->pc != 0x14472Cu) { return; }
    }
    ctx->pc = 0x14472Cu;
label_14472c:
    // 0x14472c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144730: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x144730u;
    SET_GPR_U32(ctx, 31, 0x144738u);
    ctx->pc = 0x144734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144730u;
            // 0x144734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144738u; }
        if (ctx->pc != 0x144738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144738u; }
        if (ctx->pc != 0x144738u) { return; }
    }
    ctx->pc = 0x144738u;
label_144738:
    // 0x144738: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x144738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x14473c: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x14473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x144740: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x144740u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144744: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x144744u;
    SET_GPR_U32(ctx, 31, 0x14474Cu);
    ctx->pc = 0x144748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144744u;
            // 0x144748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14474Cu; }
        if (ctx->pc != 0x14474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14474Cu; }
        if (ctx->pc != 0x14474Cu) { return; }
    }
    ctx->pc = 0x14474Cu;
label_14474c:
    // 0x14474c: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x14474cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x144750: 0x111183  sra         $v0, $s1, 6
    ctx->pc = 0x144750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 6));
    // 0x144754: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144754u;
    {
        const bool branch_taken_0x144754 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x144758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144754u;
            // 0x144758: 0x30653fff  andi        $a1, $v1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144754) {
            ctx->pc = 0x144764u;
            goto label_144764;
        }
    }
    ctx->pc = 0x14475Cu;
    // 0x14475c: 0x2622003f  addiu       $v0, $s1, 0x3F
    ctx->pc = 0x14475cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x144760: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x144760u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_144764:
    // 0x144764: 0x96e40002  lhu         $a0, 0x2($s7)
    ctx->pc = 0x144764u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x144768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x144768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14476c: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x14476cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x144770: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x144770u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144774: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x144774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x144778: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x144778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14477c: 0x101183  sra         $v0, $s0, 6
    ctx->pc = 0x14477cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 6));
    // 0x144780: 0x425bc  dsll32      $a0, $a0, 22
    ctx->pc = 0x144780u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 22));
    // 0x144784: 0x426be  dsrl32      $a0, $a0, 26
    ctx->pc = 0x144784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 26));
    // 0x144788: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x144788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x14478c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x14478cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x144790: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x144790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144794: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x144794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x144798: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144798u;
    {
        const bool branch_taken_0x144798 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x14479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144798u;
            // 0x14479c: 0x642825  or          $a1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144798) {
            ctx->pc = 0x1447A8u;
            goto label_1447a8;
        }
    }
    ctx->pc = 0x1447A0u;
    // 0x1447a0: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x1447a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x1447a4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1447a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1447a8:
    // 0x1447a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1447a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1447ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1447acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447b0: 0x97c20002  lhu         $v0, 0x2($fp)
    ctx->pc = 0x1447b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x1447b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1447b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1447b8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1447b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1447bc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1447bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1447c0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1447c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1447c4: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1447c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1447c8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1447c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1447cc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1447ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1447d0: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1447D0u;
    SET_GPR_U32(ctx, 31, 0x1447D8u);
    ctx->pc = 0x1447D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1447D0u;
            // 0x1447d4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447D8u; }
        if (ctx->pc != 0x1447D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1447D8u; }
        if (ctx->pc != 0x1447D8u) { return; }
    }
    ctx->pc = 0x1447D8u;
label_1447d8:
    // 0x1447d8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1447d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1447dc: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1447dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1447e0: 0x16303c  dsll32      $a2, $s6, 0
    ctx->pc = 0x1447e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) << (32 + 0));
    // 0x1447e4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1447e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1447e8: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x1447e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x1447ec: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1447ecu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1447f0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x1447f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1447f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1447f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1447f8: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1447f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1447fc: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1447fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x144800: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x144800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x144804: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x144804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144808: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x144808u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x14480c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x14480cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144810: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x144810u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x144814: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x144814u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x144818: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x144818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14481c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x14481cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144820: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x144820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x144824: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x144824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x144828: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x144828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x14482c: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x14482cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144830: 0x216fc  dsll32      $v0, $v0, 27
    ctx->pc = 0x144830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 27));
    // 0x144834: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144834u;
    SET_GPR_U32(ctx, 31, 0x14483Cu);
    ctx->pc = 0x144838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144834u;
            // 0x144838: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14483Cu; }
        if (ctx->pc != 0x14483Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14483Cu; }
        if (ctx->pc != 0x14483Cu) { return; }
    }
    ctx->pc = 0x14483Cu;
label_14483c:
    // 0x14483c: 0x2b21023  subu        $v0, $s5, $s2
    ctx->pc = 0x14483cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x144840: 0x2961823  subu        $v1, $s4, $s6
    ctx->pc = 0x144840u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x144844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14484c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14484cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144850: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x144850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144854: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x144854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x144858: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x144858u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x14485c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x14485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144864: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x144864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x144868: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144868u;
    SET_GPR_U32(ctx, 31, 0x144870u);
    ctx->pc = 0x14486Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144868u;
            // 0x14486c: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144870u; }
        if (ctx->pc != 0x144870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144870u; }
        if (ctx->pc != 0x144870u) { return; }
    }
    ctx->pc = 0x144870u;
label_144870:
    // 0x144870: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144874: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x144874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x144878: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x144878u;
    SET_GPR_U32(ctx, 31, 0x144880u);
    ctx->pc = 0x14487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144878u;
            // 0x14487c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144880u; }
        if (ctx->pc != 0x144880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144880u; }
        if (ctx->pc != 0x144880u) { return; }
    }
    ctx->pc = 0x144880u;
label_144880:
    // 0x144880: 0xc041b54  jal         func_106D50
    ctx->pc = 0x144880u;
    SET_GPR_U32(ctx, 31, 0x144888u);
    ctx->pc = 0x144884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144880u;
            // 0x144884: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144888u; }
        if (ctx->pc != 0x144888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144888u; }
        if (ctx->pc != 0x144888u) { return; }
    }
    ctx->pc = 0x144888u;
label_144888:
    // 0x144888: 0xc041b42  jal         func_106D08
    ctx->pc = 0x144888u;
    SET_GPR_U32(ctx, 31, 0x144890u);
    ctx->pc = 0x14488Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144888u;
            // 0x14488c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144890u; }
        if (ctx->pc != 0x144890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144890u; }
        if (ctx->pc != 0x144890u) { return; }
    }
    ctx->pc = 0x144890u;
label_144890:
    // 0x144890: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x144890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144894: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x144894u;
    SET_GPR_U32(ctx, 31, 0x14489Cu);
    ctx->pc = 0x144898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x144894u;
            // 0x144898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14489Cu; }
        if (ctx->pc != 0x14489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14489Cu; }
        if (ctx->pc != 0x14489Cu) { return; }
    }
    ctx->pc = 0x14489Cu;
label_14489c:
    // 0x14489c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448a0: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x1448A0u;
    SET_GPR_U32(ctx, 31, 0x1448A8u);
    ctx->pc = 0x1448A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448A0u;
            // 0x1448a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448A8u; }
        if (ctx->pc != 0x1448A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448A8u; }
        if (ctx->pc != 0x1448A8u) { return; }
    }
    ctx->pc = 0x1448A8u;
label_1448a8:
    // 0x1448a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1448a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1448ac: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x1448acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x1448b0: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1448b0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1448b4: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x1448B4u;
    SET_GPR_U32(ctx, 31, 0x1448BCu);
    ctx->pc = 0x1448B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448B4u;
            // 0x1448b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448BCu; }
        if (ctx->pc != 0x1448BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448BCu; }
        if (ctx->pc != 0x1448BCu) { return; }
    }
    ctx->pc = 0x1448BCu;
label_1448bc:
    // 0x1448bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1448bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448c0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1448c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1448c4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1448C4u;
    SET_GPR_U32(ctx, 31, 0x1448CCu);
    ctx->pc = 0x1448C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448C4u;
            // 0x1448c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448CCu; }
        if (ctx->pc != 0x1448CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448CCu; }
        if (ctx->pc != 0x1448CCu) { return; }
    }
    ctx->pc = 0x1448CCu;
label_1448cc:
    // 0x1448cc: 0xc041b54  jal         func_106D50
    ctx->pc = 0x1448CCu;
    SET_GPR_U32(ctx, 31, 0x1448D4u);
    ctx->pc = 0x1448D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448CCu;
            // 0x1448d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448D4u; }
        if (ctx->pc != 0x1448D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448D4u; }
        if (ctx->pc != 0x1448D4u) { return; }
    }
    ctx->pc = 0x1448D4u;
label_1448d4:
    // 0x1448d4: 0xc041b42  jal         func_106D08
    ctx->pc = 0x1448D4u;
    SET_GPR_U32(ctx, 31, 0x1448DCu);
    ctx->pc = 0x1448D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1448D4u;
            // 0x1448d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448DCu; }
        if (ctx->pc != 0x1448DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1448DCu; }
        if (ctx->pc != 0x1448DCu) { return; }
    }
    ctx->pc = 0x1448DCu;
label_1448dc:
    // 0x1448dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1448dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1448e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1448e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1448e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1448e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1448e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1448e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1448ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1448ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1448f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1448f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1448f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1448f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1448f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1448f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1448fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1448fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x144900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144904: 0x3e00008  jr          $ra
    ctx->pc = 0x144904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144904u;
            // 0x144908: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14490Cu;
}
