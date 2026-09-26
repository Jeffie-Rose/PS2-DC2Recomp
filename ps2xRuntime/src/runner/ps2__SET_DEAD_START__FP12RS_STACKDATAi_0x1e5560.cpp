#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_DEAD_START__FP12RS_STACKDATAi
// Address: 0x1e5560 - 0x1e5af4
void ps2__SET_DEAD_START__FP12RS_STACKDATAi_0x1e5560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_DEAD_START__FP12RS_STACKDATAi_0x1e5560");
#endif

    switch (ctx->pc) {
        case 0x1e55c4u: goto label_1e55c4;
        case 0x1e55d8u: goto label_1e55d8;
        case 0x1e55e4u: goto label_1e55e4;
        case 0x1e5658u: goto label_1e5658;
        case 0x1e5678u: goto label_1e5678;
        case 0x1e56acu: goto label_1e56ac;
        case 0x1e56e4u: goto label_1e56e4;
        case 0x1e56fcu: goto label_1e56fc;
        case 0x1e5730u: goto label_1e5730;
        case 0x1e5738u: goto label_1e5738;
        case 0x1e5740u: goto label_1e5740;
        case 0x1e575cu: goto label_1e575c;
        case 0x1e577cu: goto label_1e577c;
        case 0x1e579cu: goto label_1e579c;
        case 0x1e57c0u: goto label_1e57c0;
        case 0x1e57f0u: goto label_1e57f0;
        case 0x1e5834u: goto label_1e5834;
        case 0x1e5864u: goto label_1e5864;
        case 0x1e587cu: goto label_1e587c;
        case 0x1e5898u: goto label_1e5898;
        case 0x1e58ccu: goto label_1e58cc;
        case 0x1e58e8u: goto label_1e58e8;
        case 0x1e5950u: goto label_1e5950;
        case 0x1e5968u: goto label_1e5968;
        case 0x1e5984u: goto label_1e5984;
        case 0x1e59b8u: goto label_1e59b8;
        case 0x1e59dcu: goto label_1e59dc;
        case 0x1e5a04u: goto label_1e5a04;
        case 0x1e5a38u: goto label_1e5a38;
        case 0x1e5a50u: goto label_1e5a50;
        case 0x1e5a6cu: goto label_1e5a6c;
        case 0x1e5aa0u: goto label_1e5aa0;
        case 0x1e5accu: goto label_1e5acc;
        default: break;
    }

    ctx->pc = 0x1e5560u;

    // 0x1e5560: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1e5560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1e5564: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e5564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e5568: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e5568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e556c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e556cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e5570: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e5570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e5574: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5578: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e5578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e557c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E557Cu;
    {
        const bool branch_taken_0x1e557c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E557Cu;
            // 0x1e5580: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e557c) {
            ctx->pc = 0x1E558Cu;
            goto label_1e558c;
        }
    }
    ctx->pc = 0x1E5584u;
    // 0x1e5584: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x1E5584u;
    {
        const bool branch_taken_0x1e5584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5584u;
            // 0x1e5588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5584) {
            ctx->pc = 0x1E5AD0u;
            goto label_1e5ad0;
        }
    }
    ctx->pc = 0x1E558Cu;
label_1e558c:
    // 0x1e558c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5590: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e5594: 0xac431330  sw          $v1, 0x1330($v0)
    ctx->pc = 0x1e5594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 3));
    // 0x1e5598: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e559c: 0xa4400686  sh          $zero, 0x686($v0)
    ctx->pc = 0x1e559cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1670), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e55a0: 0xa4400684  sh          $zero, 0x684($v0)
    ctx->pc = 0x1e55a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1668), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e55a4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e55a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e55a8: 0x8c82132c  lw          $v0, 0x132C($a0)
    ctx->pc = 0x1e55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4908)));
    // 0x1e55ac: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E55ACu;
    {
        const bool branch_taken_0x1e55ac = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E55B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55ACu;
            // 0x1e55b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55ac) {
            ctx->pc = 0x1E55BCu;
            goto label_1e55bc;
        }
    }
    ctx->pc = 0x1E55B4u;
    // 0x1e55b4: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x1E55B4u;
    {
        const bool branch_taken_0x1e55b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E55B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55B4u;
            // 0x1e55b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55b4) {
            ctx->pc = 0x1E5AD0u;
            goto label_1e5ad0;
        }
    }
    ctx->pc = 0x1E55BCu;
label_1e55bc:
    // 0x1e55bc: 0xc05d3d4  jal         func_174F50
    ctx->pc = 0x1E55BCu;
    SET_GPR_U32(ctx, 31, 0x1E55C4u);
    ctx->pc = 0x1E55C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55BCu;
            // 0x1e55c0: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E55C4u; }
        if (ctx->pc != 0x1E55C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E55C4u; }
        if (ctx->pc != 0x1E55C4u) { return; }
    }
    ctx->pc = 0x1E55C4u;
label_1e55c4:
    // 0x1e55c4: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e55c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e55c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e55cc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e55ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e55d0: 0xc0683a8  jal         func_1A0EA0
    ctx->pc = 0x1E55D0u;
    SET_GPR_U32(ctx, 31, 0x1E55D8u);
    ctx->pc = 0x1E55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55D0u;
            // 0x1e55d4: 0x8c70132c  lw          $s0, 0x132C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4908)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E55D8u; }
        if (ctx->pc != 0x1E55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E55D8u; }
        if (ctx->pc != 0x1E55D8u) { return; }
    }
    ctx->pc = 0x1E55D8u;
label_1e55d8:
    // 0x1e55d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e55d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e55dc: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1E55DCu;
    SET_GPR_U32(ctx, 31, 0x1E55E4u);
    ctx->pc = 0x1E55E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55DCu;
            // 0x1e55e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E55E4u; }
        if (ctx->pc != 0x1E55E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E55E4u; }
        if (ctx->pc != 0x1E55E4u) { return; }
    }
    ctx->pc = 0x1E55E4u;
label_1e55e4:
    // 0x1e55e4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e55e8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E55E8u;
    {
        const bool branch_taken_0x1e55e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E55ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E55E8u;
            // 0x1e55ec: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e55e8) {
            ctx->pc = 0x1E5600u;
            goto label_1e5600;
        }
    }
    ctx->pc = 0x1E55F0u;
    // 0x1e55f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e55f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e55f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e55f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e55f8: 0x0  nop
    ctx->pc = 0x1e55f8u;
    // NOP
    // 0x1e55fc: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e55fcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1e5600:
    // 0x1e5600: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5604: 0x8c431214  lw          $v1, 0x1214($v0)
    ctx->pc = 0x1e5604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    // 0x1e5608: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1e5608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1e560c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E560Cu;
    {
        const bool branch_taken_0x1e560c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E560Cu;
            // 0x1e5610: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e560c) {
            ctx->pc = 0x1E562Cu;
            goto label_1e562c;
        }
    }
    ctx->pc = 0x1E5614u;
    // 0x1e5614: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e5618: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e561c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e561cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5620: 0x0  nop
    ctx->pc = 0x1e5620u;
    // NOP
    // 0x1e5624: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1e5624u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e5628: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e5628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1e562c:
    // 0x1e562c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E562Cu;
    {
        const bool branch_taken_0x1e562c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E562Cu;
            // 0x1e5630: 0x3c023e99  lui         $v0, 0x3E99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e562c) {
            ctx->pc = 0x1E5644u;
            goto label_1e5644;
        }
    }
    ctx->pc = 0x1E5634u;
    // 0x1e5634: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e5638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e563c: 0x0  nop
    ctx->pc = 0x1e563cu;
    // NOP
    // 0x1e5640: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1e5640u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1e5644:
    // 0x1e5644: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1e5644u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5648: 0x0  nop
    ctx->pc = 0x1e5648u;
    // NOP
    // 0x1e564c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e564cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e5650: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E5650u;
    SET_GPR_U32(ctx, 31, 0x1E5658u);
    ctx->pc = 0x1E5654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5650u;
            // 0x1e5654: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5658u; }
        if (ctx->pc != 0x1E5658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5658u; }
        if (ctx->pc != 0x1E5658u) { return; }
    }
    ctx->pc = 0x1E5658u;
label_1e5658:
    // 0x1e5658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e5658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e565c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1e565cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1e5660: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1e5660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1e5664: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5664u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e5668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e566c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e566cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5670: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1E5670u;
    SET_GPR_U32(ctx, 31, 0x1E5678u);
    ctx->pc = 0x1E5674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5670u;
            // 0x1e5674: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5678u; }
        if (ctx->pc != 0x1E5678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5678u; }
        if (ctx->pc != 0x1E5678u) { return; }
    }
    ctx->pc = 0x1E5678u;
label_1e5678:
    // 0x1e5678: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e567c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1e567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5680: 0x2122023  subu        $a0, $s0, $s2
    ctx->pc = 0x1e5680u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1e5684: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1e5684u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e5688: 0x0  nop
    ctx->pc = 0x1e5688u;
    // NOP
    // 0x1e568c: 0x0  nop
    ctx->pc = 0x1e568cu;
    // NOP
    // 0x1e5690: 0x1810  mfhi        $v1
    ctx->pc = 0x1e5690u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e5694: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1e5694u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5698: 0x1a400013  blez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5698u;
    {
        const bool branch_taken_0x1e5698 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1e5698) {
            ctx->pc = 0x1E56E8u;
            goto label_1e56e8;
        }
    }
    ctx->pc = 0x1E56A0u;
    // 0x1e56a0: 0x27848de8  addiu       $a0, $gp, -0x7218
    ctx->pc = 0x1e56a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
    // 0x1e56a4: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x1E56A4u;
    SET_GPR_U32(ctx, 31, 0x1E56ACu);
    ctx->pc = 0x1E56A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56A4u;
            // 0x1e56a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56ACu; }
        if (ctx->pc != 0x1E56ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56ACu; }
        if (ctx->pc != 0x1E56ACu) { return; }
    }
    ctx->pc = 0x1E56ACu;
label_1e56ac:
    // 0x1e56ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e56acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56b0: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1E56B0u;
    {
        const bool branch_taken_0x1e56b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e56b0) {
            ctx->pc = 0x1E56E8u;
            goto label_1e56e8;
        }
    }
    ctx->pc = 0x1E56B8u;
    // 0x1e56b8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e56bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1e56bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56c0: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1e56c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1e56c4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e56c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e56c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e56cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e56ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e56d0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1e56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1e56d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1e56d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e56d8: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1e56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1e56dc: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1E56DCu;
    SET_GPR_U32(ctx, 31, 0x1E56E4u);
    ctx->pc = 0x1E56E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56DCu;
            // 0x1e56e0: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56E4u; }
        if (ctx->pc != 0x1E56E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56E4u; }
        if (ctx->pc != 0x1E56E4u) { return; }
    }
    ctx->pc = 0x1E56E4u;
label_1e56e4:
    // 0x1e56e4: 0xa672006c  sh          $s2, 0x6C($s3)
    ctx->pc = 0x1e56e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 108), (uint16_t)GPR_U32(ctx, 18));
label_1e56e8:
    // 0x1e56e8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e56ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e56ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e56f0: 0x24848040  addiu       $a0, $a0, -0x7FC0
    ctx->pc = 0x1e56f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    // 0x1e56f4: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E56F4u;
    SET_GPR_U32(ctx, 31, 0x1E56FCu);
    ctx->pc = 0x1E56F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E56F4u;
            // 0x1e56f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56FCu; }
        if (ctx->pc != 0x1E56FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E56FCu; }
        if (ctx->pc != 0x1E56FCu) { return; }
    }
    ctx->pc = 0x1E56FCu;
label_1e56fc:
    // 0x1e56fc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x1e5700: 0x2123023  subu        $a2, $s0, $s2
    ctx->pc = 0x1e5700u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1e5704: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1e5704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x1e5708: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1e5708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1e570c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x1e570cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e5710: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1e5710u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1e5714: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1e5714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5718: 0x24848058  addiu       $a0, $a0, -0x7FA8
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934616));
    // 0x1e571c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e571cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e5720: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e5720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1e5724: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1e5724u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5728: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1E5728u;
    SET_GPR_U32(ctx, 31, 0x1E5730u);
    ctx->pc = 0x1E572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5728u;
            // 0x1e572c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5730u; }
        if (ctx->pc != 0x1E5730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5730u; }
        if (ctx->pc != 0x1E5730u) { return; }
    }
    ctx->pc = 0x1E5730u;
label_1e5730:
    // 0x1e5730: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5734: 0x27848de8  addiu       $a0, $gp, -0x7218
    ctx->pc = 0x1e5734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
label_1e5738:
    // 0x1e5738: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x1E5738u;
    SET_GPR_U32(ctx, 31, 0x1E5740u);
    ctx->pc = 0x1E573Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5738u;
            // 0x1e573c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5740u; }
        if (ctx->pc != 0x1E5740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5740u; }
        if (ctx->pc != 0x1E5740u) { return; }
    }
    ctx->pc = 0x1E5740u;
label_1e5740:
    // 0x1e5740: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5744: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E5744u;
    {
        const bool branch_taken_0x1e5744 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5744u;
            // 0x1e5748: 0x3c023f19  lui         $v0, 0x3F19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5744) {
            ctx->pc = 0x1E5838u;
            goto label_1e5838;
        }
    }
    ctx->pc = 0x1E574Cu;
    // 0x1e574c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e574cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e5750: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5754: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5754u;
    SET_GPR_U32(ctx, 31, 0x1E575Cu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E575Cu; }
        if (ctx->pc != 0x1E575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E575Cu; }
        if (ctx->pc != 0x1E575Cu) { return; }
    }
    ctx->pc = 0x1E575Cu;
label_1e575c:
    // 0x1e575c: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x1e575cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
    // 0x1e5760: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e5764: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1e5764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1e5768: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e576c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e576cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5770: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5774: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5774u;
    SET_GPR_U32(ctx, 31, 0x1E577Cu);
    ctx->pc = 0x1E5778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5774u;
            // 0x1e5778: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E577Cu; }
        if (ctx->pc != 0x1E577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E577Cu; }
        if (ctx->pc != 0x1E577Cu) { return; }
    }
    ctx->pc = 0x1E577Cu;
label_1e577c:
    // 0x1e577c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e577cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1e5780: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
    // 0x1e5784: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5784u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5788: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e5788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e578c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e578cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5790: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e5790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e5794: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5794u;
    SET_GPR_U32(ctx, 31, 0x1E579Cu);
    ctx->pc = 0x1E5798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5794u;
            // 0x1e5798: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E579Cu; }
        if (ctx->pc != 0x1E579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E579Cu; }
        if (ctx->pc != 0x1E579Cu) { return; }
    }
    ctx->pc = 0x1E579Cu;
label_1e579c:
    // 0x1e579c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1e579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1e57a0: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x1e57a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e57a4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1e57a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1e57a8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e57a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1e57ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e57acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e57b0: 0x0  nop
    ctx->pc = 0x1e57b0u;
    // NOP
    // 0x1e57b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e57b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e57b8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E57B8u;
    SET_GPR_U32(ctx, 31, 0x1E57C0u);
    ctx->pc = 0x1E57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57B8u;
            // 0x1e57bc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E57C0u; }
        if (ctx->pc != 0x1E57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E57C0u; }
        if (ctx->pc != 0x1E57C0u) { return; }
    }
    ctx->pc = 0x1E57C0u;
label_1e57c0:
    // 0x1e57c0: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1e57c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e57c4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E57C4u;
    {
        const bool branch_taken_0x1e57c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e57c4) {
            ctx->pc = 0x1E57E4u;
            goto label_1e57e4;
        }
    }
    ctx->pc = 0x1E57CCu;
    // 0x1e57cc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x1e57ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e57d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e57d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e57d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e57d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e57d8: 0x0  nop
    ctx->pc = 0x1e57d8u;
    // NOP
    // 0x1e57dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e57dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e57e0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1e57e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1e57e4:
    // 0x1e57e4: 0x0  nop
    ctx->pc = 0x1e57e4u;
    // NOP
    // 0x1e57e8: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E57E8u;
    SET_GPR_U32(ctx, 31, 0x1E57F0u);
    ctx->pc = 0x1E57ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E57E8u;
            // 0x1e57ec: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E57F0u; }
        if (ctx->pc != 0x1E57F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E57F0u; }
        if (ctx->pc != 0x1E57F0u) { return; }
    }
    ctx->pc = 0x1E57F0u;
label_1e57f0:
    // 0x1e57f0: 0x28410032  slti        $at, $v0, 0x32
    ctx->pc = 0x1e57f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1e57f4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E57F4u;
    {
        const bool branch_taken_0x1e57f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e57f4) {
            ctx->pc = 0x1E5814u;
            goto label_1e5814;
        }
    }
    ctx->pc = 0x1E57FCu;
    // 0x1e57fc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1e57fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5800: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e5800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1e5804: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5808: 0x0  nop
    ctx->pc = 0x1e5808u;
    // NOP
    // 0x1e580c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e580cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e5810: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1e5810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1e5814:
    // 0x1e5814: 0x0  nop
    ctx->pc = 0x1e5814u;
    // NOP
    // 0x1e5818: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e581c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1e581cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1e5820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5824: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e5824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5828: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e5828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e582c: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1E582Cu;
    SET_GPR_U32(ctx, 31, 0x1E5834u);
    ctx->pc = 0x1E5830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E582Cu;
            // 0x1e5830: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5834u; }
        if (ctx->pc != 0x1E5834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5834u; }
        if (ctx->pc != 0x1E5834u) { return; }
    }
    ctx->pc = 0x1E5834u;
label_1e5834:
    // 0x1e5834: 0xa654006c  sh          $s4, 0x6C($s2)
    ctx->pc = 0x1e5834u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 20));
label_1e5838:
    // 0x1e5838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e583c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1e583cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e5840: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1E5840u;
    {
        const bool branch_taken_0x1e5840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5840u;
            // 0x1e5844: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5840) {
            ctx->pc = 0x1E5738u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e5738;
        }
    }
    ctx->pc = 0x1E5848u;
    // 0x1e5848: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e584c: 0x80421358  lb          $v0, 0x1358($v0)
    ctx->pc = 0x1e584cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4952)));
    // 0x1e5850: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E5850u;
    {
        const bool branch_taken_0x1e5850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5850u;
            // 0x1e5854: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5850) {
            ctx->pc = 0x1E58E0u;
            goto label_1e58e0;
        }
    }
    ctx->pc = 0x1E5858u;
    // 0x1e5858: 0x27848de8  addiu       $a0, $gp, -0x7218
    ctx->pc = 0x1e5858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
    // 0x1e585c: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x1E585Cu;
    SET_GPR_U32(ctx, 31, 0x1E5864u);
    ctx->pc = 0x1E5860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E585Cu;
            // 0x1e5860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5864u; }
        if (ctx->pc != 0x1E5864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5864u; }
        if (ctx->pc != 0x1E5864u) { return; }
    }
    ctx->pc = 0x1E5864u;
label_1e5864:
    // 0x1e5864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5868: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5868u;
    {
        const bool branch_taken_0x1e5868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5868u;
            // 0x1e586c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5868) {
            ctx->pc = 0x1E58DCu;
            goto label_1e58dc;
        }
    }
    ctx->pc = 0x1E5870u;
    // 0x1e5870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5874: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5874u;
    SET_GPR_U32(ctx, 31, 0x1E587Cu);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E587Cu; }
        if (ctx->pc != 0x1E587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E587Cu; }
        if (ctx->pc != 0x1E587Cu) { return; }
    }
    ctx->pc = 0x1E587Cu;
label_1e587c:
    // 0x1e587c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1e587cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1e5880: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e5880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5884: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e588c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e588cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e5890: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5890u;
    SET_GPR_U32(ctx, 31, 0x1E5898u);
    ctx->pc = 0x1E5894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5890u;
            // 0x1e5894: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5898u; }
        if (ctx->pc != 0x1E5898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5898u; }
        if (ctx->pc != 0x1E5898u) { return; }
    }
    ctx->pc = 0x1E5898u;
label_1e5898:
    // 0x1e5898: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1e5898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1e589c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e58a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e58a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e58a4: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1e58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1e58a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e58ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e58acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e58b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e58b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e58b4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1e58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1e58b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e58b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e58bc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e58bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e58c0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1e58c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e58c4: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1E58C4u;
    SET_GPR_U32(ctx, 31, 0x1E58CCu);
    ctx->pc = 0x1E58C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58C4u;
            // 0x1e58c8: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58CCu; }
        if (ctx->pc != 0x1E58CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58CCu; }
        if (ctx->pc != 0x1E58CCu) { return; }
    }
    ctx->pc = 0x1E58CCu;
label_1e58cc:
    // 0x1e58cc: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e58d0: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1e58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x1e58d4: 0x80420054  lb          $v0, 0x54($v0)
    ctx->pc = 0x1e58d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1e58d8: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x1e58d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
label_1e58dc:
    // 0x1e58dc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e58e0:
    // 0x1e58e0: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E58E0u;
    SET_GPR_U32(ctx, 31, 0x1E58E8u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58E8u; }
        if (ctx->pc != 0x1E58E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E58E8u; }
        if (ctx->pc != 0x1E58E8u) { return; }
    }
    ctx->pc = 0x1E58E8u;
label_1e58e8:
    // 0x1e58e8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e58ec: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1e58ecu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e58f0: 0x0  nop
    ctx->pc = 0x1e58f0u;
    // NOP
    // 0x1e58f4: 0x0  nop
    ctx->pc = 0x1e58f4u;
    // NOP
    // 0x1e58f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1e58f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1e58fc: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1E58FCu;
    {
        const bool branch_taken_0x1e58fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E58FCu;
            // 0x1e5900: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e58fc) {
            ctx->pc = 0x1E59D4u;
            goto label_1e59d4;
        }
    }
    ctx->pc = 0x1E5904u;
    // 0x1e5904: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e5904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5908: 0x8c641150  lw          $a0, 0x1150($v1)
    ctx->pc = 0x1e5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4432)));
    // 0x1e590c: 0x848500a0  lh          $a1, 0xA0($a0)
    ctx->pc = 0x1e590cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1e5910: 0x1ca00004  bgtz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5910u;
    {
        const bool branch_taken_0x1e5910 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1E5914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5910u;
            // 0x1e5914: 0x28410014  slti        $at, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5910) {
            ctx->pc = 0x1E5924u;
            goto label_1e5924;
        }
    }
    ctx->pc = 0x1E5918u;
    // 0x1e5918: 0x848300a2  lh          $v1, 0xA2($a0)
    ctx->pc = 0x1e5918u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x1e591c: 0x1860002c  blez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E591Cu;
    {
        const bool branch_taken_0x1e591c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1e591c) {
            ctx->pc = 0x1E59D0u;
            goto label_1e59d0;
        }
    }
    ctx->pc = 0x1E5924u;
label_1e5924:
    // 0x1e5924: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5924u;
    {
        const bool branch_taken_0x1e5924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5924u;
            // 0x1e5928: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5924) {
            ctx->pc = 0x1E593Cu;
            goto label_1e593c;
        }
    }
    ctx->pc = 0x1E592Cu;
    // 0x1e592c: 0x848200a2  lh          $v0, 0xA2($a0)
    ctx->pc = 0x1e592cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 162)));
    // 0x1e5930: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5930u;
    {
        const bool branch_taken_0x1e5930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e5930) {
            ctx->pc = 0x1E593Cu;
            goto label_1e593c;
        }
    }
    ctx->pc = 0x1E5938u;
    // 0x1e5938: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e593c:
    // 0x1e593c: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E593Cu;
    {
        const bool branch_taken_0x1e593c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1E5940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E593Cu;
            // 0x1e5940: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e593c) {
            ctx->pc = 0x1E5948u;
            goto label_1e5948;
        }
    }
    ctx->pc = 0x1E5944u;
    // 0x1e5944: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5948:
    // 0x1e5948: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x1E5948u;
    SET_GPR_U32(ctx, 31, 0x1E5950u);
    ctx->pc = 0x1E594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5948u;
            // 0x1e594c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5950u; }
        if (ctx->pc != 0x1E5950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5950u; }
        if (ctx->pc != 0x1E5950u) { return; }
    }
    ctx->pc = 0x1E5950u;
label_1e5950:
    // 0x1e5950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1e5950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5954: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E5954u;
    {
        const bool branch_taken_0x1e5954 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5954u;
            // 0x1e5958: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5954) {
            ctx->pc = 0x1E59D0u;
            goto label_1e59d0;
        }
    }
    ctx->pc = 0x1E595Cu;
    // 0x1e595c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e595cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5960: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5960u;
    SET_GPR_U32(ctx, 31, 0x1E5968u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5968u; }
        if (ctx->pc != 0x1E5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5968u; }
        if (ctx->pc != 0x1E5968u) { return; }
    }
    ctx->pc = 0x1E5968u;
label_1e5968:
    // 0x1e5968: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1e5968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1e596c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e596cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5974: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5978: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e5978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e597c: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E597Cu;
    SET_GPR_U32(ctx, 31, 0x1E5984u);
    ctx->pc = 0x1E5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E597Cu;
            // 0x1e5980: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5984u; }
        if (ctx->pc != 0x1E5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5984u; }
        if (ctx->pc != 0x1E5984u) { return; }
    }
    ctx->pc = 0x1E5984u;
label_1e5984:
    // 0x1e5984: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1e5984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1e5988: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e5988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1e598c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e598cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5990: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1e5990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1e5994: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e5998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e599c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e599cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e59a0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1e59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1e59a4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e59a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e59a8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e59a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e59ac: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1e59acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e59b0: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1E59B0u;
    SET_GPR_U32(ctx, 31, 0x1E59B8u);
    ctx->pc = 0x1E59B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59B0u;
            // 0x1e59b4: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59B8u; }
        if (ctx->pc != 0x1E59B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59B8u; }
        if (ctx->pc != 0x1E59B8u) { return; }
    }
    ctx->pc = 0x1E59B8u;
label_1e59b8:
    // 0x1e59b8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e59b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e59bc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1e59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1e59c0: 0x8c631150  lw          $v1, 0x1150($v1)
    ctx->pc = 0x1e59c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4432)));
    // 0x1e59c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e59c8: 0x844200a0  lh          $v0, 0xA0($v0)
    ctx->pc = 0x1e59c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1e59cc: 0xa642006c  sh          $v0, 0x6C($s2)
    ctx->pc = 0x1e59ccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 108), (uint16_t)GPR_U32(ctx, 2));
label_1e59d0:
    // 0x1e59d0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1e59d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e59d4:
    // 0x1e59d4: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1E59D4u;
    SET_GPR_U32(ctx, 31, 0x1E59DCu);
    ctx->pc = 0x1E59D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59D4u;
            // 0x1e59d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59DCu; }
        if (ctx->pc != 0x1E59DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E59DCu; }
        if (ctx->pc != 0x1E59DCu) { return; }
    }
    ctx->pc = 0x1E59DCu;
label_1e59dc:
    // 0x1e59dc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E59DCu;
    {
        const bool branch_taken_0x1e59dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E59E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59DCu;
            // 0x1e59e0: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59dc) {
            ctx->pc = 0x1E59F0u;
            goto label_1e59f0;
        }
    }
    ctx->pc = 0x1E59E4u;
    // 0x1e59e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E59E4u;
    {
        const bool branch_taken_0x1e59e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e59e4) {
            ctx->pc = 0x1E59F0u;
            goto label_1e59f0;
        }
    }
    ctx->pc = 0x1E59ECu;
    // 0x1e59ec: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1e59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_1e59f0:
    // 0x1e59f0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E59F0u;
    {
        const bool branch_taken_0x1e59f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E59F0u;
            // 0x1e59f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e59f0) {
            ctx->pc = 0x1E59FCu;
            goto label_1e59fc;
        }
    }
    ctx->pc = 0x1E59F8u;
    // 0x1e59f8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e59f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e59fc:
    // 0x1e59fc: 0xc067c94  jal         func_19F250
    ctx->pc = 0x1E59FCu;
    SET_GPR_U32(ctx, 31, 0x1E5A04u);
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A04u; }
        if (ctx->pc != 0x1E5A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A04u; }
        if (ctx->pc != 0x1E5A04u) { return; }
    }
    ctx->pc = 0x1E5A04u;
label_1e5a04:
    // 0x1e5a04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e5a08: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5A08u;
    {
        const bool branch_taken_0x1e5a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5a08) {
            ctx->pc = 0x1E5A14u;
            goto label_1e5a14;
        }
    }
    ctx->pc = 0x1E5A10u;
    // 0x1e5a10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1e5a10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5a14:
    // 0x1e5a14: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E5A14u;
    {
        const bool branch_taken_0x1e5a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5a14) {
            ctx->pc = 0x1E5AB0u;
            goto label_1e5ab0;
        }
    }
    ctx->pc = 0x1E5A1Cu;
    // 0x1e5a1c: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5a20: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x1e5a24: 0x844200a4  lh          $v0, 0xA4($v0)
    ctx->pc = 0x1e5a24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e5a28: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E5A28u;
    {
        const bool branch_taken_0x1e5a28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E5A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A28u;
            // 0x1e5a2c: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a28) {
            ctx->pc = 0x1E5AB0u;
            goto label_1e5ab0;
        }
    }
    ctx->pc = 0x1E5A30u;
    // 0x1e5a30: 0xc06e574  jal         func_1B95D0
    ctx->pc = 0x1E5A30u;
    SET_GPR_U32(ctx, 31, 0x1E5A38u);
    ctx->pc = 0x1E5A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A30u;
            // 0x1e5a34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A38u; }
        if (ctx->pc != 0x1E5A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A38u; }
        if (ctx->pc != 0x1E5A38u) { return; }
    }
    ctx->pc = 0x1E5A38u;
label_1e5a38:
    // 0x1e5a38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5a38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a3c: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E5A3Cu;
    {
        const bool branch_taken_0x1e5a3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A3Cu;
            // 0x1e5a40: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5a3c) {
            ctx->pc = 0x1E5AB0u;
            goto label_1e5ab0;
        }
    }
    ctx->pc = 0x1E5A44u;
    // 0x1e5a44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5a48: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5A48u;
    SET_GPR_U32(ctx, 31, 0x1E5A50u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A50u; }
        if (ctx->pc != 0x1E5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A50u; }
        if (ctx->pc != 0x1E5A50u) { return; }
    }
    ctx->pc = 0x1E5A50u;
label_1e5a50:
    // 0x1e5a50: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5a54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5a58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5a58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5a5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e5a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e5a64: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1E5A64u;
    SET_GPR_U32(ctx, 31, 0x1E5A6Cu);
    ctx->pc = 0x1E5A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A64u;
            // 0x1e5a68: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A6Cu; }
        if (ctx->pc != 0x1E5A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5A6Cu; }
        if (ctx->pc != 0x1E5A6Cu) { return; }
    }
    ctx->pc = 0x1E5A6Cu;
label_1e5a6c:
    // 0x1e5a6c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e5a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e5a70: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e5a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e5a74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e5a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5a78: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1e5a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1e5a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5a84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e5a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e5a88: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1e5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1e5a8c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1e5a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5a90: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1e5a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5a94: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1e5a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e5a98: 0xc06e46c  jal         func_1B91B0
    ctx->pc = 0x1E5A98u;
    SET_GPR_U32(ctx, 31, 0x1E5AA0u);
    ctx->pc = 0x1E5A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5A98u;
            // 0x1e5a9c: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AA0u; }
        if (ctx->pc != 0x1E5AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AA0u; }
        if (ctx->pc != 0x1E5AA0u) { return; }
    }
    ctx->pc = 0x1E5AA0u;
label_1e5aa0:
    // 0x1e5aa0: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e5aa4: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x1e5aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x1e5aa8: 0x844200a4  lh          $v0, 0xA4($v0)
    ctx->pc = 0x1e5aa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e5aac: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x1e5aacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
label_1e5ab0:
    // 0x1e5ab0: 0x8f828e6c  lw          $v0, -0x7194($gp)
    ctx->pc = 0x1e5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938220)));
    // 0x1e5ab4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1e5ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1e5ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5abc: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1e5abcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1e5ac0: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x1e5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x1e5ac4: 0xc063818  jal         func_18E060
    ctx->pc = 0x1E5AC4u;
    SET_GPR_U32(ctx, 31, 0x1E5ACCu);
    ctx->pc = 0x1E5AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AC4u;
            // 0x1e5ac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5ACCu; }
        if (ctx->pc != 0x1E5ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5ACCu; }
        if (ctx->pc != 0x1E5ACCu) { return; }
    }
    ctx->pc = 0x1E5ACCu;
label_1e5acc:
    // 0x1e5acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ad0:
    // 0x1e5ad0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e5ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5ad4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e5ad8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e5ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5adc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e5adcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5ae0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e5ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5ae4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5ae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e5ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AECu;
            // 0x1e5af0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E5AF4u;
}
