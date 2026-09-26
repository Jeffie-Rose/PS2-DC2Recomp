#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetPos_AbsPosSet__F4RECTiiiPiPi
// Address: 0x159560 - 0x1596d8
void GetPos_AbsPosSet__F4RECTiiiPiPi_0x159560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetPos_AbsPosSet__F4RECTiiiPiPi_0x159560");
#endif

    switch (ctx->pc) {
        case 0x1595c8u: goto label_1595c8;
        case 0x159614u: goto label_159614;
        case 0x15964cu: goto label_15964c;
        default: break;
    }

    ctx->pc = 0x159560u;

    // 0x159560: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x159564: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x159564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x159568: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x159568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15956c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x15956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159570: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x159570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x159574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x159574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x159578: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x159578u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15957c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15957cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x159580: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159584: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15958c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15958cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159594: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x159594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159598: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x159598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15959c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15959cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1595a0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1595a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1595a4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1595a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595a8: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1595a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1595ac: 0x24c64510  addiu       $a2, $a2, 0x4510
    ctx->pc = 0x1595acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17680));
    // 0x1595b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1595b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1595b4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1595b8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1595b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1595bc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1595bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1595c0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1595c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1595c4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1595c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1595c8:
    // 0x1595c8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1595c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1595cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1595ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1595d0: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1595d0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1595d4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1595d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1595d8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1595d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1595dc: 0x0  nop
    ctx->pc = 0x1595dcu;
    // NOP
    // 0x1595e0: 0x1c60fff9  bgtz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1595E0u;
    {
        const bool branch_taken_0x1595e0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1595e0) {
            ctx->pc = 0x1595C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1595c8;
        }
    }
    ctx->pc = 0x1595E8u;
    // 0x1595e8: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x1595e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1595ec: 0x7a0c0  sll         $s4, $a3, 3
    ctx->pc = 0x1595ecu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1595f0: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1595f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1595f4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1595f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1595f8: 0x8fb50088  lw          $s5, 0x88($sp)
    ctx->pc = 0x1595f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1595fc: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x1595fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159600: 0x44950800  mtc1        $s5, $f1
    ctx->pc = 0x159600u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159604: 0x0  nop
    ctx->pc = 0x159604u;
    // NOP
    // 0x159608: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15960c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x15960Cu;
    SET_GPR_U32(ctx, 31, 0x159614u);
    ctx->pc = 0x159610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15960Cu;
            // 0x159610: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159614u; }
        if (ctx->pc != 0x159614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159614u; }
        if (ctx->pc != 0x159614u) { return; }
    }
    ctx->pc = 0x159614u;
label_159614:
    // 0x159614: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x159614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159618: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x159618u;
    {
        const bool branch_taken_0x159618 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x15961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159618u;
            // 0x15961c: 0x121043  sra         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159618) {
            ctx->pc = 0x159628u;
            goto label_159628;
        }
    }
    ctx->pc = 0x159620u;
    // 0x159620: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x159620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x159624: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x159624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_159628:
    // 0x159628: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x159628u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15962c: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x15962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x159630: 0x8fb4008c  lw          $s4, 0x8C($sp)
    ctx->pc = 0x159630u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x159634: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x159634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159638: 0x44940800  mtc1        $s4, $f1
    ctx->pc = 0x159638u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15963c: 0x0  nop
    ctx->pc = 0x15963cu;
    // NOP
    // 0x159640: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x159644: 0xc0a248c  jal         func_289230
    ctx->pc = 0x159644u;
    SET_GPR_U32(ctx, 31, 0x15964Cu);
    ctx->pc = 0x159648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159644u;
            // 0x159648: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15964Cu; }
        if (ctx->pc != 0x15964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15964Cu; }
        if (ctx->pc != 0x15964Cu) { return; }
    }
    ctx->pc = 0x15964Cu;
label_15964c:
    // 0x15964c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15964cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159650: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159650u;
    {
        const bool branch_taken_0x159650 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x159654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159650u;
            // 0x159654: 0x111843  sra         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159650) {
            ctx->pc = 0x159660u;
            goto label_159660;
        }
    }
    ctx->pc = 0x159658u;
    // 0x159658: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x159658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15965c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x15965cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_159660:
    // 0x159660: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x159660u;
    {
        const bool branch_taken_0x159660 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x159664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159660u;
            // 0x159664: 0xa32823  subu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159660) {
            ctx->pc = 0x15966Cu;
            goto label_15966c;
        }
    }
    ctx->pc = 0x159668u;
    // 0x159668: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x159668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15966c:
    // 0x15966c: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15966Cu;
    {
        const bool branch_taken_0x15966c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x159670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15966Cu;
            // 0x159670: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15966c) {
            ctx->pc = 0x159678u;
            goto label_159678;
        }
    }
    ctx->pc = 0x159674u;
    // 0x159674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_159678:
    // 0x159678: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x159678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15967c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15967Cu;
    {
        const bool branch_taken_0x15967c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15967Cu;
            // 0x159680: 0xb11821  addu        $v1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15967c) {
            ctx->pc = 0x159688u;
            goto label_159688;
        }
    }
    ctx->pc = 0x159684u;
    // 0x159684: 0x2b29823  subu        $s3, $s5, $s2
    ctx->pc = 0x159684u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_159688:
    // 0x159688: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x159688u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15968c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x15968Cu;
    {
        const bool branch_taken_0x15968c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15968c) {
            ctx->pc = 0x159698u;
            goto label_159698;
        }
    }
    ctx->pc = 0x159694u;
    // 0x159694: 0x2912823  subu        $a1, $s4, $s1
    ctx->pc = 0x159694u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_159698:
    // 0x159698: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x159698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15969c: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x15969cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1596a0: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x1596a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1596a4: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x1596a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    // 0x1596a8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1596a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1596ac: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x1596acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x1596b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1596b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1596b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1596b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1596b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1596b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1596bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1596bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1596c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1596c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1596c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1596c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1596c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1596c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1596cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1596ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1596d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1596D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1596D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1596D0u;
            // 0x1596d4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1596D8u;
}
