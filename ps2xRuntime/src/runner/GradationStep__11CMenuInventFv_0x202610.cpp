#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GradationStep__11CMenuInventFv
// Address: 0x202610 - 0x202904
void GradationStep__11CMenuInventFv_0x202610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GradationStep__11CMenuInventFv_0x202610");
#endif

    switch (ctx->pc) {
        case 0x202694u: goto label_202694;
        case 0x2026a8u: goto label_2026a8;
        case 0x202734u: goto label_202734;
        case 0x20274cu: goto label_20274c;
        case 0x202768u: goto label_202768;
        case 0x20277cu: goto label_20277c;
        case 0x202794u: goto label_202794;
        case 0x202808u: goto label_202808;
        case 0x20285cu: goto label_20285c;
        default: break;
    }

    ctx->pc = 0x202610u;

    // 0x202610: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x202610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x202614: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x202614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x202618: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x202618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x20261c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x202620: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x202620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x202624: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x202624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x202628: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x202628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x20262c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x202630: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x202630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x202634: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x202638: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20263c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20263cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x202640: 0x8c830f18  lw          $v1, 0xF18($a0)
    ctx->pc = 0x202640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3864)));
    // 0x202644: 0x106000a2  beqz        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x202644u;
    {
        const bool branch_taken_0x202644 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202644u;
            // 0x202648: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202644) {
            ctx->pc = 0x2028D0u;
            goto label_2028d0;
        }
    }
    ctx->pc = 0x20264Cu;
    // 0x20264c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x20264cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x202650: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x202650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x202654: 0x24c6ee88  addiu       $a2, $a2, -0x1178
    ctx->pc = 0x202654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962824));
    // 0x202658: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x202658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20265c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x20265cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x202660: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x202660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202664: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x202664u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x202668: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x202668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x20266c: 0x8e840eac  lw          $a0, 0xEAC($s4)
    ctx->pc = 0x20266cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3756)));
    // 0x202670: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x202670u;
    {
        const bool branch_taken_0x202670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202670u;
            // 0x202674: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202670) {
            ctx->pc = 0x202730u;
            goto label_202730;
        }
    }
    ctx->pc = 0x202678u;
    // 0x202678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20267c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20267Cu;
    {
        const bool branch_taken_0x20267c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x202680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20267Cu;
            // 0x202680: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20267c) {
            ctx->pc = 0x20268Cu;
            goto label_20268c;
        }
    }
    ctx->pc = 0x202684u;
    // 0x202684: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x202684u;
    {
        const bool branch_taken_0x202684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202684) {
            ctx->pc = 0x2028CCu;
            goto label_2028cc;
        }
    }
    ctx->pc = 0x20268Cu;
label_20268c:
    // 0x20268c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20268cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202690: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202694:
    // 0x202694: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x202694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x202698: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x202698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20269c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20269cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2026a0: 0xc089664  jal         func_225990
    ctx->pc = 0x2026A0u;
    SET_GPR_U32(ctx, 31, 0x2026A8u);
    ctx->pc = 0x2026A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2026A0u;
            // 0x2026a4: 0x8e840f18  lw          $a0, 0xF18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2026A8u; }
        if (ctx->pc != 0x2026A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2026A8u; }
        if (ctx->pc != 0x2026A8u) { return; }
    }
    ctx->pc = 0x2026A8u;
label_2026a8:
    // 0x2026a8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2026a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2026ac: 0x8e840eb0  lw          $a0, 0xEB0($s4)
    ctx->pc = 0x2026acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3760)));
    // 0x2026b0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2026b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2026b4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2026B4u;
    {
        const bool branch_taken_0x2026b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2026b4) {
            ctx->pc = 0x202704u;
            goto label_202704;
        }
    }
    ctx->pc = 0x2026BCu;
    // 0x2026bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2026bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026c0: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x2026c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2026c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2026c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2026c8: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2026C8u;
    {
        const bool branch_taken_0x2026c8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2026CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2026C8u;
            // 0x2026cc: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026c8) {
            ctx->pc = 0x2026DCu;
            goto label_2026dc;
        }
    }
    ctx->pc = 0x2026D0u;
    // 0x2026d0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2026D0u;
    {
        const bool branch_taken_0x2026d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2026d0) {
            ctx->pc = 0x2026DCu;
            goto label_2026dc;
        }
    }
    ctx->pc = 0x2026D8u;
    // 0x2026d8: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2026d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_2026dc:
    // 0x2026dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2026DCu;
    {
        const bool branch_taken_0x2026dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2026dc) {
            ctx->pc = 0x2026FCu;
            goto label_2026fc;
        }
    }
    ctx->pc = 0x2026E4u;
    // 0x2026e4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2026e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2026e8: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x2026e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x2026ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2026ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2026f0: 0x0  nop
    ctx->pc = 0x2026f0u;
    // NOP
    // 0x2026f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2026f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2026f8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2026f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_2026fc:
    // 0x2026fc: 0x0  nop
    ctx->pc = 0x2026fcu;
    // NOP
    // 0x202700: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x202700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202704:
    // 0x202704: 0x0  nop
    ctx->pc = 0x202704u;
    // NOP
    // 0x202708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20270c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x20270cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x202710: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x202710u;
    {
        const bool branch_taken_0x202710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202710u;
            // 0x202714: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202710) {
            ctx->pc = 0x202694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202694;
        }
    }
    ctx->pc = 0x202718u;
    // 0x202718: 0x1220006c  beqz        $s1, . + 4 + (0x6C << 2)
    ctx->pc = 0x202718u;
    {
        const bool branch_taken_0x202718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x202718) {
            ctx->pc = 0x2028CCu;
            goto label_2028cc;
        }
    }
    ctx->pc = 0x202720u;
    // 0x202720: 0x8e830eb0  lw          $v1, 0xEB0($s4)
    ctx->pc = 0x202720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3760)));
    // 0x202724: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x202724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x202728: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x202728u;
    {
        const bool branch_taken_0x202728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20272Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202728u;
            // 0x20272c: 0xae830eb0  sw          $v1, 0xEB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202728) {
            ctx->pc = 0x2028CCu;
            goto label_2028cc;
        }
    }
    ctx->pc = 0x202730u;
label_202730:
    // 0x202730: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x202730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_202734:
    // 0x202734: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x202734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x202738: 0x278381d0  addiu       $v1, $gp, -0x7E30
    ctx->pc = 0x202738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x20273c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202740: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x202740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202744: 0xc089664  jal         func_225990
    ctx->pc = 0x202744u;
    SET_GPR_U32(ctx, 31, 0x20274Cu);
    ctx->pc = 0x202748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202744u;
            // 0x202748: 0x8e840f18  lw          $a0, 0xF18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225990u;
    if (runtime->hasFunction(0x225990u)) {
        auto targetFn = runtime->lookupFunction(0x225990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20274Cu; }
        if (ctx->pc != 0x20274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartInfo__16CMenuPosDataFormFPc_0x225990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20274Cu; }
        if (ctx->pc != 0x20274Cu) { return; }
    }
    ctx->pc = 0x20274Cu;
label_20274c:
    // 0x20274c: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x20274cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    // 0x202750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202754: 0x17c20002  bne         $fp, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x202754u;
    {
        const bool branch_taken_0x202754 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x202758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202754u;
            // 0x202758: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202754) {
            ctx->pc = 0x202760u;
            goto label_202760;
        }
    }
    ctx->pc = 0x20275Cu;
    // 0x20275c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20275cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202760:
    // 0x202760: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x202760u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202764: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x202764u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202768:
    // 0x202768: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x202768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x20276c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20276cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202770: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202770u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202774: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x202774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x202778: 0x56b821  addu        $s7, $v0, $s6
    ctx->pc = 0x202778u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20277c:
    // 0x20277c: 0x0  nop
    ctx->pc = 0x20277cu;
    // NOP
    // 0x202780: 0x2f21021  addu        $v0, $s7, $s2
    ctx->pc = 0x202780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x202784: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x202784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202788: 0x24530004  addiu       $s3, $v0, 0x4
    ctx->pc = 0x202788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x20278c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x20278Cu;
    SET_GPR_U32(ctx, 31, 0x202794u);
    ctx->pc = 0x202790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20278Cu;
            // 0x202790: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202794u; }
        if (ctx->pc != 0x202794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202794u; }
        if (ctx->pc != 0x202794u) { return; }
    }
    ctx->pc = 0x202794u;
label_202794:
    // 0x202794: 0x86880580  lh          $t0, 0x580($s4)
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
    // 0x202798: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x202798u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
    // 0x20279c: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x20279cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2027a0: 0x24c6ee70  addiu       $a2, $a2, -0x1190
    ctx->pc = 0x2027a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962800));
    // 0x2027a4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2027a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2027a8: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x2027a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x2027ac: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2027b0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x2027b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2027b4: 0x90c80000  lbu         $t0, 0x0($a2)
    ctx->pc = 0x2027b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2027b8: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2027B8u;
    {
        const bool branch_taken_0x2027b8 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x2027BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2027B8u;
            // 0x2027bc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027b8) {
            ctx->pc = 0x2027CCu;
            goto label_2027cc;
        }
    }
    ctx->pc = 0x2027C0u;
    // 0x2027c0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2027c0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2027c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2027C4u;
    {
        const bool branch_taken_0x2027c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2027C4u;
            // 0x2027c8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027c4) {
            ctx->pc = 0x2027E8u;
            goto label_2027e8;
        }
    }
    ctx->pc = 0x2027CCu;
label_2027cc:
    // 0x2027cc: 0x83842  srl         $a3, $t0, 1
    ctx->pc = 0x2027ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
    // 0x2027d0: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x2027d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2027d4: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x2027d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x2027d8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2027d8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2027dc: 0x0  nop
    ctx->pc = 0x2027dcu;
    // NOP
    // 0x2027e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2027e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2027e4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2027e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2027e8:
    // 0x2027e8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2027e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2027ec: 0x0  nop
    ctx->pc = 0x2027ecu;
    // NOP
    // 0x2027f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2027F0u;
    {
        const bool branch_taken_0x2027f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2027f0) {
            ctx->pc = 0x202810u;
            goto label_202810;
        }
    }
    ctx->pc = 0x2027F8u;
    // 0x2027f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2027fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2027fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202800: 0xc0a248c  jal         func_289230
    ctx->pc = 0x202800u;
    SET_GPR_U32(ctx, 31, 0x202808u);
    ctx->pc = 0x202804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202800u;
            // 0x202804: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202808u; }
        if (ctx->pc != 0x202808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202808u; }
        if (ctx->pc != 0x202808u) { return; }
    }
    ctx->pc = 0x202808u;
label_202808:
    // 0x202808: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x202808u;
    {
        const bool branch_taken_0x202808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202808u;
            // 0x20280c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202808) {
            ctx->pc = 0x202860u;
            goto label_202860;
        }
    }
    ctx->pc = 0x202810u;
label_202810:
    // 0x202810: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202810u;
    {
        const bool branch_taken_0x202810 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x202814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202810u;
            // 0x202814: 0x83842  srl         $a3, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202810) {
            ctx->pc = 0x202824u;
            goto label_202824;
        }
    }
    ctx->pc = 0x202818u;
    // 0x202818: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x202818u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20281c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20281Cu;
    {
        const bool branch_taken_0x20281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20281Cu;
            // 0x202820: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20281c) {
            ctx->pc = 0x20283Cu;
            goto label_20283c;
        }
    }
    ctx->pc = 0x202824u;
label_202824:
    // 0x202824: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x202824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x202828: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x202828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x20282c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x20282cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202830: 0x0  nop
    ctx->pc = 0x202830u;
    // NOP
    // 0x202834: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202834u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202838: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20283c:
    // 0x20283c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x20283cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x202840: 0x0  nop
    ctx->pc = 0x202840u;
    // NOP
    // 0x202844: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x202844u;
    {
        const bool branch_taken_0x202844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x202844) {
            ctx->pc = 0x202860u;
            goto label_202860;
        }
    }
    ctx->pc = 0x20284Cu;
    // 0x20284c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x20284cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x202850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202854: 0xc0a248c  jal         func_289230
    ctx->pc = 0x202854u;
    SET_GPR_U32(ctx, 31, 0x20285Cu);
    ctx->pc = 0x202858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202854u;
            // 0x202858: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20285Cu; }
        if (ctx->pc != 0x20285Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20285Cu; }
        if (ctx->pc != 0x20285Cu) { return; }
    }
    ctx->pc = 0x20285Cu;
label_20285c:
    // 0x20285c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x20285cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202860:
    // 0x202860: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x202860u;
    {
        const bool branch_taken_0x202860 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x202860) {
            ctx->pc = 0x20286Cu;
            goto label_20286c;
        }
    }
    ctx->pc = 0x202868u;
    // 0x202868: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20286c:
    // 0x20286c: 0x0  nop
    ctx->pc = 0x20286cu;
    // NOP
    // 0x202870: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x202870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x202874: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x202874u;
    {
        const bool branch_taken_0x202874 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x202874) {
            ctx->pc = 0x202880u;
            goto label_202880;
        }
    }
    ctx->pc = 0x20287Cu;
    // 0x20287c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x20287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_202880:
    // 0x202880: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x202884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202888: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x202888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x20288c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20288cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x202890: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x202890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x202894: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x202894u;
    {
        const bool branch_taken_0x202894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202894u;
            // 0x202898: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202894) {
            ctx->pc = 0x20277Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20277c;
        }
    }
    ctx->pc = 0x20289Cu;
    // 0x20289c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20289cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2028a0: 0x3a310001  xori        $s1, $s1, 0x1
    ctx->pc = 0x2028a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x2028a4: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x2028a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2028a8: 0x1460ffaf  bnez        $v1, . + 4 + (-0x51 << 2)
    ctx->pc = 0x2028A8u;
    {
        const bool branch_taken_0x2028a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2028ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2028A8u;
            // 0x2028ac: 0x26d60024  addiu       $s6, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028a8) {
            ctx->pc = 0x202768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202768;
        }
    }
    ctx->pc = 0x2028B0u;
    // 0x2028b0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2028b4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2028b8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2028bc: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2028bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2028c0: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x2028c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2028c4: 0x1460ff9b  bnez        $v1, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2028C4u;
    {
        const bool branch_taken_0x2028c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2028c4) {
            ctx->pc = 0x202734u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202734;
        }
    }
    ctx->pc = 0x2028CCu;
label_2028cc:
    // 0x2028cc: 0x0  nop
    ctx->pc = 0x2028ccu;
    // NOP
label_2028d0:
    // 0x2028d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2028d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2028d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2028d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2028d8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2028d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2028dc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2028dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2028e0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2028e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2028e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2028e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2028e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2028e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2028ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2028ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2028f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2028f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2028f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2028f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2028f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2028f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2028fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2028FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2028FCu;
            // 0x202900: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202904u;
}
