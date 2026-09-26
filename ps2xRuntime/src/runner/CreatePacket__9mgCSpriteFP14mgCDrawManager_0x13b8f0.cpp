#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatePacket__9mgCSpriteFP14mgCDrawManager
// Address: 0x13b8f0 - 0x13bb6c
void CreatePacket__9mgCSpriteFP14mgCDrawManager_0x13b8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatePacket__9mgCSpriteFP14mgCDrawManager_0x13b8f0");
#endif

    switch (ctx->pc) {
        case 0x13b94cu: goto label_13b94c;
        case 0x13b9dcu: goto label_13b9dc;
        case 0x13bb30u: goto label_13bb30;
        case 0x13bb3cu: goto label_13bb3c;
        default: break;
    }

    ctx->pc = 0x13b8f0u;

    // 0x13b8f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13b8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13b8f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x13b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x13b8f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13b8fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13b900: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13b904: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13b904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13b908: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13b908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b90c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13b910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13b914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13b918: 0x8cb2005c  lw          $s2, 0x5C($a1)
    ctx->pc = 0x13b918u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x13b91c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x13b91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x13b920: 0x8cb60060  lw          $s6, 0x60($a1)
    ctx->pc = 0x13b920u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x13b924: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x13b924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x13b928: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x13b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13b92c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13b92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13b930: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x13b930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b934: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x13B934u;
    {
        const bool branch_taken_0x13b934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B934u;
            // 0x13b938: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b934) {
            ctx->pc = 0x13B954u;
            goto label_13b954;
        }
    }
    ctx->pc = 0x13B93Cu;
    // 0x13b93c: 0xdcc50038  ld          $a1, 0x38($a2)
    ctx->pc = 0x13b93cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x13b940: 0xdcc60040  ld          $a2, 0x40($a2)
    ctx->pc = 0x13b940u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x13b944: 0xc04f928  jal         func_13E4A0
    ctx->pc = 0x13B944u;
    SET_GPR_U32(ctx, 31, 0x13B94Cu);
    ctx->pc = 0x13B948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B944u;
            // 0x13b948: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E4A0u;
    if (runtime->hasFunction(0x13E4A0u)) {
        auto targetFn = runtime->lookupFunction(0x13E4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B94Cu; }
        if (ctx->pc != 0x13B94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTEX0__FPUiUlUl_0x13e4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B94Cu; }
        if (ctx->pc != 0x13B94Cu) { return; }
    }
    ctx->pc = 0x13B94Cu;
label_13b94c:
    // 0x13b94c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13b950: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x13b950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_13b954:
    // 0x13b954: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x13b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13b958: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x13b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x13b95c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x13b95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x13b960: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x13b960u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x13b964: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x13b964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x13b968: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13b968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13b96c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x13b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x13b970: 0x34048008  ori         $a0, $zero, 0x8008
    ctx->pc = 0x13b970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    // 0x13b974: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x13b974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x13b978: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x13b978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x13b97c: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x13b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x13b980: 0x24634060  addiu       $v1, $v1, 0x4060
    ctx->pc = 0x13b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16480));
    // 0x13b984: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x13b984u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13b98c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13b98cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b990: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x13b990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13b994: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x13b994u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x13b998: 0xac244060  sw          $a0, 0x4060($at)
    ctx->pc = 0x13b998u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16480), GPR_U32(ctx, 4));
    // 0x13b99c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13b99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b9a0: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x13b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x13b9a4: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x13b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b9a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13b9a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b9ac: 0x0  nop
    ctx->pc = 0x13b9acu;
    // NOP
    // 0x13b9b0: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x13B9B0u;
    {
        const bool branch_taken_0x13b9b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9B0u;
            // 0x13b9b4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9b0) {
            ctx->pc = 0x13B9ECu;
            goto label_13b9ec;
        }
    }
    ctx->pc = 0x13B9B8u;
    // 0x13b9b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13b9bc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13b9c0: 0x244240a0  addiu       $v0, $v0, 0x40A0
    ctx->pc = 0x13b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16544));
    // 0x13b9c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x13b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13b9c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13b9c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b9cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13b9d0: 0xc6800044  lwc1        $f0, 0x44($s4)
    ctx->pc = 0x13b9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b9d4: 0xc051680  jal         func_145A00
    ctx->pc = 0x13B9D4u;
    SET_GPR_U32(ctx, 31, 0x13B9DCu);
    ctx->pc = 0x13B9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9D4u;
            // 0x13b9d8: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145A00u;
    if (runtime->hasFunction(0x145A00u)) {
        auto targetFn = runtime->lookupFunction(0x145A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9DCu; }
        if (ctx->pc != 0x13B9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransViewPrim__FPiPf_0x145a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B9DCu; }
        if (ctx->pc != 0x13B9DCu) { return; }
    }
    ctx->pc = 0x13B9DCu;
label_13b9dc:
    // 0x13b9dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B9DCu;
    {
        const bool branch_taken_0x13b9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B9DCu;
            // 0x13b9e0: 0x15103c  dsll32      $v0, $s5, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9dc) {
            ctx->pc = 0x13B9F0u;
            goto label_13b9f0;
        }
    }
    ctx->pc = 0x13B9E4u;
    // 0x13b9e4: 0x8fb500a8  lw          $s5, 0xA8($sp)
    ctx->pc = 0x13b9e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13b9e8: 0x0  nop
    ctx->pc = 0x13b9e8u;
    // NOP
label_13b9ec:
    // 0x13b9ec: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x13b9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
label_13b9f0:
    // 0x13b9f0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x13b9f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b9f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13b9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b9f8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x13b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x13b9fc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x13b9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13ba00: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13ba04: 0xfe2a0000  sd          $t2, 0x0($s1)
    ctx->pc = 0x13ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 10));
    // 0x13ba08: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x13ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13ba0c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x13ba0cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x13ba10: 0xb33023  subu        $a2, $a1, $s3
    ctx->pc = 0x13ba10u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x13ba14: 0x8e890040  lw          $t1, 0x40($s4)
    ctx->pc = 0x13ba14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x13ba18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13ba1c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x13ba1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13ba20: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x13ba20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x13ba24: 0x3c076000  lui         $a3, 0x6000
    ctx->pc = 0x13ba24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24576 << 16));
    // 0x13ba28: 0x62903  sra         $a1, $a2, 4
    ctx->pc = 0x13ba28u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 4));
    // 0x13ba2c: 0x9482b  sltu        $t1, $zero, $t1
    ctx->pc = 0x13ba2cu;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x13ba30: 0x94938  dsll        $t1, $t1, 4
    ctx->pc = 0x13ba30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 4);
    // 0x13ba34: 0x35290146  ori         $t1, $t1, 0x146
    ctx->pc = 0x13ba34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)326);
    // 0x13ba38: 0xfe290010  sd          $t1, 0x10($s1)
    ctx->pc = 0x13ba38u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 9));
    // 0x13ba3c: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x13ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x13ba40: 0xde890070  ld          $t1, 0x70($s4)
    ctx->pc = 0x13ba40u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x13ba44: 0xfe290020  sd          $t1, 0x20($s1)
    ctx->pc = 0x13ba44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 9));
    // 0x13ba48: 0xfe2a0028  sd          $t2, 0x28($s1)
    ctx->pc = 0x13ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 10));
    // 0x13ba4c: 0x8e890064  lw          $t1, 0x64($s4)
    ctx->pc = 0x13ba4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x13ba50: 0x8e8a0060  lw          $t2, 0x60($s4)
    ctx->pc = 0x13ba50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x13ba54: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x13ba54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x13ba58: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x13ba58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x13ba5c: 0xfe290030  sd          $t1, 0x30($s1)
    ctx->pc = 0x13ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 9));
    // 0x13ba60: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x13ba60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
    // 0x13ba64: 0x8f8a879c  lw          $t2, -0x7864($gp)
    ctx->pc = 0x13ba64u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x13ba68: 0x8f8c8798  lw          $t4, -0x7868($gp)
    ctx->pc = 0x13ba68u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x13ba6c: 0x8e890054  lw          $t1, 0x54($s4)
    ctx->pc = 0x13ba6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x13ba70: 0x8e8b0050  lw          $t3, 0x50($s4)
    ctx->pc = 0x13ba70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x13ba74: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x13ba74u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x13ba78: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x13ba78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x13ba7c: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x13ba7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x13ba80: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x13ba80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x13ba84: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x13ba88: 0xb583c  dsll32      $t3, $t3, 0
    ctx->pc = 0x13ba88u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 0));
    // 0x13ba8c: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x13ba8cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x13ba90: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x13ba90u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x13ba94: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x13ba94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x13ba98: 0x1694825  or          $t1, $t3, $t1
    ctx->pc = 0x13ba98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x13ba9c: 0x894825  or          $t1, $a0, $t1
    ctx->pc = 0x13ba9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x13baa0: 0xfe290040  sd          $t1, 0x40($s1)
    ctx->pc = 0x13baa0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 9));
    // 0x13baa4: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x13baa4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x13baa8: 0x8e89006c  lw          $t1, 0x6C($s4)
    ctx->pc = 0x13baa8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x13baac: 0x8e8a0068  lw          $t2, 0x68($s4)
    ctx->pc = 0x13baacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x13bab0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x13bab0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x13bab4: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x13bab4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x13bab8: 0xfe290050  sd          $t1, 0x50($s1)
    ctx->pc = 0x13bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 9));
    // 0x13babc: 0xfe230058  sd          $v1, 0x58($s1)
    ctx->pc = 0x13babcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 88), GPR_U64(ctx, 3));
    // 0x13bac0: 0x8f89879c  lw          $t1, -0x7864($gp)
    ctx->pc = 0x13bac0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x13bac4: 0x8f8b8798  lw          $t3, -0x7868($gp)
    ctx->pc = 0x13bac4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x13bac8: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x13bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x13bacc: 0x8e8a0058  lw          $t2, 0x58($s4)
    ctx->pc = 0x13baccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x13bad0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x13bad0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x13bad4: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x13bad4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x13bad8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x13bad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x13badc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x13badcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x13bae0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x13bae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x13bae4: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x13bae4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x13bae8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x13bae8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x13baec: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x13baecu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x13baf0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x13baf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x13baf4: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x13baf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x13baf8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x13baf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x13bafc: 0xfe230060  sd          $v1, 0x60($s1)
    ctx->pc = 0x13bafcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
    // 0x13bb00: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x13bb00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
    // 0x13bb04: 0xfe200070  sd          $zero, 0x70($s1)
    ctx->pc = 0x13bb04u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 112), GPR_U64(ctx, 0));
    // 0x13bb08: 0xfe280078  sd          $t0, 0x78($s1)
    ctx->pc = 0x13bb08u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 8));
    // 0x13bb0c: 0xae270080  sw          $a3, 0x80($s1)
    ctx->pc = 0x13bb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 7));
    // 0x13bb10: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x13bb10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x13bb14: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x13bb14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x13bb18: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB18u;
    {
        const bool branch_taken_0x13bb18 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x13BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB18u;
            // 0x13bb1c: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb18) {
            ctx->pc = 0x13BB28u;
            goto label_13bb28;
        }
    }
    ctx->pc = 0x13BB20u;
    // 0x13bb20: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x13bb24: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x13bb24u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_13bb28:
    // 0x13bb28: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13BB28u;
    SET_GPR_U32(ctx, 31, 0x13BB30u);
    ctx->pc = 0x13BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB28u;
            // 0x13bb2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB30u; }
        if (ctx->pc != 0x13BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB30u; }
        if (ctx->pc != 0x13BB30u) { return; }
    }
    ctx->pc = 0x13BB30u;
label_13bb30:
    // 0x13bb30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13bb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb34: 0xc04e748  jal         func_139D20
    ctx->pc = 0x13BB34u;
    SET_GPR_U32(ctx, 31, 0x13BB3Cu);
    ctx->pc = 0x13BB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB34u;
            // 0x13bb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB3Cu; }
        if (ctx->pc != 0x13BB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13BB3Cu; }
        if (ctx->pc != 0x13BB3Cu) { return; }
    }
    ctx->pc = 0x13BB3Cu;
label_13bb3c:
    // 0x13bb3c: 0x13113c  dsll32      $v0, $s3, 4
    ctx->pc = 0x13bb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 4));
    // 0x13bb40: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x13bb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13bb44: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13bb44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13bb48: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13bb48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13bb4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13bb4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13bb50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13bb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bb54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13bb54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bb58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bb58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bb5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13bb5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bb60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13bb60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13BB64u;
            // 0x13bb68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13BB6Cu;
}
