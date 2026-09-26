#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteExtMotion__11CCharacter2Fv
// Address: 0x174c70 - 0x174e54
void DeleteExtMotion__11CCharacter2Fv_0x174c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteExtMotion__11CCharacter2Fv_0x174c70");
#endif

    switch (ctx->pc) {
        case 0x174c70u: goto label_174c70;
        case 0x174c74u: goto label_174c74;
        case 0x174c78u: goto label_174c78;
        case 0x174c7cu: goto label_174c7c;
        case 0x174c80u: goto label_174c80;
        case 0x174c84u: goto label_174c84;
        case 0x174c88u: goto label_174c88;
        case 0x174c8cu: goto label_174c8c;
        case 0x174c90u: goto label_174c90;
        case 0x174c94u: goto label_174c94;
        case 0x174c98u: goto label_174c98;
        case 0x174c9cu: goto label_174c9c;
        case 0x174ca0u: goto label_174ca0;
        case 0x174ca4u: goto label_174ca4;
        case 0x174ca8u: goto label_174ca8;
        case 0x174cacu: goto label_174cac;
        case 0x174cb0u: goto label_174cb0;
        case 0x174cb4u: goto label_174cb4;
        case 0x174cb8u: goto label_174cb8;
        case 0x174cbcu: goto label_174cbc;
        case 0x174cc0u: goto label_174cc0;
        case 0x174cc4u: goto label_174cc4;
        case 0x174cc8u: goto label_174cc8;
        case 0x174cccu: goto label_174ccc;
        case 0x174cd0u: goto label_174cd0;
        case 0x174cd4u: goto label_174cd4;
        case 0x174cd8u: goto label_174cd8;
        case 0x174cdcu: goto label_174cdc;
        case 0x174ce0u: goto label_174ce0;
        case 0x174ce4u: goto label_174ce4;
        case 0x174ce8u: goto label_174ce8;
        case 0x174cecu: goto label_174cec;
        case 0x174cf0u: goto label_174cf0;
        case 0x174cf4u: goto label_174cf4;
        case 0x174cf8u: goto label_174cf8;
        case 0x174cfcu: goto label_174cfc;
        case 0x174d00u: goto label_174d00;
        case 0x174d04u: goto label_174d04;
        case 0x174d08u: goto label_174d08;
        case 0x174d0cu: goto label_174d0c;
        case 0x174d10u: goto label_174d10;
        case 0x174d14u: goto label_174d14;
        case 0x174d18u: goto label_174d18;
        case 0x174d1cu: goto label_174d1c;
        case 0x174d20u: goto label_174d20;
        case 0x174d24u: goto label_174d24;
        case 0x174d28u: goto label_174d28;
        case 0x174d2cu: goto label_174d2c;
        case 0x174d30u: goto label_174d30;
        case 0x174d34u: goto label_174d34;
        case 0x174d38u: goto label_174d38;
        case 0x174d3cu: goto label_174d3c;
        case 0x174d40u: goto label_174d40;
        case 0x174d44u: goto label_174d44;
        case 0x174d48u: goto label_174d48;
        case 0x174d4cu: goto label_174d4c;
        case 0x174d50u: goto label_174d50;
        case 0x174d54u: goto label_174d54;
        case 0x174d58u: goto label_174d58;
        case 0x174d5cu: goto label_174d5c;
        case 0x174d60u: goto label_174d60;
        case 0x174d64u: goto label_174d64;
        case 0x174d68u: goto label_174d68;
        case 0x174d6cu: goto label_174d6c;
        case 0x174d70u: goto label_174d70;
        case 0x174d74u: goto label_174d74;
        case 0x174d78u: goto label_174d78;
        case 0x174d7cu: goto label_174d7c;
        case 0x174d80u: goto label_174d80;
        case 0x174d84u: goto label_174d84;
        case 0x174d88u: goto label_174d88;
        case 0x174d8cu: goto label_174d8c;
        case 0x174d90u: goto label_174d90;
        case 0x174d94u: goto label_174d94;
        case 0x174d98u: goto label_174d98;
        case 0x174d9cu: goto label_174d9c;
        case 0x174da0u: goto label_174da0;
        case 0x174da4u: goto label_174da4;
        case 0x174da8u: goto label_174da8;
        case 0x174dacu: goto label_174dac;
        case 0x174db0u: goto label_174db0;
        case 0x174db4u: goto label_174db4;
        case 0x174db8u: goto label_174db8;
        case 0x174dbcu: goto label_174dbc;
        case 0x174dc0u: goto label_174dc0;
        case 0x174dc4u: goto label_174dc4;
        case 0x174dc8u: goto label_174dc8;
        case 0x174dccu: goto label_174dcc;
        case 0x174dd0u: goto label_174dd0;
        case 0x174dd4u: goto label_174dd4;
        case 0x174dd8u: goto label_174dd8;
        case 0x174ddcu: goto label_174ddc;
        case 0x174de0u: goto label_174de0;
        case 0x174de4u: goto label_174de4;
        case 0x174de8u: goto label_174de8;
        case 0x174decu: goto label_174dec;
        case 0x174df0u: goto label_174df0;
        case 0x174df4u: goto label_174df4;
        case 0x174df8u: goto label_174df8;
        case 0x174dfcu: goto label_174dfc;
        case 0x174e00u: goto label_174e00;
        case 0x174e04u: goto label_174e04;
        case 0x174e08u: goto label_174e08;
        case 0x174e0cu: goto label_174e0c;
        case 0x174e10u: goto label_174e10;
        case 0x174e14u: goto label_174e14;
        case 0x174e18u: goto label_174e18;
        case 0x174e1cu: goto label_174e1c;
        case 0x174e20u: goto label_174e20;
        case 0x174e24u: goto label_174e24;
        case 0x174e28u: goto label_174e28;
        case 0x174e2cu: goto label_174e2c;
        case 0x174e30u: goto label_174e30;
        case 0x174e34u: goto label_174e34;
        case 0x174e38u: goto label_174e38;
        case 0x174e3cu: goto label_174e3c;
        case 0x174e40u: goto label_174e40;
        case 0x174e44u: goto label_174e44;
        case 0x174e48u: goto label_174e48;
        case 0x174e4cu: goto label_174e4c;
        case 0x174e50u: goto label_174e50;
        default: break;
    }

    ctx->pc = 0x174c70u;

label_174c70:
    // 0x174c70: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x174c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_174c74:
    // 0x174c74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x174c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_174c78:
    // 0x174c78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x174c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_174c7c:
    // 0x174c7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x174c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_174c80:
    // 0x174c80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x174c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_174c84:
    // 0x174c84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x174c84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174c88:
    // 0x174c88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x174c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_174c8c:
    // 0x174c8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_174c90:
    // 0x174c90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x174c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_174c94:
    // 0x174c94: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_174c98:
    // 0x174c98: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x174c98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174c9c:
    // 0x174c9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_174ca0:
    // 0x174ca0: 0x24110014  addiu       $s1, $zero, 0x14
    ctx->pc = 0x174ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_174ca4:
    // 0x174ca4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x174ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174ca8:
    // 0x174ca8: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x174ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_174cac:
    // 0x174cac: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x174cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_174cb0:
    // 0x174cb0: 0xac4003d0  sw          $zero, 0x3D0($v0)
    ctx->pc = 0x174cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 976), GPR_U32(ctx, 0));
label_174cb4:
    // 0x174cb4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174cb8:
    // 0x174cb8: 0xac400470  sw          $zero, 0x470($v0)
    ctx->pc = 0x174cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1136), GPR_U32(ctx, 0));
label_174cbc:
    // 0x174cbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174cc0:
    // 0x174cc0: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x174cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
label_174cc4:
    // 0x174cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174cc8:
    // 0x174cc8: 0xac600530  sw          $zero, 0x530($v1)
    ctx->pc = 0x174cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1328), GPR_U32(ctx, 0));
label_174ccc:
    // 0x174ccc: 0xc05d290  jal         func_174A40
label_174cd0:
    if (ctx->pc == 0x174CD0u) {
        ctx->pc = 0x174CD0u;
            // 0x174cd0: 0xac600550  sw          $zero, 0x550($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1360), GPR_U32(ctx, 0));
        ctx->pc = 0x174CD4u;
        goto label_174cd4;
    }
    ctx->pc = 0x174CCCu;
    SET_GPR_U32(ctx, 31, 0x174CD4u);
    ctx->pc = 0x174CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174CCCu;
            // 0x174cd0: 0xac600550  sw          $zero, 0x550($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174A40u;
    if (runtime->hasFunction(0x174A40u)) {
        auto targetFn = runtime->lookupFunction(0x174A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD4u; }
        if (ctx->pc != 0x174CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListIndexPtr__11CCharacter2FiPi_0x174a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174CD4u; }
        if (ctx->pc != 0x174CD4u) { return; }
    }
    ctx->pc = 0x174CD4u;
label_174cd4:
    // 0x174cd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174cd8:
    // 0x174cd8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_174cdc:
    if (ctx->pc == 0x174CDCu) {
        ctx->pc = 0x174CE0u;
        goto label_174ce0;
    }
    ctx->pc = 0x174CD8u;
    {
        const bool branch_taken_0x174cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cd8) {
            ctx->pc = 0x174CF4u;
            goto label_174cf4;
        }
    }
    ctx->pc = 0x174CE0u;
label_174ce0:
    // 0x174ce0: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x174ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_174ce4:
    // 0x174ce4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174ce8:
    // 0x174ce8: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x174ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_174cec:
    // 0x174cec: 0x320f809  jalr        $t9
label_174cf0:
    if (ctx->pc == 0x174CF0u) {
        ctx->pc = 0x174CF0u;
            // 0x174cf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x174CF4u;
        goto label_174cf4;
    }
    ctx->pc = 0x174CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x174CF4u);
        ctx->pc = 0x174CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174CECu;
            // 0x174cf0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174CF4u; }
            if (ctx->pc != 0x174CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x174CF4u;
label_174cf4:
    // 0x174cf4: 0x0  nop
    ctx->pc = 0x174cf4u;
    // NOP
label_174cf8:
    // 0x174cf8: 0x8ec30368  lw          $v1, 0x368($s6)
    ctx->pc = 0x174cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 872)));
label_174cfc:
    // 0x174cfc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_174d00:
    if (ctx->pc == 0x174D00u) {
        ctx->pc = 0x174D04u;
        goto label_174d04;
    }
    ctx->pc = 0x174CFCu;
    {
        const bool branch_taken_0x174cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x174cfc) {
            ctx->pc = 0x174D18u;
            goto label_174d18;
        }
    }
    ctx->pc = 0x174D04u;
label_174d04:
    // 0x174d04: 0xaec30394  sw          $v1, 0x394($s6)
    ctx->pc = 0x174d04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 916), GPR_U32(ctx, 3));
label_174d08:
    // 0x174d08: 0x8ec30368  lw          $v1, 0x368($s6)
    ctx->pc = 0x174d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 872)));
label_174d0c:
    // 0x174d0c: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x174d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_174d10:
    // 0x174d10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_174d14:
    // 0x174d14: 0xe6c00388  swc1        $f0, 0x388($s6)
    ctx->pc = 0x174d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 904), bits); }
label_174d18:
    // 0x174d18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x174d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_174d1c:
    // 0x174d1c: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x174d1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_174d20:
    // 0x174d20: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_174d24:
    // 0x174d24: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_174d28:
    if (ctx->pc == 0x174D28u) {
        ctx->pc = 0x174D28u;
            // 0x174d28: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x174D2Cu;
        goto label_174d2c;
    }
    ctx->pc = 0x174D24u;
    {
        const bool branch_taken_0x174d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D24u;
            // 0x174d28: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d24) {
            ctx->pc = 0x174CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174ca8;
        }
    }
    ctx->pc = 0x174D2Cu;
label_174d2c:
    // 0x174d2c: 0x8ed102e0  lw          $s1, 0x2E0($s6)
    ctx->pc = 0x174d2cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 736)));
label_174d30:
    // 0x174d30: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x174d30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_174d34:
    // 0x174d34: 0x1a20000e  blez        $s1, . + 4 + (0xE << 2)
label_174d38:
    if (ctx->pc == 0x174D38u) {
        ctx->pc = 0x174D38u;
            // 0x174d38: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x174D3Cu;
        goto label_174d3c;
    }
    ctx->pc = 0x174D34u;
    {
        const bool branch_taken_0x174d34 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x174D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D34u;
            // 0x174d38: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d34) {
            ctx->pc = 0x174D70u;
            goto label_174d70;
        }
    }
    ctx->pc = 0x174D3Cu;
label_174d3c:
    // 0x174d3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_174d40:
    if (ctx->pc == 0x174D40u) {
        ctx->pc = 0x174D44u;
        goto label_174d44;
    }
    ctx->pc = 0x174D3Cu;
    {
        const bool branch_taken_0x174d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x174d3c) {
            ctx->pc = 0x174D58u;
            goto label_174d58;
        }
    }
    ctx->pc = 0x174D44u;
label_174d44:
    // 0x174d44: 0x8ec502e4  lw          $a1, 0x2E4($s6)
    ctx->pc = 0x174d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 740)));
label_174d48:
    // 0x174d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174d4c:
    // 0x174d4c: 0xc04bc40  jal         func_12F100
label_174d50:
    if (ctx->pc == 0x174D50u) {
        ctx->pc = 0x174D50u;
            // 0x174d50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174D54u;
        goto label_174d54;
    }
    ctx->pc = 0x174D4Cu;
    SET_GPR_U32(ctx, 31, 0x174D54u);
    ctx->pc = 0x174D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D4Cu;
            // 0x174d50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F100u;
    if (runtime->hasFunction(0x12F100u)) {
        auto targetFn = runtime->lookupFunction(0x12F100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D54u; }
        if (ctx->pc != 0x174D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnimeGroup__17mgCTextureManagerFii_0x12f100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D54u; }
        if (ctx->pc != 0x174D54u) { return; }
    }
    ctx->pc = 0x174D54u;
label_174d54:
    // 0x174d54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x174d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174d58:
    // 0x174d58: 0x8ec302dc  lw          $v1, 0x2DC($s6)
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 732)));
label_174d5c:
    // 0x174d5c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x174d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_174d60:
    // 0x174d60: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_174d64:
    if (ctx->pc == 0x174D64u) {
        ctx->pc = 0x174D68u;
        goto label_174d68;
    }
    ctx->pc = 0x174D60u;
    {
        const bool branch_taken_0x174d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174d60) {
            ctx->pc = 0x174D44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174d44;
        }
    }
    ctx->pc = 0x174D68u;
label_174d68:
    // 0x174d68: 0x10000005  b           . + 4 + (0x5 << 2)
label_174d6c:
    if (ctx->pc == 0x174D6Cu) {
        ctx->pc = 0x174D6Cu;
            // 0x174d6c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174D70u;
        goto label_174d70;
    }
    ctx->pc = 0x174D68u;
    {
        const bool branch_taken_0x174d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D68u;
            // 0x174d6c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d68) {
            ctx->pc = 0x174D80u;
            goto label_174d80;
        }
    }
    ctx->pc = 0x174D70u;
label_174d70:
    // 0x174d70: 0x8ec502e4  lw          $a1, 0x2E4($s6)
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 740)));
label_174d74:
    // 0x174d74: 0xc04bc54  jal         func_12F150
label_174d78:
    if (ctx->pc == 0x174D78u) {
        ctx->pc = 0x174D78u;
            // 0x174d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174D7Cu;
        goto label_174d7c;
    }
    ctx->pc = 0x174D74u;
    SET_GPR_U32(ctx, 31, 0x174D7Cu);
    ctx->pc = 0x174D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174D74u;
            // 0x174d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F150u;
    if (runtime->hasFunction(0x12F150u)) {
        auto targetFn = runtime->lookupFunction(0x12F150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D7Cu; }
        if (ctx->pc != 0x174D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexAnime__17mgCTextureManagerFi_0x12f150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D7Cu; }
        if (ctx->pc != 0x174D7Cu) { return; }
    }
    ctx->pc = 0x174D7Cu;
label_174d7c:
    // 0x174d7c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x174d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174d80:
    // 0x174d80: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x174d80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174d84:
    // 0x174d84: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x174d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_174d88:
    // 0x174d88: 0x8c7502c4  lw          $s5, 0x2C4($v1)
    ctx->pc = 0x174d88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 708)));
label_174d8c:
    // 0x174d8c: 0x12a00013  beqz        $s5, . + 4 + (0x13 << 2)
label_174d90:
    if (ctx->pc == 0x174D90u) {
        ctx->pc = 0x174D90u;
            // 0x174d90: 0x247702c4  addiu       $s7, $v1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 708));
        ctx->pc = 0x174D94u;
        goto label_174d94;
    }
    ctx->pc = 0x174D8Cu;
    {
        const bool branch_taken_0x174d8c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D8Cu;
            // 0x174d90: 0x247702c4  addiu       $s7, $v1, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d8c) {
            ctx->pc = 0x174DDCu;
            goto label_174ddc;
        }
    }
    ctx->pc = 0x174D94u;
label_174d94:
    // 0x174d94: 0x26b10010  addiu       $s1, $s5, 0x10
    ctx->pc = 0x174d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_174d98:
    // 0x174d98: 0x1000000b  b           . + 4 + (0xB << 2)
label_174d9c:
    if (ctx->pc == 0x174D9Cu) {
        ctx->pc = 0x174D9Cu;
            // 0x174d9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174DA0u;
        goto label_174da0;
    }
    ctx->pc = 0x174D98u;
    {
        const bool branch_taken_0x174d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174D98u;
            // 0x174d9c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174d98) {
            ctx->pc = 0x174DC8u;
            goto label_174dc8;
        }
    }
    ctx->pc = 0x174DA0u;
label_174da0:
    // 0x174da0: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x174da0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_174da4:
    // 0x174da4: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_174da8:
    // 0x174da8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_174dac:
    if (ctx->pc == 0x174DACu) {
        ctx->pc = 0x174DB0u;
        goto label_174db0;
    }
    ctx->pc = 0x174DA8u;
    {
        const bool branch_taken_0x174da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x174da8) {
            ctx->pc = 0x174DC0u;
            goto label_174dc0;
        }
    }
    ctx->pc = 0x174DB0u;
label_174db0:
    // 0x174db0: 0x8ec602e4  lw          $a2, 0x2E4($s6)
    ctx->pc = 0x174db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 740)));
label_174db4:
    // 0x174db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174db8:
    // 0x174db8: 0xc04b93c  jal         func_12E4F0
label_174dbc:
    if (ctx->pc == 0x174DBCu) {
        ctx->pc = 0x174DBCu;
            // 0x174dbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174DC0u;
        goto label_174dc0;
    }
    ctx->pc = 0x174DB8u;
    SET_GPR_U32(ctx, 31, 0x174DC0u);
    ctx->pc = 0x174DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174DB8u;
            // 0x174dbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4F0u;
    if (runtime->hasFunction(0x12E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC0u; }
        if (ctx->pc != 0x174DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteTexture__17mgCTextureManagerFPci_0x12e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DC0u; }
        if (ctx->pc != 0x174DC0u) { return; }
    }
    ctx->pc = 0x174DC0u;
label_174dc0:
    // 0x174dc0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x174dc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_174dc4:
    // 0x174dc4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_174dc8:
    // 0x174dc8: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_174dcc:
    // 0x174dcc: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x174dccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_174dd0:
    // 0x174dd0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_174dd4:
    if (ctx->pc == 0x174DD4u) {
        ctx->pc = 0x174DD8u;
        goto label_174dd8;
    }
    ctx->pc = 0x174DD0u;
    {
        const bool branch_taken_0x174dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x174dd0) {
            ctx->pc = 0x174DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174da0;
        }
    }
    ctx->pc = 0x174DD8u;
label_174dd8:
    // 0x174dd8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x174dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_174ddc:
    // 0x174ddc: 0x0  nop
    ctx->pc = 0x174ddcu;
    // NOP
label_174de0:
    // 0x174de0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174de4:
    // 0x174de4: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x174de4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_174de8:
    // 0x174de8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
label_174dec:
    if (ctx->pc == 0x174DECu) {
        ctx->pc = 0x174DECu;
            // 0x174dec: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x174DF0u;
        goto label_174df0;
    }
    ctx->pc = 0x174DE8u;
    {
        const bool branch_taken_0x174de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x174DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174DE8u;
            // 0x174dec: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174de8) {
            ctx->pc = 0x174D84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_174d84;
        }
    }
    ctx->pc = 0x174DF0u;
label_174df0:
    // 0x174df0: 0xaec005a8  sw          $zero, 0x5A8($s6)
    ctx->pc = 0x174df0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1448), GPR_U32(ctx, 0));
label_174df4:
    // 0x174df4: 0xaec005c8  sw          $zero, 0x5C8($s6)
    ctx->pc = 0x174df4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1480), GPR_U32(ctx, 0));
label_174df8:
    // 0x174df8: 0xaec005ac  sw          $zero, 0x5AC($s6)
    ctx->pc = 0x174df8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1452), GPR_U32(ctx, 0));
label_174dfc:
    // 0x174dfc: 0xaec005cc  sw          $zero, 0x5CC($s6)
    ctx->pc = 0x174dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1484), GPR_U32(ctx, 0));
label_174e00:
    // 0x174e00: 0xaec005b0  sw          $zero, 0x5B0($s6)
    ctx->pc = 0x174e00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1456), GPR_U32(ctx, 0));
label_174e04:
    // 0x174e04: 0xaec005d0  sw          $zero, 0x5D0($s6)
    ctx->pc = 0x174e04u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1488), GPR_U32(ctx, 0));
label_174e08:
    // 0x174e08: 0xaec005b4  sw          $zero, 0x5B4($s6)
    ctx->pc = 0x174e08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1460), GPR_U32(ctx, 0));
label_174e0c:
    // 0x174e0c: 0xaec005d4  sw          $zero, 0x5D4($s6)
    ctx->pc = 0x174e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1492), GPR_U32(ctx, 0));
label_174e10:
    // 0x174e10: 0xaec005b8  sw          $zero, 0x5B8($s6)
    ctx->pc = 0x174e10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1464), GPR_U32(ctx, 0));
label_174e14:
    // 0x174e14: 0xaec005d8  sw          $zero, 0x5D8($s6)
    ctx->pc = 0x174e14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1496), GPR_U32(ctx, 0));
label_174e18:
    // 0x174e18: 0xaec005bc  sw          $zero, 0x5BC($s6)
    ctx->pc = 0x174e18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1468), GPR_U32(ctx, 0));
label_174e1c:
    // 0x174e1c: 0xaec005dc  sw          $zero, 0x5DC($s6)
    ctx->pc = 0x174e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1500), GPR_U32(ctx, 0));
label_174e20:
    // 0x174e20: 0xaec005c0  sw          $zero, 0x5C0($s6)
    ctx->pc = 0x174e20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1472), GPR_U32(ctx, 0));
label_174e24:
    // 0x174e24: 0xaec005e0  sw          $zero, 0x5E0($s6)
    ctx->pc = 0x174e24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 1504), GPR_U32(ctx, 0));
label_174e28:
    // 0x174e28: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x174e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_174e2c:
    // 0x174e2c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x174e2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_174e30:
    // 0x174e30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x174e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_174e34:
    // 0x174e34: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x174e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_174e38:
    // 0x174e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x174e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_174e3c:
    // 0x174e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x174e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_174e40:
    // 0x174e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174e44:
    // 0x174e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_174e48:
    // 0x174e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_174e4c:
    // 0x174e4c: 0x3e00008  jr          $ra
label_174e50:
    if (ctx->pc == 0x174E50u) {
        ctx->pc = 0x174E50u;
            // 0x174e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x174E54u;
        goto label_fallthrough_0x174e4c;
    }
    ctx->pc = 0x174E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174E4Cu;
            // 0x174e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x174e4c:
    ctx->pc = 0x174E54u;
}
