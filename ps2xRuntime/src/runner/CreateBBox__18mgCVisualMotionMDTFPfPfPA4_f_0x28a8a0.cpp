#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreateBBox__18mgCVisualMotionMDTFPfPfPA4_f
// Address: 0x28a8a0 - 0x28ab58
void CreateBBox__18mgCVisualMotionMDTFPfPfPA4_f_0x28a8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateBBox__18mgCVisualMotionMDTFPfPfPA4_f_0x28a8a0");
#endif

    switch (ctx->pc) {
        case 0x28a8dcu: goto label_28a8dc;
        case 0x28a91cu: goto label_28a91c;
        case 0x28a930u: goto label_28a930;
        case 0x28a948u: goto label_28a948;
        case 0x28a9b4u: goto label_28a9b4;
        case 0x28a9d0u: goto label_28a9d0;
        case 0x28a9e0u: goto label_28a9e0;
        case 0x28a9fcu: goto label_28a9fc;
        case 0x28aa08u: goto label_28aa08;
        case 0x28aa18u: goto label_28aa18;
        case 0x28aa40u: goto label_28aa40;
        case 0x28aa58u: goto label_28aa58;
        case 0x28aa68u: goto label_28aa68;
        case 0x28aa74u: goto label_28aa74;
        case 0x28aa84u: goto label_28aa84;
        case 0x28aa94u: goto label_28aa94;
        case 0x28aaa8u: goto label_28aaa8;
        case 0x28aac0u: goto label_28aac0;
        case 0x28aadcu: goto label_28aadc;
        case 0x28aaf8u: goto label_28aaf8;
        default: break;
    }

    ctx->pc = 0x28a8a0u;

    // 0x28a8a0: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x28a8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x28a8a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28a8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x28a8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x28a8ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28a8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x28a8b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28a8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28a8b4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x28a8b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28a8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28a8bc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28a8bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28a8c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28a8c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28a8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28a8cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x28a8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28a8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28a8d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28a8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28a8d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28a8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a8dc:
    // 0x28a8dc: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x28a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x28a8e0: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x28a8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x28a8e4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28A8E4u;
    {
        const bool branch_taken_0x28a8e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28a8e4) {
            ctx->pc = 0x28A8FCu;
            goto label_28a8fc;
        }
    }
    ctx->pc = 0x28A8ECu;
    // 0x28a8ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28a8f0: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x28a8f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28a8f4: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28A8F4u;
    {
        const bool branch_taken_0x28a8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A8F4u;
            // 0x28a8f8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8f4) {
            ctx->pc = 0x28A8DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a8dc;
        }
    }
    ctx->pc = 0x28A8FCu;
label_28a8fc:
    // 0x28a8fc: 0x0  nop
    ctx->pc = 0x28a8fcu;
    // NOP
    // 0x28a900: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28A900u;
    {
        const bool branch_taken_0x28a900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A900u;
            // 0x28a904: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a900) {
            ctx->pc = 0x28A910u;
            goto label_28a910;
        }
    }
    ctx->pc = 0x28A908u;
    // 0x28a908: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x28A908u;
    {
        const bool branch_taken_0x28a908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A908u;
            // 0x28a90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a908) {
            ctx->pc = 0x28AB30u;
            goto label_28ab30;
        }
    }
    ctx->pc = 0x28A910u;
label_28a910:
    // 0x28a910: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x28a910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x28a914: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x28A914u;
    SET_GPR_U32(ctx, 31, 0x28A91Cu);
    ctx->pc = 0x28A918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A914u;
            // 0x28a918: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A91Cu; }
        if (ctx->pc != 0x28A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A91Cu; }
        if (ctx->pc != 0x28A91Cu) { return; }
    }
    ctx->pc = 0x28A91Cu;
label_28a91c:
    // 0x28a91c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28a920: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x28a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x28a924: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28a924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a928: 0xc041c4a  jal         func_107128
    ctx->pc = 0x28A928u;
    SET_GPR_U32(ctx, 31, 0x28A930u);
    ctx->pc = 0x28A92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A928u;
            // 0x28a92c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A930u; }
        if (ctx->pc != 0x28A930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A930u; }
        if (ctx->pc != 0x28A930u) { return; }
    }
    ctx->pc = 0x28A930u;
label_28a930:
    // 0x28a930: 0x26a30060  addiu       $v1, $s5, 0x60
    ctx->pc = 0x28a930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x28a934: 0x26a20070  addiu       $v0, $s5, 0x70
    ctx->pc = 0x28a934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x28a938: 0xafa30250  sw          $v1, 0x250($sp)
    ctx->pc = 0x28a938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 3));
    // 0x28a93c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28a93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a940: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x28a940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x28a944: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28a944u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a948:
    // 0x28a948: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x28a948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x28a94c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x28a94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x28a950: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x28a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x28a954: 0x246401d0  addiu       $a0, $v1, 0x1D0
    ctx->pc = 0x28a954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x28a958: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x28a958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x28a95c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x28a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28a960: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x28a960u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a964: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28a964u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x28a968: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x28a968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x28a96c: 0xbd2821  addu        $a1, $a1, $sp
    ctx->pc = 0x28a96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x28a970: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a974: 0x8ca60250  lw          $a2, 0x250($a1)
    ctx->pc = 0x28a974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x28a978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28a978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a97c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x28a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a980: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x28a980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28a984: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x28a984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x28a988: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x28a988u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28a98c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28a990: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x28a994: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x28a994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x28a998: 0x8ca50250  lw          $a1, 0x250($a1)
    ctx->pc = 0x28a998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x28a99c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28a99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9a0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28a9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28a9a4: 0x8c630250  lw          $v1, 0x250($v1)
    ctx->pc = 0x28a9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x28a9a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x28a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a9ac: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x28A9ACu;
    SET_GPR_U32(ctx, 31, 0x28A9B4u);
    ctx->pc = 0x28A9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9ACu;
            // 0x28a9b0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9B4u; }
        if (ctx->pc != 0x28A9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9B4u; }
        if (ctx->pc != 0x28A9B4u) { return; }
    }
    ctx->pc = 0x28A9B4u;
label_28a9b4:
    // 0x28a9b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28a9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28a9b8: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x28a9b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28a9bc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x28A9BCu;
    {
        const bool branch_taken_0x28a9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9BCu;
            // 0x28a9c0: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9bc) {
            ctx->pc = 0x28A948u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28a948;
        }
    }
    ctx->pc = 0x28A9C4u;
    // 0x28a9c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9c8: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x28A9C8u;
    SET_GPR_U32(ctx, 31, 0x28A9D0u);
    ctx->pc = 0x28A9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9C8u;
            // 0x28a9cc: 0x27a40260  addiu       $a0, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9D0u; }
        if (ctx->pc != 0x28A9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9D0u; }
        if (ctx->pc != 0x28A9D0u) { return; }
    }
    ctx->pc = 0x28A9D0u;
label_28a9d0:
    // 0x28a9d0: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x28a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x28a9d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28a9d8: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x28A9D8u;
    SET_GPR_U32(ctx, 31, 0x28A9E0u);
    ctx->pc = 0x28A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9D8u;
            // 0x28a9dc: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9E0u; }
        if (ctx->pc != 0x28A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9E0u; }
        if (ctx->pc != 0x28A9E0u) { return; }
    }
    ctx->pc = 0x28A9E0u;
label_28a9e0:
    // 0x28a9e0: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x28a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x28a9e4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x28a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x28a9e8: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x28a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x28a9ec: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x28a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x28a9f0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x28a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x28a9f4: 0xc04c094  jal         func_130250
    ctx->pc = 0x28A9F4u;
    SET_GPR_U32(ctx, 31, 0x28A9FCu);
    ctx->pc = 0x28A9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28A9F4u;
            // 0x28a9f8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9FCu; }
        if (ctx->pc != 0x28A9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28A9FCu; }
        if (ctx->pc != 0x28A9FCu) { return; }
    }
    ctx->pc = 0x28A9FCu;
label_28a9fc:
    // 0x28a9fc: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x28a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x28aa00: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x28AA00u;
    SET_GPR_U32(ctx, 31, 0x28AA08u);
    ctx->pc = 0x28AA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA00u;
            // 0x28aa04: 0x27a502a0  addiu       $a1, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA08u; }
        if (ctx->pc != 0x28AA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA08u; }
        if (ctx->pc != 0x28AA08u) { return; }
    }
    ctx->pc = 0x28AA08u;
label_28aa08:
    // 0x28aa08: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x28aa08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28aa0c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x28AA0Cu;
    {
        const bool branch_taken_0x28aa0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA0Cu;
            // 0x28aa10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa0c) {
            ctx->pc = 0x28AB08u;
            goto label_28ab08;
        }
    }
    ctx->pc = 0x28AA14u;
    // 0x28aa14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28aa14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28aa18:
    // 0x28aa18: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x28aa1c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x28aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x28aa20: 0x8c720080  lw          $s2, 0x80($v1)
    ctx->pc = 0x28aa20u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x28aa24: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x28aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x28aa28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28aa2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28aa30: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x28AA30u;
    {
        const bool branch_taken_0x28aa30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA30u;
            // 0x28aa34: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa30) {
            ctx->pc = 0x28AAF8u;
            goto label_28aaf8;
        }
    }
    ctx->pc = 0x28AA38u;
    // 0x28aa38: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x28AA38u;
    SET_GPR_U32(ctx, 31, 0x28AA40u);
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA40u; }
        if (ctx->pc != 0x28AA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA40u; }
        if (ctx->pc != 0x28AA40u) { return; }
    }
    ctx->pc = 0x28AA40u;
label_28aa40:
    // 0x28aa40: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x28aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x28aa44: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x28aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x28aa48: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x28aa48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x28aa4c: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x28aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x28aa50: 0xc04c094  jal         func_130250
    ctx->pc = 0x28AA50u;
    SET_GPR_U32(ctx, 31, 0x28AA58u);
    ctx->pc = 0x28AA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA50u;
            // 0x28aa54: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA58u; }
        if (ctx->pc != 0x28AA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA58u; }
        if (ctx->pc != 0x28AA58u) { return; }
    }
    ctx->pc = 0x28AA58u;
label_28aa58:
    // 0x28aa58: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x28aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x28aa5c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x28aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x28aa60: 0xc04c094  jal         func_130250
    ctx->pc = 0x28AA60u;
    SET_GPR_U32(ctx, 31, 0x28AA68u);
    ctx->pc = 0x28AA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA60u;
            // 0x28aa64: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA68u; }
        if (ctx->pc != 0x28AA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA68u; }
        if (ctx->pc != 0x28AA68u) { return; }
    }
    ctx->pc = 0x28AA68u;
label_28aa68:
    // 0x28aa68: 0x27a403a0  addiu       $a0, $sp, 0x3A0
    ctx->pc = 0x28aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x28aa6c: 0xc04c0b4  jal         func_1302D0
    ctx->pc = 0x28AA6Cu;
    SET_GPR_U32(ctx, 31, 0x28AA74u);
    ctx->pc = 0x28AA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA6Cu;
            // 0x28aa70: 0x27a50360  addiu       $a1, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA74u; }
        if (ctx->pc != 0x28AA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA74u; }
        if (ctx->pc != 0x28AA74u) { return; }
    }
    ctx->pc = 0x28AA74u;
label_28aa74:
    // 0x28aa74: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x28aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x28aa78: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x28aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x28aa7c: 0xc04c094  jal         func_130250
    ctx->pc = 0x28AA7Cu;
    SET_GPR_U32(ctx, 31, 0x28AA84u);
    ctx->pc = 0x28AA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA7Cu;
            // 0x28aa80: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA84u; }
        if (ctx->pc != 0x28AA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA84u; }
        if (ctx->pc != 0x28AA84u) { return; }
    }
    ctx->pc = 0x28AA84u;
label_28aa84:
    // 0x28aa84: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x28aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x28aa88: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x28aa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
    // 0x28aa8c: 0xc04c094  jal         func_130250
    ctx->pc = 0x28AA8Cu;
    SET_GPR_U32(ctx, 31, 0x28AA94u);
    ctx->pc = 0x28AA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AA8Cu;
            // 0x28aa90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130250u;
    if (runtime->hasFunction(0x130250u)) {
        auto targetFn = runtime->lookupFunction(0x130250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA94u; }
        if (ctx->pc != 0x28AA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgMulMatrix__FPA4_fPA4_fPA4_f_0x130250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AA94u; }
        if (ctx->pc != 0x28AA94u) { return; }
    }
    ctx->pc = 0x28AA94u;
label_28aa94:
    // 0x28aa94: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x28aa98: 0x27a503e0  addiu       $a1, $sp, 0x3E0
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x28aa9c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x28aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28aaa0: 0xc04c228  jal         func_1308A0
    ctx->pc = 0x28AAA0u;
    SET_GPR_U32(ctx, 31, 0x28AAA8u);
    ctx->pc = 0x28AAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAA0u;
            // 0x28aaa4: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAA8u; }
        if (ctx->pc != 0x28AAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAA8u; }
        if (ctx->pc != 0x28AAA8u) { return; }
    }
    ctx->pc = 0x28AAA8u;
label_28aaa8:
    // 0x28aaa8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28AAA8u;
    {
        const bool branch_taken_0x28aaa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAA8u;
            // 0x28aaac: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaa8) {
            ctx->pc = 0x28AAC8u;
            goto label_28aac8;
        }
    }
    ctx->pc = 0x28AAB0u;
    // 0x28aab0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28aab4: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x28aab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x28aab8: 0xc04c260  jal         func_130980
    ctx->pc = 0x28AAB8u;
    SET_GPR_U32(ctx, 31, 0x28AAC0u);
    ctx->pc = 0x28AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAB8u;
            // 0x28aabc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130980u;
    if (runtime->hasFunction(0x130980u)) {
        auto targetFn = runtime->lookupFunction(0x130980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAC0u; }
        if (ctx->pc != 0x28AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMinMaxN__FPfPfPA4_fi_0x130980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAC0u; }
        if (ctx->pc != 0x28AAC0u) { return; }
    }
    ctx->pc = 0x28AAC0u;
label_28aac0:
    // 0x28aac0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28AAC0u;
    {
        const bool branch_taken_0x28aac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28aac0) {
            ctx->pc = 0x28AAF8u;
            goto label_28aaf8;
        }
    }
    ctx->pc = 0x28AAC8u;
label_28aac8:
    // 0x28aac8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x28aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28aacc: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x28aaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28aad0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x28aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x28aad4: 0xc04c260  jal         func_130980
    ctx->pc = 0x28AAD4u;
    SET_GPR_U32(ctx, 31, 0x28AADCu);
    ctx->pc = 0x28AAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAD4u;
            // 0x28aad8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130980u;
    if (runtime->hasFunction(0x130980u)) {
        auto targetFn = runtime->lookupFunction(0x130980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AADCu; }
        if (ctx->pc != 0x28AADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMinMaxN__FPfPfPA4_fi_0x130980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AADCu; }
        if (ctx->pc != 0x28AADCu) { return; }
    }
    ctx->pc = 0x28AADCu;
label_28aadc:
    // 0x28aadc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x28aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28aae0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x28aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28aae4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28aae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aae8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28aae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aaec: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x28aaecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x28aaf0: 0xc04bd40  jal         func_12F500
    ctx->pc = 0x28AAF0u;
    SET_GPR_U32(ctx, 31, 0x28AAF8u);
    ctx->pc = 0x28AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28AAF0u;
            // 0x28aaf4: 0x27a900b0  addiu       $t1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F500u;
    if (runtime->hasFunction(0x12F500u)) {
        auto targetFn = runtime->lookupFunction(0x12F500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAF8u; }
        if (ctx->pc != 0x28AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgVectorMaxMin__FPfPfPfPfPfPf_0x12f500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28AAF8u; }
        if (ctx->pc != 0x28AAF8u) { return; }
    }
    ctx->pc = 0x28AAF8u;
label_28aaf8:
    // 0x28aaf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28aaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x28aafc: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x28aafcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28ab00: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x28AB00u;
    {
        const bool branch_taken_0x28ab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28AB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB00u;
            // 0x28ab04: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ab00) {
            ctx->pc = 0x28AA18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28aa18;
        }
    }
    ctx->pc = 0x28AB08u;
label_28ab08:
    // 0x28ab08: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x28ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x28ab0c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x28ab0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ab10: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x28ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x28ab14: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28ab18: 0x7e850000  sq          $a1, 0x0($s4)
    ctx->pc = 0x28ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 5));
    // 0x28ab1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ab20: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x28ab20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28ab24: 0x7ec40000  sq          $a0, 0x0($s6)
    ctx->pc = 0x28ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 4));
    // 0x28ab28: 0xae83000c  sw          $v1, 0xC($s4)
    ctx->pc = 0x28ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
    // 0x28ab2c: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x28ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
label_28ab30:
    // 0x28ab30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x28ab30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28ab34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28ab34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28ab38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28ab38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ab3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28ab3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28ab40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28ab40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ab44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28ab44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ab48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28ab48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ab4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28ab4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x28AB50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28AB50u;
            // 0x28ab54: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28AB58u;
}
