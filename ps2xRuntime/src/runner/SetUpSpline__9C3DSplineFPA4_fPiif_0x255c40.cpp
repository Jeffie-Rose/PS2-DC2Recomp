#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetUpSpline__9C3DSplineFPA4_fPiif
// Address: 0x255c40 - 0x255f1c
void SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetUpSpline__9C3DSplineFPA4_fPiif_0x255c40");
#endif

    switch (ctx->pc) {
        case 0x255c78u: goto label_255c78;
        case 0x255c94u: goto label_255c94;
        case 0x255ca0u: goto label_255ca0;
        case 0x255cd4u: goto label_255cd4;
        case 0x255cf8u: goto label_255cf8;
        case 0x255d20u: goto label_255d20;
        case 0x255dd0u: goto label_255dd0;
        case 0x255ddcu: goto label_255ddc;
        default: break;
    }

    ctx->pc = 0x255c40u;

    // 0x255c40: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x255c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x255c44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x255c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x255c48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x255c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x255c4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x255c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x255c50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x255c50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x255c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x255c58: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x255c58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c5c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x255c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x255c60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x255c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x255c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x255c68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x255c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x255c6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x255c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c70: 0xc0956fc  jal         func_255BF0
    ctx->pc = 0x255C70u;
    SET_GPR_U32(ctx, 31, 0x255C78u);
    ctx->pc = 0x255C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255C70u;
            // 0x255c74: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x255BF0u;
    if (runtime->hasFunction(0x255BF0u)) {
        auto targetFn = runtime->lookupFunction(0x255BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255C78u; }
        if (ctx->pc != 0x255C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9C3DSplineFv_0x255bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255C78u; }
        if (ctx->pc != 0x255C78u) { return; }
    }
    ctx->pc = 0x255C78u;
label_255c78:
    // 0x255c78: 0x1a00009f  blez        $s0, . + 4 + (0x9F << 2)
    ctx->pc = 0x255C78u;
    {
        const bool branch_taken_0x255c78 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x255c78) {
            ctx->pc = 0x255EF8u;
            goto label_255ef8;
        }
    }
    ctx->pc = 0x255C80u;
    // 0x255c80: 0xae900380  sw          $s0, 0x380($s4)
    ctx->pc = 0x255c80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 896), GPR_U32(ctx, 16));
    // 0x255c84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x255c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x255c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255c8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x255C8Cu;
    {
        const bool branch_taken_0x255c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255C8Cu;
            // 0x255c90: 0xe6940398  swc1        $f20, 0x398($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 920), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255c8c) {
            ctx->pc = 0x255CA8u;
            goto label_255ca8;
        }
    }
    ctx->pc = 0x255C94u;
label_255c94:
    // 0x255c94: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x255c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x255c98: 0xc041c5c  jal         func_107170
    ctx->pc = 0x255C98u;
    SET_GPR_U32(ctx, 31, 0x255CA0u);
    ctx->pc = 0x255C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255C98u;
            // 0x255c9c: 0x24440070  addiu       $a0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CA0u; }
        if (ctx->pc != 0x255CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CA0u; }
        if (ctx->pc != 0x255CA0u) { return; }
    }
    ctx->pc = 0x255CA0u;
label_255ca0:
    // 0x255ca0: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x255ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x255ca4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x255ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_255ca8:
    // 0x255ca8: 0x8e840380  lw          $a0, 0x380($s4)
    ctx->pc = 0x255ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x255cac: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x255cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255cb0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x255CB0u;
    {
        const bool branch_taken_0x255cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x255CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255CB0u;
            // 0x255cb4: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255cb0) {
            ctx->pc = 0x255C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255c94;
        }
    }
    ctx->pc = 0x255CB8u;
    // 0x255cb8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x255cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x255cbc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x255cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x255cc0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x255cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x255cc4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x255cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x255cc8: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x255cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255ccc: 0xc041c5c  jal         func_107170
    ctx->pc = 0x255CCCu;
    SET_GPR_U32(ctx, 31, 0x255CD4u);
    ctx->pc = 0x255CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255CCCu;
            // 0x255cd0: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CD4u; }
        if (ctx->pc != 0x255CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CD4u; }
        if (ctx->pc != 0x255CD4u) { return; }
    }
    ctx->pc = 0x255CD4u;
label_255cd4:
    // 0x255cd4: 0x8e820380  lw          $v0, 0x380($s4)
    ctx->pc = 0x255cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x255cd8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x255cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x255cdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x255cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x255ce0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x255ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x255ce4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x255ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x255ce8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x255ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x255cec: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x255cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x255cf0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x255CF0u;
    SET_GPR_U32(ctx, 31, 0x255CF8u);
    ctx->pc = 0x255CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x255CF0u;
            // 0x255cf4: 0x24640070  addiu       $a0, $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CF8u; }
        if (ctx->pc != 0x255CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x255CF8u; }
        if (ctx->pc != 0x255CF8u) { return; }
    }
    ctx->pc = 0x255CF8u;
label_255cf8:
    // 0x255cf8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x255cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255cfc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x255cfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x255d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255d08: 0xe680038c  swc1        $f0, 0x38C($s4)
    ctx->pc = 0x255d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 908), bits); }
    // 0x255d0c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x255d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255d10: 0xe6800390  swc1        $f0, 0x390($s4)
    ctx->pc = 0x255d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 912), bits); }
    // 0x255d14: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x255d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255d18: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x255D18u;
    {
        const bool branch_taken_0x255d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D18u;
            // 0x255d1c: 0xe6800394  swc1        $f0, 0x394($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 916), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d18) {
            ctx->pc = 0x255D94u;
            goto label_255d94;
        }
    }
    ctx->pc = 0x255D20u;
label_255d20:
    // 0x255d20: 0x15200007  bnez        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x255D20u;
    {
        const bool branch_taken_0x255d20 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x255d20) {
            ctx->pc = 0x255D40u;
            goto label_255d40;
        }
    }
    ctx->pc = 0x255D28u;
    // 0x255d28: 0x2862021  addu        $a0, $s4, $a2
    ctx->pc = 0x255d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x255d2c: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x255d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x255d30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x255d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x255d34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x255d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255d38: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x255D38u;
    {
        const bool branch_taken_0x255d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D38u;
            // 0x255d3c: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d38) {
            ctx->pc = 0x255D88u;
            goto label_255d88;
        }
    }
    ctx->pc = 0x255D40u;
label_255d40:
    // 0x255d40: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x255d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x255d44: 0x15230007  bne         $t1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x255D44u;
    {
        const bool branch_taken_0x255d44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 3));
        ctx->pc = 0x255D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D44u;
            // 0x255d48: 0x2862821  addu        $a1, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d44) {
            ctx->pc = 0x255D64u;
            goto label_255d64;
        }
    }
    ctx->pc = 0x255D4Cu;
    // 0x255d4c: 0x8ca4ffc8  lw          $a0, -0x38($a1)
    ctx->pc = 0x255d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967240)));
    // 0x255d50: 0x8ca3ffcc  lw          $v1, -0x34($a1)
    ctx->pc = 0x255d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967244)));
    // 0x255d54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x255d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x255d58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x255d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x255d5c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x255D5Cu;
    {
        const bool branch_taken_0x255d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255D5Cu;
            // 0x255d60: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255d5c) {
            ctx->pc = 0x255D88u;
            goto label_255d88;
        }
    }
    ctx->pc = 0x255D64u;
label_255d64:
    // 0x255d64: 0x0  nop
    ctx->pc = 0x255d64u;
    // NOP
    // 0x255d68: 0x2864021  addu        $t0, $s4, $a2
    ctx->pc = 0x255d68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x255d6c: 0x8d05ffc8  lw          $a1, -0x38($t0)
    ctx->pc = 0x255d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967240)));
    // 0x255d70: 0x2471821  addu        $v1, $s2, $a3
    ctx->pc = 0x255d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x255d74: 0x8d04ffcc  lw          $a0, -0x34($t0)
    ctx->pc = 0x255d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967244)));
    // 0x255d78: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x255d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x255d7c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x255d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x255d80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x255d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255d84: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x255d84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_255d88:
    // 0x255d88: 0x24c60038  addiu       $a2, $a2, 0x38
    ctx->pc = 0x255d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 56));
    // 0x255d8c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x255d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x255d90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x255d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_255d94:
    // 0x255d94: 0x0  nop
    ctx->pc = 0x255d94u;
    // NOP
    // 0x255d98: 0x8e840380  lw          $a0, 0x380($s4)
    ctx->pc = 0x255d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x255d9c: 0x124182a  slt         $v1, $t1, $a0
    ctx->pc = 0x255d9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255da0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x255DA0u;
    {
        const bool branch_taken_0x255da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255da0) {
            ctx->pc = 0x255D20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255d20;
        }
    }
    ctx->pc = 0x255DA8u;
    // 0x255da8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x255da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x255dac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x255dacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255db0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x255db0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x255db4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x255db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255db8: 0x3c04c040  lui         $a0, 0xC040
    ctx->pc = 0x255db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49216 << 16));
    // 0x255dbc: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x255dbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x255dc0: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x255dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
    // 0x255dc4: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x255dc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x255dc8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x255DC8u;
    {
        const bool branch_taken_0x255dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255DC8u;
            // 0x255dcc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dc8) {
            ctx->pc = 0x255EE8u;
            goto label_255ee8;
        }
    }
    ctx->pc = 0x255DD0u;
label_255dd0:
    // 0x255dd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x255dd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255dd4: 0x2896021  addu        $t4, $s4, $t1
    ctx->pc = 0x255dd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 9)));
    // 0x255dd8: 0x11d2821  addu        $a1, $t0, $sp
    ctx->pc = 0x255dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 29)));
label_255ddc:
    // 0x255ddc: 0x0  nop
    ctx->pc = 0x255ddcu;
    // NOP
    // 0x255de0: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x255de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x255de4: 0x248a0070  addiu       $t2, $a0, 0x70
    ctx->pc = 0x255de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x255de8: 0xc5490010  lwc1        $f9, 0x10($t2)
    ctx->pc = 0x255de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x255dec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x255DECu;
    {
        const bool branch_taken_0x255dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x255DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255DECu;
            // 0x255df0: 0xc5400000  lwc1        $f0, 0x0($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255dec) {
            ctx->pc = 0x255DFCu;
            goto label_255dfc;
        }
    }
    ctx->pc = 0x255DF4u;
    // 0x255df4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x255DF4u;
    {
        const bool branch_taken_0x255df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255DF4u;
            // 0x255df8: 0x46004a01  sub.s       $f8, $f9, $f0 (Delay Slot)
        ctx->f[8] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255df4) {
            ctx->pc = 0x255E38u;
            goto label_255e38;
        }
    }
    ctx->pc = 0x255DFCu;
label_255dfc:
    // 0x255dfc: 0x8d840004  lw          $a0, 0x4($t4)
    ctx->pc = 0x255dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x255e00: 0xc546fff0  lwc1        $f6, -0x10($t2)
    ctx->pc = 0x255e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x255e04: 0x8d8bffcc  lw          $t3, -0x34($t4)
    ctx->pc = 0x255e04u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967244)));
    // 0x255e08: 0x46004901  sub.s       $f4, $f9, $f0
    ctx->pc = 0x255e08u;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x255e0c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x255e0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255e10: 0x46060181  sub.s       $f6, $f0, $f6
    ctx->pc = 0x255e10u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x255e14: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x255e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x255e18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x255e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x255e1c: 0x4606101a  mula.s      $f2, $f6
    ctx->pc = 0x255e1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x255e20: 0x448b3000  mtc1        $t3, $f6
    ctx->pc = 0x255e20u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x255e24: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x255e24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255e28: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x255e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x255e2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x255e2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x255e30: 0x4604311c  madd.s      $f4, $f6, $f4
    ctx->pc = 0x255e30u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
    // 0x255e34: 0x46022203  div.s       $f8, $f4, $f2
    ctx->pc = 0x255e34u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
label_255e38:
    // 0x255e38: 0x8e840380  lw          $a0, 0x380($s4)
    ctx->pc = 0x255e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x255e3c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x255e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x255e40: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255E40u;
    {
        const bool branch_taken_0x255e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x255e40) {
            ctx->pc = 0x255E54u;
            goto label_255e54;
        }
    }
    ctx->pc = 0x255E48u;
    // 0x255e48: 0xc5420020  lwc1        $f2, 0x20($t2)
    ctx->pc = 0x255e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255e4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x255E4Cu;
    {
        const bool branch_taken_0x255e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255E4Cu;
            // 0x255e50: 0x46091181  sub.s       $f6, $f2, $f9 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x255e4c) {
            ctx->pc = 0x255E94u;
            goto label_255e94;
        }
    }
    ctx->pc = 0x255E54u;
label_255e54:
    // 0x255e54: 0xc5440020  lwc1        $f4, 0x20($t2)
    ctx->pc = 0x255e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x255e58: 0x8d8b0004  lw          $t3, 0x4($t4)
    ctx->pc = 0x255e58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x255e5c: 0x46004881  sub.s       $f2, $f9, $f0
    ctx->pc = 0x255e5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x255e60: 0x8d8a003c  lw          $t2, 0x3C($t4)
    ctx->pc = 0x255e60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 60)));
    // 0x255e64: 0x460921c1  sub.s       $f7, $f4, $f9
    ctx->pc = 0x255e64u;
    ctx->f[7] = FPU_SUB_S(ctx->f[4], ctx->f[9]);
    // 0x255e68: 0x448b3000  mtc1        $t3, $f6
    ctx->pc = 0x255e68u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x255e6c: 0x448a2000  mtc1        $t2, $f4
    ctx->pc = 0x255e6cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x255e70: 0x16a2021  addu        $a0, $t3, $t2
    ctx->pc = 0x255e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x255e74: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x255e74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x255e78: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x255e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x255e7c: 0x4607301a  mula.s      $f6, $f7
    ctx->pc = 0x255e7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
    // 0x255e80: 0x4602211c  madd.s      $f4, $f4, $f2
    ctx->pc = 0x255e80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[2]));
    // 0x255e84: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x255e84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x255e88: 0x0  nop
    ctx->pc = 0x255e88u;
    // NOP
    // 0x255e8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x255e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x255e90: 0x46022183  div.s       $f6, $f4, $f2
    ctx->pc = 0x255e90u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
label_255e94:
    // 0x255e94: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x255e94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x255e98: 0x1875021  addu        $t2, $t4, $a3
    ctx->pc = 0x255e98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x255e9c: 0x4609089d  msub.s      $f2, $f1, $f9
    ctx->pc = 0x255e9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[9]));
    // 0x255ea0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x255ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x255ea4: 0x46024080  add.s       $f2, $f8, $f2
    ctx->pc = 0x255ea4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[2]);
    // 0x255ea8: 0x28c40003  slti        $a0, $a2, 0x3
    ctx->pc = 0x255ea8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x255eac: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x255eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x255eb0: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x255eb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x255eb4: 0xe5420008  swc1        $f2, 0x8($t2)
    ctx->pc = 0x255eb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x255eb8: 0x46091882  mul.s       $f2, $f3, $f9
    ctx->pc = 0x255eb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x255ebc: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x255ebcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x255ec0: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x255ec0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x255ec4: 0x4608089d  msub.s      $f2, $f1, $f8
    ctx->pc = 0x255ec4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x255ec8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x255ec8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x255ecc: 0xe5420014  swc1        $f2, 0x14($t2)
    ctx->pc = 0x255eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x255ed0: 0xe5480020  swc1        $f8, 0x20($t2)
    ctx->pc = 0x255ed0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x255ed4: 0x1480ffc1  bnez        $a0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x255ED4u;
    {
        const bool branch_taken_0x255ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x255ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255ED4u;
            // 0x255ed8: 0xe540002c  swc1        $f0, 0x2C($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ed4) {
            ctx->pc = 0x255DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255ddc;
        }
    }
    ctx->pc = 0x255EDCu;
    // 0x255edc: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x255edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x255ee0: 0x25290038  addiu       $t1, $t1, 0x38
    ctx->pc = 0x255ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 56));
    // 0x255ee4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x255ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_255ee8:
    // 0x255ee8: 0x8e840380  lw          $a0, 0x380($s4)
    ctx->pc = 0x255ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x255eec: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x255eecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x255ef0: 0x1480ffb7  bnez        $a0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x255EF0u;
    {
        const bool branch_taken_0x255ef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x255EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255EF0u;
            // 0x255ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255ef0) {
            ctx->pc = 0x255DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_255dd0;
        }
    }
    ctx->pc = 0x255EF8u;
label_255ef8:
    // 0x255ef8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x255ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x255efc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x255efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x255f00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x255f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x255f04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x255f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x255f08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x255f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255f0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x255f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255f10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x255f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255f14: 0x3e00008  jr          $ra
    ctx->pc = 0x255F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x255F14u;
            // 0x255f18: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x255F1Cu;
}
