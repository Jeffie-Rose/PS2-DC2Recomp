#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPtrList__11CItemSelectFv
// Address: 0x24f250 - 0x24f3ac
void SetPtrList__11CItemSelectFv_0x24f250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPtrList__11CItemSelectFv_0x24f250");
#endif

    switch (ctx->pc) {
        case 0x24f288u: goto label_24f288;
        case 0x24f2a0u: goto label_24f2a0;
        case 0x24f330u: goto label_24f330;
        default: break;
    }

    ctx->pc = 0x24f250u;

    // 0x24f250: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24f250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24f254: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24f254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x24f258: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24f258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24f25c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24f25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24f260: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24f260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24f264: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x24f264u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f268: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24f268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24f26c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24f270: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24f270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f278: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24f278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f27c: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x24f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
    // 0x24f280: 0x8c30d8d0  lw          $s0, -0x2730($at)
    ctx->pc = 0x24f280u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
    // 0x24f284: 0x0  nop
    ctx->pc = 0x24f284u;
    // NOP
label_24f288:
    // 0x24f288: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x24f288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24f28c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x24f28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x24f290: 0x1860001e  blez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x24F290u;
    {
        const bool branch_taken_0x24f290 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x24F294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F290u;
            // 0x24f294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f290) {
            ctx->pc = 0x24F30Cu;
            goto label_24f30c;
        }
    }
    ctx->pc = 0x24F298u;
    // 0x24f298: 0xc065c94  jal         func_197250
    ctx->pc = 0x24F298u;
    SET_GPR_U32(ctx, 31, 0x24F2A0u);
    ctx->pc = 0x197250u;
    if (runtime->hasFunction(0x197250u)) {
        auto targetFn = runtime->lookupFunction(0x197250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F2A0u; }
        if (ctx->pc != 0x24F2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSpectolNo__13CGameDataUsedFv_0x197250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24F2A0u; }
        if (ctx->pc != 0x24F2A0u) { return; }
    }
    ctx->pc = 0x24F2A0u;
label_24f2a0:
    // 0x24f2a0: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x24f2a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24f2a4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x24F2A4u;
    {
        const bool branch_taken_0x24f2a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f2a4) {
            ctx->pc = 0x24F30Cu;
            goto label_24f30c;
        }
    }
    ctx->pc = 0x24F2ACu;
    // 0x24f2ac: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x24f2acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x24f2b0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x24f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24f2b4: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x24F2B4u;
    {
        const bool branch_taken_0x24f2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24f2b4) {
            ctx->pc = 0x24F30Cu;
            goto label_24f30c;
        }
    }
    ctx->pc = 0x24F2BCu;
    // 0x24f2bc: 0x8e850110  lw          $a1, 0x110($s4)
    ctx->pc = 0x24f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x24f2c0: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x24f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x24f2c4: 0x2463ca90  addiu       $v1, $v1, -0x3570
    ctx->pc = 0x24f2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953616));
    // 0x24f2c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24f2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f2cc: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x24f2d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24f2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24f2d4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x24f2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x24f2d8: 0xacb30114  sw          $s3, 0x114($a1)
    ctx->pc = 0x24f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 276), GPR_U32(ctx, 19));
    // 0x24f2dc: 0x8e850110  lw          $a1, 0x110($s4)
    ctx->pc = 0x24f2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x24f2e0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x24f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x24f2e4: 0xa0a0036c  sb          $zero, 0x36C($a1)
    ctx->pc = 0x24f2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 876), (uint8_t)GPR_U32(ctx, 0));
    // 0x24f2e8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x24f2e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24f2ec: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24F2ECu;
    {
        const bool branch_taken_0x24f2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24f2ec) {
            ctx->pc = 0x24F300u;
            goto label_24f300;
        }
    }
    ctx->pc = 0x24F2F4u;
    // 0x24f2f4: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x24f2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x24f2f8: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x24f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x24f2fc: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x24f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
label_24f300:
    // 0x24f300: 0x8e830110  lw          $v1, 0x110($s4)
    ctx->pc = 0x24f300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x24f304: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f308: 0xae830110  sw          $v1, 0x110($s4)
    ctx->pc = 0x24f308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 272), GPR_U32(ctx, 3));
label_24f30c:
    // 0x24f30c: 0x0  nop
    ctx->pc = 0x24f30cu;
    // NOP
    // 0x24f310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24f310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x24f314: 0x2a230096  slti        $v1, $s1, 0x96
    ctx->pc = 0x24f314u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x24f318: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x24F318u;
    {
        const bool branch_taken_0x24f318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F318u;
            // 0x24f31c: 0x2652006c  addiu       $s2, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f318) {
            ctx->pc = 0x24F288u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f288;
        }
    }
    ctx->pc = 0x24F320u;
    // 0x24f320: 0x8e850110  lw          $a1, 0x110($s4)
    ctx->pc = 0x24f320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x24f324: 0x28a10096  slti        $at, $a1, 0x96
    ctx->pc = 0x24f324u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x24f328: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x24F328u;
    {
        const bool branch_taken_0x24f328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24F32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F328u;
            // 0x24f32c: 0x52080  sll         $a0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f328) {
            ctx->pc = 0x24F350u;
            goto label_24f350;
        }
    }
    ctx->pc = 0x24F330u;
label_24f330:
    // 0x24f330: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x24f330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x24f334: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24f334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x24f338: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x24f338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
    // 0x24f33c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x24f340: 0x28a30096  slti        $v1, $a1, 0x96
    ctx->pc = 0x24f340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x24f344: 0x0  nop
    ctx->pc = 0x24f344u;
    // NOP
    // 0x24f348: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x24F348u;
    {
        const bool branch_taken_0x24f348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f348) {
            ctx->pc = 0x24F330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24f330;
        }
    }
    ctx->pc = 0x24F350u;
label_24f350:
    // 0x24f350: 0x8e840110  lw          $a0, 0x110($s4)
    ctx->pc = 0x24f350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x24f354: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x24f354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x24f358: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x24f358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x24f35c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x24f35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x24f360: 0x0  nop
    ctx->pc = 0x24f360u;
    // NOP
    // 0x24f364: 0x0  nop
    ctx->pc = 0x24f364u;
    // NOP
    // 0x24f368: 0x1810  mfhi        $v1
    ctx->pc = 0x24f368u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x24f36c: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x24f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x24f370: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x24f370u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x24f374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24f374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24f378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24f37c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24f37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24f380: 0x0  nop
    ctx->pc = 0x24f380u;
    // NOP
    // 0x24f384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24f384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24f388: 0xe6800448  swc1        $f0, 0x448($s4)
    ctx->pc = 0x24f388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1096), bits); }
    // 0x24f38c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24f38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24f390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24f394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24f398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f39c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24f39cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f3a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x24F3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24F3A4u;
            // 0x24f3a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F3ACu;
}
