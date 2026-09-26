#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDrumCounter__Fiii
// Address: 0x1bbd80 - 0x1bbf74
void DrawDrumCounter__Fiii_0x1bbd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDrumCounter__Fiii_0x1bbd80");
#endif

    switch (ctx->pc) {
        case 0x1bbeb4u: goto label_1bbeb4;
        case 0x1bbebcu: goto label_1bbebc;
        case 0x1bbeccu: goto label_1bbecc;
        case 0x1bbed4u: goto label_1bbed4;
        case 0x1bbee0u: goto label_1bbee0;
        case 0x1bbeecu: goto label_1bbeec;
        case 0x1bbf04u: goto label_1bbf04;
        case 0x1bbf0cu: goto label_1bbf0c;
        case 0x1bbf3cu: goto label_1bbf3c;
        case 0x1bbf58u: goto label_1bbf58;
        default: break;
    }

    ctx->pc = 0x1bbd80u;

    // 0x1bbd80: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1bbd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x1bbd84: 0x667c2  srl         $t4, $a2, 31
    ctx->pc = 0x1bbd84u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bbd88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bbd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bbd8c: 0x27ae0050  addiu       $t6, $sp, 0x50
    ctx->pc = 0x1bbd8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bbd90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bbd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bbd94: 0x27a20054  addiu       $v0, $sp, 0x54
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1bbd98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bbd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bbd9c: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x1bbd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1bbda0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bbda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bbda4: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x1bbda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bbda8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bbda8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bbdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bbdb0: 0x3c0468db  lui         $a0, 0x68DB
    ctx->pc = 0x1bbdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26843 << 16));
    // 0x1bbdb4: 0xadc00000  sw          $zero, 0x0($t6)
    ctx->pc = 0x1bbdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 0));
    // 0x1bbdb8: 0x34848bad  ori         $a0, $a0, 0x8BAD
    ctx->pc = 0x1bbdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)35757);
    // 0x1bbdbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1bbdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdc0: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x1bbdc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bbdc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bbdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bbdc8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1bbdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1bbdcc: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1bbdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bbdd0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1bbdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1bbdd4: 0x240d2710  addiu       $t5, $zero, 0x2710
    ctx->pc = 0x1bbdd4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1bbdd8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1bbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1bbddc: 0x5810  mfhi        $t3
    ctx->pc = 0x1bbddcu;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x1bbde0: 0x3c041062  lui         $a0, 0x1062
    ctx->pc = 0x1bbde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4194 << 16));
    // 0x1bbde4: 0x348a4dd3  ori         $t2, $a0, 0x4DD3
    ctx->pc = 0x1bbde4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19923);
    // 0x1bbde8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1bbde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1bbdec: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1bbdecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
    // 0x1bbdf0: 0xb5b03  sra         $t3, $t3, 12
    ctx->pc = 0x1bbdf0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 12));
    // 0x1bbdf4: 0x3489851f  ori         $t1, $a0, 0x851F
    ctx->pc = 0x1bbdf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
    // 0x1bbdf8: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x1bbdf8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x1bbdfc: 0x3c046666  lui         $a0, 0x6666
    ctx->pc = 0x1bbdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26214 << 16));
    // 0x1bbe00: 0xadcb0000  sw          $t3, 0x0($t6)
    ctx->pc = 0x1bbe00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 11));
    // 0x1bbe04: 0x34886667  ori         $t0, $a0, 0x6667
    ctx->pc = 0x1bbe04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26215);
    // 0x1bbe08: 0x16d5818  mult        $t3, $t3, $t5
    ctx->pc = 0x1bbe08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x1bbe0c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bbe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bbe10: 0xcb3023  subu        $a2, $a2, $t3
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1bbe14: 0x1460018  mult        $zero, $t2, $a2
    ctx->pc = 0x1bbe14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bbe18: 0x65fc2  srl         $t3, $a2, 31
    ctx->pc = 0x1bbe18u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bbe1c: 0x0  nop
    ctx->pc = 0x1bbe1cu;
    // NOP
    // 0x1bbe20: 0x5010  mfhi        $t2
    ctx->pc = 0x1bbe20u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x1bbe24: 0xa5183  sra         $t2, $t2, 6
    ctx->pc = 0x1bbe24u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 6));
    // 0x1bbe28: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1bbe28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1bbe2c: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x1bbe2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x1bbe30: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1bbe30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
    // 0x1bbe34: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1bbe38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbe3c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1bbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1bbe40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1bbe40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1bbe44: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1bbe44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bbe48: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x1bbe48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bbe4c: 0x0  nop
    ctx->pc = 0x1bbe4cu;
    // NOP
    // 0x1bbe50: 0x0  nop
    ctx->pc = 0x1bbe50u;
    // NOP
    // 0x1bbe54: 0x1010  mfhi        $v0
    ctx->pc = 0x1bbe54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bbe58: 0x64fc2  srl         $t1, $a2, 31
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bbe5c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1bbe5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1bbe60: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x1bbe60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1bbe64: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x1bbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 9));
    // 0x1bbe68: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1bbe6c: 0x491821  addu        $v1, $v0, $t1
    ctx->pc = 0x1bbe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1bbe70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bbe74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bbe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bbe78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbe7c: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1bbe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bbe80: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x1bbe80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bbe84: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x1bbe84u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1bbe88: 0x0  nop
    ctx->pc = 0x1bbe88u;
    // NOP
    // 0x1bbe8c: 0x1010  mfhi        $v0
    ctx->pc = 0x1bbe8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bbe90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1bbe90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1bbe94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbe98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bbe9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1bbe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1bbea0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbea4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bbea8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x1bbea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bbeac: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BBEACu;
    SET_GPR_U32(ctx, 31, 0x1BBEB4u);
    ctx->pc = 0x1BBEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEACu;
            // 0x1bbeb0: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEB4u; }
        if (ctx->pc != 0x1BBEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEB4u; }
        if (ctx->pc != 0x1BBEB4u) { return; }
    }
    ctx->pc = 0x1BBEB4u;
label_1bbeb4:
    // 0x1bbeb4: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x1BBEB4u;
    SET_GPR_U32(ctx, 31, 0x1BBEBCu);
    ctx->pc = 0x1BBEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEB4u;
            // 0x1bbeb8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEBCu; }
        if (ctx->pc != 0x1BBEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEBCu; }
        if (ctx->pc != 0x1BBEBCu) { return; }
    }
    ctx->pc = 0x1BBEBCu;
label_1bbebc:
    // 0x1bbebc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bbec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbec4: 0xc04d104  jal         func_134410
    ctx->pc = 0x1BBEC4u;
    SET_GPR_U32(ctx, 31, 0x1BBECCu);
    ctx->pc = 0x1BBEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEC4u;
            // 0x1bbec8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBECCu; }
        if (ctx->pc != 0x1BBECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBECCu; }
        if (ctx->pc != 0x1BBECCu) { return; }
    }
    ctx->pc = 0x1BBECCu;
label_1bbecc:
    // 0x1bbecc: 0xc079f5c  jal         func_1E7D70
    ctx->pc = 0x1BBECCu;
    SET_GPR_U32(ctx, 31, 0x1BBED4u);
    ctx->pc = 0x1BBED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBECCu;
            // 0x1bbed0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBED4u; }
        if (ctx->pc != 0x1BBED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBED4u; }
        if (ctx->pc != 0x1BBED4u) { return; }
    }
    ctx->pc = 0x1BBED4u;
label_1bbed4:
    // 0x1bbed4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bbed8: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1BBED8u;
    SET_GPR_U32(ctx, 31, 0x1BBEE0u);
    ctx->pc = 0x1BBEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBED8u;
            // 0x1bbedc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEE0u; }
        if (ctx->pc != 0x1BBEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEE0u; }
        if (ctx->pc != 0x1BBEE0u) { return; }
    }
    ctx->pc = 0x1BBEE0u;
label_1bbee0:
    // 0x1bbee0: 0x8f858e7c  lw          $a1, -0x7184($gp)
    ctx->pc = 0x1bbee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938236)));
    // 0x1bbee4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1BBEE4u;
    SET_GPR_U32(ctx, 31, 0x1BBEECu);
    ctx->pc = 0x1BBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEE4u;
            // 0x1bbee8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEECu; }
        if (ctx->pc != 0x1BBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBEECu; }
        if (ctx->pc != 0x1BBEECu) { return; }
    }
    ctx->pc = 0x1BBEECu;
label_1bbeec:
    // 0x1bbeec: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bbef0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bbef4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1bbef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbef8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1bbef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbefc: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1BBEFCu;
    SET_GPR_U32(ctx, 31, 0x1BBF04u);
    ctx->pc = 0x1BBF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBEFCu;
            // 0x1bbf00: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF04u; }
        if (ctx->pc != 0x1BBF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF04u; }
        if (ctx->pc != 0x1BBF04u) { return; }
    }
    ctx->pc = 0x1BBF04u;
label_1bbf04:
    // 0x1bbf04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bbf04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bbf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbf0c:
    // 0x1bbf0c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1bbf10: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bbf14: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x1bbf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1bbf18: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1bbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bbf1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bbf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bbf20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf24: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1bbf24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf28: 0x240a00e8  addiu       $t2, $zero, 0xE8
    ctx->pc = 0x1bbf28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    // 0x1bbf2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1bbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1bbf30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbf34: 0xc079f7c  jal         func_1E7DF0
    ctx->pc = 0x1BBF34u;
    SET_GPR_U32(ctx, 31, 0x1BBF3Cu);
    ctx->pc = 0x1BBF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF34u;
            // 0x1bbf38: 0x24880  sll         $t1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7DF0u;
    if (runtime->hasFunction(0x1E7DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1E7DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF3Cu; }
        if (ctx->pc != 0x1BBF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIRect__10CPreSpriteFiiiiii_0x1e7df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF3Cu; }
        if (ctx->pc != 0x1BBF3Cu) { return; }
    }
    ctx->pc = 0x1BBF3Cu;
label_1bbf3c:
    // 0x1bbf3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1bbf3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1bbf40: 0x2631000f  addiu       $s1, $s1, 0xF
    ctx->pc = 0x1bbf40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x1bbf44: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1bbf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1bbf48: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1BBF48u;
    {
        const bool branch_taken_0x1bbf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF48u;
            // 0x1bbf4c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf48) {
            ctx->pc = 0x1BBF0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbf0c;
        }
    }
    ctx->pc = 0x1BBF50u;
    // 0x1bbf50: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x1BBF50u;
    SET_GPR_U32(ctx, 31, 0x1BBF58u);
    ctx->pc = 0x1BBF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF50u;
            // 0x1bbf54: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF58u; }
        if (ctx->pc != 0x1BBF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF58u; }
        if (ctx->pc != 0x1BBF58u) { return; }
    }
    ctx->pc = 0x1BBF58u;
label_1bbf58:
    // 0x1bbf58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bbf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bbf5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bbf5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbf60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bbf60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbf64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bbf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbf68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bbf68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF6Cu;
            // 0x1bbf70: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBF74u;
}
