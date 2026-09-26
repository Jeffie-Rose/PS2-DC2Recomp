#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RefreshParamater__16CBattleCharaInfoFv
// Address: 0x19f520 - 0x19f884
void RefreshParamater__16CBattleCharaInfoFv_0x19f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RefreshParamater__16CBattleCharaInfoFv_0x19f520");
#endif

    switch (ctx->pc) {
        case 0x19f570u: goto label_19f570;
        case 0x19f578u: goto label_19f578;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f598u: goto label_19f598;
        case 0x19f5e4u: goto label_19f5e4;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f678u: goto label_19f678;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f77cu: goto label_19f77c;
        case 0x19f7a4u: goto label_19f7a4;
        case 0x19f7bcu: goto label_19f7bc;
        case 0x19f7d0u: goto label_19f7d0;
        case 0x19f7e0u: goto label_19f7e0;
        case 0x19f7f4u: goto label_19f7f4;
        case 0x19f804u: goto label_19f804;
        case 0x19f818u: goto label_19f818;
        case 0x19f850u: goto label_19f850;
        default: break;
    }

    ctx->pc = 0x19f520u;

    // 0x19f520: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19f524: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x19f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x19f528: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x19f528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x19f52c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x19f530: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x19f530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x19f534: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19f534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19f538: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19f538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x19f53c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19f53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x19f540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19f540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19f544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f548: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x19f548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x19f54c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x19f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19f550: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F550u;
    {
        const bool branch_taken_0x19f550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F550u;
            // 0x19f554: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f550) {
            ctx->pc = 0x19F560u;
            goto label_19f560;
        }
    }
    ctx->pc = 0x19F558u;
    // 0x19f558: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x19F558u;
    {
        const bool branch_taken_0x19f558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f558) {
            ctx->pc = 0x19F854u;
            goto label_19f854;
        }
    }
    ctx->pc = 0x19F560u;
label_19f560:
    // 0x19f560: 0x26840034  addiu       $a0, $s4, 0x34
    ctx->pc = 0x19f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x19f564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f568: 0xc049c86  jal         func_127218
    ctx->pc = 0x19F568u;
    SET_GPR_U32(ctx, 31, 0x19F570u);
    ctx->pc = 0x19F56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F568u;
            // 0x19f56c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F570u; }
        if (ctx->pc != 0x19F570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F570u; }
        if (ctx->pc != 0x19F570u) { return; }
    }
    ctx->pc = 0x19F570u;
label_19f570:
    // 0x19f570: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x19F570u;
    SET_GPR_U32(ctx, 31, 0x19F578u);
    ctx->pc = 0x19F574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F570u;
            // 0x19f574: 0x26900034  addiu       $s0, $s4, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F578u; }
        if (ctx->pc != 0x19F578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F578u; }
        if (ctx->pc != 0x19F578u) { return; }
    }
    ctx->pc = 0x19F578u;
label_19f578:
    // 0x19f578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19f578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f57c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F57Cu;
    {
        const bool branch_taken_0x19f57c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F57Cu;
            // 0x19f580: 0xa6800004  sh          $zero, 0x4($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f57c) {
            ctx->pc = 0x19F590u;
            goto label_19f590;
        }
    }
    ctx->pc = 0x19F584u;
    // 0x19f584: 0xc06724c  jal         func_19C930
    ctx->pc = 0x19F584u;
    SET_GPR_U32(ctx, 31, 0x19F58Cu);
    ctx->pc = 0x19F588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F584u;
            // 0x19f588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C930u;
    if (runtime->hasFunction(0x19C930u)) {
        auto targetFn = runtime->lookupFunction(0x19C930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F58Cu; }
        if (ctx->pc != 0x19F58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowPartyCharaID__16CUserDataManagerFv_0x19c930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F58Cu; }
        if (ctx->pc != 0x19F58Cu) { return; }
    }
    ctx->pc = 0x19F58Cu;
label_19f58c:
    // 0x19f58c: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x19f58cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
label_19f590:
    // 0x19f590: 0xc06421c  jal         func_190870
    ctx->pc = 0x19F590u;
    SET_GPR_U32(ctx, 31, 0x19F598u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F598u; }
        if (ctx->pc != 0x19F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F598u; }
        if (ctx->pc != 0x19F598u) { return; }
    }
    ctx->pc = 0x19F598u;
label_19f598:
    // 0x19f598: 0x86840006  lh          $a0, 0x6($s4)
    ctx->pc = 0x19f598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x19f59c: 0x8e970030  lw          $s7, 0x30($s4)
    ctx->pc = 0x19f59cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x19f5a0: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x19F5A0u;
    {
        const bool branch_taken_0x19f5a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5A0u;
            // 0x19f5a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5a0) {
            ctx->pc = 0x19F69Cu;
            goto label_19f69c;
        }
    }
    ctx->pc = 0x19F5A8u;
    // 0x19f5a8: 0xdf8280b0  ld          $v0, -0x7F50($gp)
    ctx->pc = 0x19f5a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294934704)));
    // 0x19f5ac: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x19f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x19f5b0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x19f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x19f5b4: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x19f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19f5b8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x19f5b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19f5bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x19f5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x19f5c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19F5C0u;
    {
        const bool branch_taken_0x19f5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5C0u;
            // 0x19f5c4: 0x3c023fc0  lui         $v0, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f5c0) {
            ctx->pc = 0x19F5D0u;
            goto label_19f5d0;
        }
    }
    ctx->pc = 0x19F5C8u;
    // 0x19f5c8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x19f5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x19f5cc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x19f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_19f5d0:
    // 0x19f5d0: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x19f5d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x19f5d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19f5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19f5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19f5dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5e0: 0xa682006c  sh          $v0, 0x6C($s4)
    ctx->pc = 0x19f5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 2));
label_19f5e4:
    // 0x19f5e4: 0xc6cc2f6c  lwc1        $f12, 0x2F6C($s6)
    ctx->pc = 0x19f5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19f5e8: 0x2f2a021  addu        $s4, $s7, $s2
    ctx->pc = 0x19f5e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
    // 0x19f5ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f5f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x19f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19f5f4: 0xc0663d0  jal         func_198F40
    ctx->pc = 0x19F5F4u;
    SET_GPR_U32(ctx, 31, 0x19F5FCu);
    ctx->pc = 0x19F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F5F4u;
            // 0x19f5f8: 0x26950010  addiu       $s5, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198F40u;
    if (runtime->hasFunction(0x198F40u)) {
        auto targetFn = runtime->lookupFunction(0x198F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5FCu; }
        if (ctx->pc != 0x19F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStatusParam__13CGameDataUsedFPsf_0x198f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F5FCu; }
        if (ctx->pc != 0x19F5FCu) { return; }
    }
    ctx->pc = 0x19F5FCu;
label_19f5fc:
    // 0x19f5fc: 0x87a300a0  lh          $v1, 0xA0($sp)
    ctx->pc = 0x19f5fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19f600: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x19f604: 0xc44000c0  lwc1        $f0, 0xC0($v0)
    ctx->pc = 0x19f604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f608: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19f608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f60c: 0x0  nop
    ctx->pc = 0x19f60cu;
    // NOP
    // 0x19f610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19f610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19f614: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19F614u;
    SET_GPR_U32(ctx, 31, 0x19F61Cu);
    ctx->pc = 0x19F618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F614u;
            // 0x19f618: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F61Cu; }
        if (ctx->pc != 0x19F61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F61Cu; }
        if (ctx->pc != 0x19F61Cu) { return; }
    }
    ctx->pc = 0x19F61Cu;
label_19f61c:
    // 0x19f61c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19f61cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19f620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f624: 0x87a200a2  lh          $v0, 0xA2($sp)
    ctx->pc = 0x19f624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 162)));
    // 0x19f628: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x19f628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f62c: 0x87a200a4  lh          $v0, 0xA4($sp)
    ctx->pc = 0x19f62cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x19f630: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x19f630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f634: 0x87a200a6  lh          $v0, 0xA6($sp)
    ctx->pc = 0x19f634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x19f638: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x19f638u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f63c: 0x87a200a8  lh          $v0, 0xA8($sp)
    ctx->pc = 0x19f63cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x19f640: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x19f640u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f644: 0x87a200aa  lh          $v0, 0xAA($sp)
    ctx->pc = 0x19f644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x19f648: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x19f648u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f64c: 0x87a200ac  lh          $v0, 0xAC($sp)
    ctx->pc = 0x19f64cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x19f650: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x19f650u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f654: 0x87a200ae  lh          $v0, 0xAE($sp)
    ctx->pc = 0x19f654u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x19f658: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x19f658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f65c: 0x87a200b0  lh          $v0, 0xB0($sp)
    ctx->pc = 0x19f65cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19f660: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x19f660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f664: 0x87a200b2  lh          $v0, 0xB2($sp)
    ctx->pc = 0x19f664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 178)));
    // 0x19f668: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x19f668u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f66c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x19f670: 0xc065c80  jal         func_197200
    ctx->pc = 0x19F670u;
    SET_GPR_U32(ctx, 31, 0x19F678u);
    ctx->pc = 0x19F674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F670u;
            // 0x19f674: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197200u;
    if (runtime->hasFunction(0x197200u)) {
        auto targetFn = runtime->lookupFunction(0x197200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F678u; }
        if (ctx->pc != 0x19F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPalletColor__13CGameDataUsedFv_0x197200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F678u; }
        if (ctx->pc != 0x19F678u) { return; }
    }
    ctx->pc = 0x19F678u;
label_19f678:
    // 0x19f678: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19f678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19f67c: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x19f67cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f680: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x19f680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f684: 0x2652006c  addiu       $s2, $s2, 0x6C
    ctx->pc = 0x19f684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
    // 0x19f688: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x19f688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x19f68c: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
    ctx->pc = 0x19F68Cu;
    {
        const bool branch_taken_0x19f68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F68Cu;
            // 0x19f690: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f68c) {
            ctx->pc = 0x19F5E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19f5e4;
        }
    }
    ctx->pc = 0x19F694u;
    // 0x19f694: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x19F694u;
    {
        const bool branch_taken_0x19f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f694) {
            ctx->pc = 0x19F83Cu;
            goto label_19f83c;
        }
    }
    ctx->pc = 0x19F69Cu;
label_19f69c:
    // 0x19f69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f6a0: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x19F6A0u;
    {
        const bool branch_taken_0x19f6a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19F6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6A0u;
            // 0x19f6a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6a0) {
            ctx->pc = 0x19F75Cu;
            goto label_19f75c;
        }
    }
    ctx->pc = 0x19F6A8u;
    // 0x19f6a8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x19f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19f6ac: 0xc065c00  jal         func_197000
    ctx->pc = 0x19F6ACu;
    SET_GPR_U32(ctx, 31, 0x19F6B4u);
    ctx->pc = 0x19F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6ACu;
            // 0x19f6b0: 0x27a500cc  addiu       $a1, $sp, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197000u;
    if (runtime->hasFunction(0x197000u)) {
        auto targetFn = runtime->lookupFunction(0x197000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6B4u; }
        if (ctx->pc != 0x19F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowRoboUseCapacity__FP9ROBO_DATAPi_0x197000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6B4u; }
        if (ctx->pc != 0x19F6B4u) { return; }
    }
    ctx->pc = 0x19F6B4u;
label_19f6b4:
    // 0x19f6b4: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19f6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19f6b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19f6b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19f6bc: 0x3c023bc4  lui         $v0, 0x3BC4
    ctx->pc = 0x19f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15300 << 16));
    // 0x19f6c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19f6c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19f6c4: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x19f6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x19f6c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f6c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f6cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x19f6ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x19f6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f6d4: 0x0  nop
    ctx->pc = 0x19f6d4u;
    // NOP
    // 0x19f6d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x19f6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19f6dc: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x19f6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x19f6e0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x19f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19f6e4: 0xc066a18  jal         func_19A860
    ctx->pc = 0x19F6E4u;
    SET_GPR_U32(ctx, 31, 0x19F6ECu);
    ctx->pc = 0x19F6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F6E4u;
            // 0x19f6e8: 0x26f10010  addiu       $s1, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A860u;
    if (runtime->hasFunction(0x19A860u)) {
        auto targetFn = runtime->lookupFunction(0x19A860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6ECu; }
        if (ctx->pc != 0x19F6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__9ROBO_DATAFv_0x19a860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F6ECu; }
        if (ctx->pc != 0x19F6ECu) { return; }
    }
    ctx->pc = 0x19F6ECu;
label_19f6ec:
    // 0x19f6ec: 0xa682006c  sh          $v0, 0x6C($s4)
    ctx->pc = 0x19f6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f6f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19f6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19f6f4:
    // 0x19f6f4: 0x86240010  lh          $a0, 0x10($s1)
    ctx->pc = 0x19f6f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19f6f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x19f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x19f6fc: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x19f6fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19f700: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x19f700u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f704: 0x86240012  lh          $a0, 0x12($s1)
    ctx->pc = 0x19f704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x19f708: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x19f708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f70c: 0x86240014  lh          $a0, 0x14($s1)
    ctx->pc = 0x19f70cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19f710: 0xa6040004  sh          $a0, 0x4($s0)
    ctx->pc = 0x19f710u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f714: 0x86240016  lh          $a0, 0x16($s1)
    ctx->pc = 0x19f714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x19f718: 0xa6040006  sh          $a0, 0x6($s0)
    ctx->pc = 0x19f718u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f71c: 0x86240018  lh          $a0, 0x18($s1)
    ctx->pc = 0x19f71cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x19f720: 0xa6040008  sh          $a0, 0x8($s0)
    ctx->pc = 0x19f720u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f724: 0x8624001a  lh          $a0, 0x1A($s1)
    ctx->pc = 0x19f724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x19f728: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x19f728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f72c: 0x8624001c  lh          $a0, 0x1C($s1)
    ctx->pc = 0x19f72cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x19f730: 0xa604000c  sh          $a0, 0xC($s0)
    ctx->pc = 0x19f730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f734: 0x8624001e  lh          $a0, 0x1E($s1)
    ctx->pc = 0x19f734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x19f738: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x19f738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f73c: 0x86240020  lh          $a0, 0x20($s1)
    ctx->pc = 0x19f73cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x19f740: 0xa6040010  sh          $a0, 0x10($s0)
    ctx->pc = 0x19f740u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f744: 0x86240022  lh          $a0, 0x22($s1)
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x19f748: 0xa6040012  sh          $a0, 0x12($s0)
    ctx->pc = 0x19f748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f74c: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x19F74Cu;
    {
        const bool branch_taken_0x19f74c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F74Cu;
            // 0x19f750: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f74c) {
            ctx->pc = 0x19F6F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19f6f4;
        }
    }
    ctx->pc = 0x19F754u;
    // 0x19f754: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x19F754u;
    {
        const bool branch_taken_0x19f754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f754) {
            ctx->pc = 0x19F83Cu;
            goto label_19f83c;
        }
    }
    ctx->pc = 0x19F75Cu;
label_19f75c:
    // 0x19f75c: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x19F75Cu;
    {
        const bool branch_taken_0x19f75c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19f75c) {
            ctx->pc = 0x19F83Cu;
            goto label_19f83c;
        }
    }
    ctx->pc = 0x19F764u;
    // 0x19f764: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x19f764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x19f768: 0x26244eb0  addiu       $a0, $s1, 0x4EB0
    ctx->pc = 0x19f768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20144));
    // 0x19f76c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19f76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19f770: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x19f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19f774: 0xc066b4c  jal         func_19AD30
    ctx->pc = 0x19F774u;
    SET_GPR_U32(ctx, 31, 0x19F77Cu);
    ctx->pc = 0x19F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F774u;
            // 0x19f778: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AD30u;
    if (runtime->hasFunction(0x19AD30u)) {
        auto targetFn = runtime->lookupFunction(0x19AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F77Cu; }
        if (ctx->pc != 0x19F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsChange__11CMonsterBoxFi_0x19ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F77Cu; }
        if (ctx->pc != 0x19F77Cu) { return; }
    }
    ctx->pc = 0x19F77Cu;
label_19f77c:
    // 0x19f77c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F77Cu;
    {
        const bool branch_taken_0x19f77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F77Cu;
            // 0x19f780: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f77c) {
            ctx->pc = 0x19F794u;
            goto label_19f794;
        }
    }
    ctx->pc = 0x19F784u;
    // 0x19f784: 0x3c023b23  lui         $v0, 0x3B23
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15139 << 16));
    // 0x19f788: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19f788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19f78c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x19f78cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x19f790: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19f790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_19f794:
    // 0x19f794: 0x26244eb0  addiu       $a0, $s1, 0x4EB0
    ctx->pc = 0x19f794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20144));
    // 0x19f798: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19f798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19f79c: 0xc066b4c  jal         func_19AD30
    ctx->pc = 0x19F79Cu;
    SET_GPR_U32(ctx, 31, 0x19F7A4u);
    ctx->pc = 0x19F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F79Cu;
            // 0x19f7a0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AD30u;
    if (runtime->hasFunction(0x19AD30u)) {
        auto targetFn = runtime->lookupFunction(0x19AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7A4u; }
        if (ctx->pc != 0x19F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsChange__11CMonsterBoxFi_0x19ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7A4u; }
        if (ctx->pc != 0x19F7A4u) { return; }
    }
    ctx->pc = 0x19F7A4u;
label_19f7a4:
    // 0x19f7a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19F7A4u;
    {
        const bool branch_taken_0x19f7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7A4u;
            // 0x19f7a8: 0x3c023fa0  lui         $v0, 0x3FA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f7a4) {
            ctx->pc = 0x19F7B0u;
            goto label_19f7b0;
        }
    }
    ctx->pc = 0x19F7ACu;
    // 0x19f7ac: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x19f7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19f7b0:
    // 0x19f7b0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x19f7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19f7b4: 0xc066a38  jal         func_19A8E0
    ctx->pc = 0x19F7B4u;
    SET_GPR_U32(ctx, 31, 0x19F7BCu);
    ctx->pc = 0x19F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7B4u;
            // 0x19f7b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E0u;
    if (runtime->hasFunction(0x19A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x19A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7BCu; }
        if (ctx->pc != 0x19F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackVol__16MOS_CHANGE_PARAMFi_0x19a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7BCu; }
        if (ctx->pc != 0x19F7BCu) { return; }
    }
    ctx->pc = 0x19F7BCu;
label_19f7bc:
    // 0x19f7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f7c0: 0x0  nop
    ctx->pc = 0x19f7c0u;
    // NOP
    // 0x19f7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f7c8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19F7C8u;
    SET_GPR_U32(ctx, 31, 0x19F7D0u);
    ctx->pc = 0x19F7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7C8u;
            // 0x19f7cc: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7D0u; }
        if (ctx->pc != 0x19F7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7D0u; }
        if (ctx->pc != 0x19F7D0u) { return; }
    }
    ctx->pc = 0x19F7D0u;
label_19f7d0:
    // 0x19f7d0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x19f7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f7d4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x19f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19f7d8: 0xc066a38  jal         func_19A8E0
    ctx->pc = 0x19F7D8u;
    SET_GPR_U32(ctx, 31, 0x19F7E0u);
    ctx->pc = 0x19F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7D8u;
            // 0x19f7dc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E0u;
    if (runtime->hasFunction(0x19A8E0u)) {
        auto targetFn = runtime->lookupFunction(0x19A8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E0u; }
        if (ctx->pc != 0x19F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAttackVol__16MOS_CHANGE_PARAMFi_0x19a8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E0u; }
        if (ctx->pc != 0x19F7E0u) { return; }
    }
    ctx->pc = 0x19F7E0u;
label_19f7e0:
    // 0x19f7e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f7e4: 0x0  nop
    ctx->pc = 0x19f7e4u;
    // NOP
    // 0x19f7e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f7ec: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19F7ECu;
    SET_GPR_U32(ctx, 31, 0x19F7F4u);
    ctx->pc = 0x19F7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7ECu;
            // 0x19f7f0: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7F4u; }
        if (ctx->pc != 0x19F7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7F4u; }
        if (ctx->pc != 0x19F7F4u) { return; }
    }
    ctx->pc = 0x19F7F4u;
label_19f7f4:
    // 0x19f7f4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x19f7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f7f8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x19f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x19f7fc: 0xc066a60  jal         func_19A980
    ctx->pc = 0x19F7FCu;
    SET_GPR_U32(ctx, 31, 0x19F804u);
    ctx->pc = 0x19F800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7FCu;
            // 0x19f800: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A980u;
    if (runtime->hasFunction(0x19A980u)) {
        auto targetFn = runtime->lookupFunction(0x19A980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F804u; }
        if (ctx->pc != 0x19F804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefenceVol__16MOS_CHANGE_PARAMFi_0x19a980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F804u; }
        if (ctx->pc != 0x19F804u) { return; }
    }
    ctx->pc = 0x19F804u;
label_19f804:
    // 0x19f804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f808: 0x0  nop
    ctx->pc = 0x19f808u;
    // NOP
    // 0x19f80c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f80cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f810: 0xc0a248c  jal         func_289230
    ctx->pc = 0x19F810u;
    SET_GPR_U32(ctx, 31, 0x19F818u);
    ctx->pc = 0x19F814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F810u;
            // 0x19f814: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F818u; }
        if (ctx->pc != 0x19F818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F818u; }
        if (ctx->pc != 0x19F818u) { return; }
    }
    ctx->pc = 0x19F818u;
label_19f818:
    // 0x19f818: 0xa682006c  sh          $v0, 0x6C($s4)
    ctx->pc = 0x19f818u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x19f81c: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x19f81cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f820: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x19f820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f824: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x19f824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f828: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x19f828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f82c: 0xa600000c  sh          $zero, 0xC($s0)
    ctx->pc = 0x19f82cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f830: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x19f830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f834: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x19f834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x19f838: 0xa6000012  sh          $zero, 0x12($s0)
    ctx->pc = 0x19f838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 0));
label_19f83c:
    // 0x19f83c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F83Cu;
    {
        const bool branch_taken_0x19f83c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f83c) {
            ctx->pc = 0x19F854u;
            goto label_19f854;
        }
    }
    ctx->pc = 0x19F844u;
    // 0x19f844: 0xc6cc2f6c  lwc1        $f12, 0x2F6C($s6)
    ctx->pc = 0x19f844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19f848: 0xc05831c  jal         func_160C70
    ctx->pc = 0x19F848u;
    SET_GPR_U32(ctx, 31, 0x19F850u);
    ctx->pc = 0x19F84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F848u;
            // 0x19f84c: 0xe78c8b80  swc1        $f12, -0x7480($gp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937472), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C70u;
    if (runtime->hasFunction(0x160C70u)) {
        auto targetFn = runtime->lookupFunction(0x160C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F850u; }
        if (ctx->pc != 0x19F850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeBand__Ff_0x160c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F850u; }
        if (ctx->pc != 0x19F850u) { return; }
    }
    ctx->pc = 0x19F850u;
label_19f850:
    // 0x19f850: 0xaf828b84  sw          $v0, -0x747C($gp)
    ctx->pc = 0x19f850u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937476), GPR_U32(ctx, 2));
label_19f854:
    // 0x19f854: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x19f854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19f858: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x19f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19f85c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x19f85cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19f860: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19f860u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19f864: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x19f864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f868: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19f868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f86c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x19f86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f870: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19f870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f874: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19f874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f878: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f87c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F87Cu;
            // 0x19f880: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F884u;
}
