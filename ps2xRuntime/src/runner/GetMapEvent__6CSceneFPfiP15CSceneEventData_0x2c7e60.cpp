#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMapEvent__6CSceneFPfiP15CSceneEventData
// Address: 0x2c7e60 - 0x2c8064
void GetMapEvent__6CSceneFPfiP15CSceneEventData_0x2c7e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMapEvent__6CSceneFPfiP15CSceneEventData_0x2c7e60");
#endif

    switch (ctx->pc) {
        case 0x2c7e60u: goto label_2c7e60;
        case 0x2c7e64u: goto label_2c7e64;
        case 0x2c7e68u: goto label_2c7e68;
        case 0x2c7e6cu: goto label_2c7e6c;
        case 0x2c7e70u: goto label_2c7e70;
        case 0x2c7e74u: goto label_2c7e74;
        case 0x2c7e78u: goto label_2c7e78;
        case 0x2c7e7cu: goto label_2c7e7c;
        case 0x2c7e80u: goto label_2c7e80;
        case 0x2c7e84u: goto label_2c7e84;
        case 0x2c7e88u: goto label_2c7e88;
        case 0x2c7e8cu: goto label_2c7e8c;
        case 0x2c7e90u: goto label_2c7e90;
        case 0x2c7e94u: goto label_2c7e94;
        case 0x2c7e98u: goto label_2c7e98;
        case 0x2c7e9cu: goto label_2c7e9c;
        case 0x2c7ea0u: goto label_2c7ea0;
        case 0x2c7ea4u: goto label_2c7ea4;
        case 0x2c7ea8u: goto label_2c7ea8;
        case 0x2c7eacu: goto label_2c7eac;
        case 0x2c7eb0u: goto label_2c7eb0;
        case 0x2c7eb4u: goto label_2c7eb4;
        case 0x2c7eb8u: goto label_2c7eb8;
        case 0x2c7ebcu: goto label_2c7ebc;
        case 0x2c7ec0u: goto label_2c7ec0;
        case 0x2c7ec4u: goto label_2c7ec4;
        case 0x2c7ec8u: goto label_2c7ec8;
        case 0x2c7eccu: goto label_2c7ecc;
        case 0x2c7ed0u: goto label_2c7ed0;
        case 0x2c7ed4u: goto label_2c7ed4;
        case 0x2c7ed8u: goto label_2c7ed8;
        case 0x2c7edcu: goto label_2c7edc;
        case 0x2c7ee0u: goto label_2c7ee0;
        case 0x2c7ee4u: goto label_2c7ee4;
        case 0x2c7ee8u: goto label_2c7ee8;
        case 0x2c7eecu: goto label_2c7eec;
        case 0x2c7ef0u: goto label_2c7ef0;
        case 0x2c7ef4u: goto label_2c7ef4;
        case 0x2c7ef8u: goto label_2c7ef8;
        case 0x2c7efcu: goto label_2c7efc;
        case 0x2c7f00u: goto label_2c7f00;
        case 0x2c7f04u: goto label_2c7f04;
        case 0x2c7f08u: goto label_2c7f08;
        case 0x2c7f0cu: goto label_2c7f0c;
        case 0x2c7f10u: goto label_2c7f10;
        case 0x2c7f14u: goto label_2c7f14;
        case 0x2c7f18u: goto label_2c7f18;
        case 0x2c7f1cu: goto label_2c7f1c;
        case 0x2c7f20u: goto label_2c7f20;
        case 0x2c7f24u: goto label_2c7f24;
        case 0x2c7f28u: goto label_2c7f28;
        case 0x2c7f2cu: goto label_2c7f2c;
        case 0x2c7f30u: goto label_2c7f30;
        case 0x2c7f34u: goto label_2c7f34;
        case 0x2c7f38u: goto label_2c7f38;
        case 0x2c7f3cu: goto label_2c7f3c;
        case 0x2c7f40u: goto label_2c7f40;
        case 0x2c7f44u: goto label_2c7f44;
        case 0x2c7f48u: goto label_2c7f48;
        case 0x2c7f4cu: goto label_2c7f4c;
        case 0x2c7f50u: goto label_2c7f50;
        case 0x2c7f54u: goto label_2c7f54;
        case 0x2c7f58u: goto label_2c7f58;
        case 0x2c7f5cu: goto label_2c7f5c;
        case 0x2c7f60u: goto label_2c7f60;
        case 0x2c7f64u: goto label_2c7f64;
        case 0x2c7f68u: goto label_2c7f68;
        case 0x2c7f6cu: goto label_2c7f6c;
        case 0x2c7f70u: goto label_2c7f70;
        case 0x2c7f74u: goto label_2c7f74;
        case 0x2c7f78u: goto label_2c7f78;
        case 0x2c7f7cu: goto label_2c7f7c;
        case 0x2c7f80u: goto label_2c7f80;
        case 0x2c7f84u: goto label_2c7f84;
        case 0x2c7f88u: goto label_2c7f88;
        case 0x2c7f8cu: goto label_2c7f8c;
        case 0x2c7f90u: goto label_2c7f90;
        case 0x2c7f94u: goto label_2c7f94;
        case 0x2c7f98u: goto label_2c7f98;
        case 0x2c7f9cu: goto label_2c7f9c;
        case 0x2c7fa0u: goto label_2c7fa0;
        case 0x2c7fa4u: goto label_2c7fa4;
        case 0x2c7fa8u: goto label_2c7fa8;
        case 0x2c7facu: goto label_2c7fac;
        case 0x2c7fb0u: goto label_2c7fb0;
        case 0x2c7fb4u: goto label_2c7fb4;
        case 0x2c7fb8u: goto label_2c7fb8;
        case 0x2c7fbcu: goto label_2c7fbc;
        case 0x2c7fc0u: goto label_2c7fc0;
        case 0x2c7fc4u: goto label_2c7fc4;
        case 0x2c7fc8u: goto label_2c7fc8;
        case 0x2c7fccu: goto label_2c7fcc;
        case 0x2c7fd0u: goto label_2c7fd0;
        case 0x2c7fd4u: goto label_2c7fd4;
        case 0x2c7fd8u: goto label_2c7fd8;
        case 0x2c7fdcu: goto label_2c7fdc;
        case 0x2c7fe0u: goto label_2c7fe0;
        case 0x2c7fe4u: goto label_2c7fe4;
        case 0x2c7fe8u: goto label_2c7fe8;
        case 0x2c7fecu: goto label_2c7fec;
        case 0x2c7ff0u: goto label_2c7ff0;
        case 0x2c7ff4u: goto label_2c7ff4;
        case 0x2c7ff8u: goto label_2c7ff8;
        case 0x2c7ffcu: goto label_2c7ffc;
        case 0x2c8000u: goto label_2c8000;
        case 0x2c8004u: goto label_2c8004;
        case 0x2c8008u: goto label_2c8008;
        case 0x2c800cu: goto label_2c800c;
        case 0x2c8010u: goto label_2c8010;
        case 0x2c8014u: goto label_2c8014;
        case 0x2c8018u: goto label_2c8018;
        case 0x2c801cu: goto label_2c801c;
        case 0x2c8020u: goto label_2c8020;
        case 0x2c8024u: goto label_2c8024;
        case 0x2c8028u: goto label_2c8028;
        case 0x2c802cu: goto label_2c802c;
        case 0x2c8030u: goto label_2c8030;
        case 0x2c8034u: goto label_2c8034;
        case 0x2c8038u: goto label_2c8038;
        case 0x2c803cu: goto label_2c803c;
        case 0x2c8040u: goto label_2c8040;
        case 0x2c8044u: goto label_2c8044;
        case 0x2c8048u: goto label_2c8048;
        case 0x2c804cu: goto label_2c804c;
        case 0x2c8050u: goto label_2c8050;
        case 0x2c8054u: goto label_2c8054;
        case 0x2c8058u: goto label_2c8058;
        case 0x2c805cu: goto label_2c805c;
        case 0x2c8060u: goto label_2c8060;
        default: break;
    }

    ctx->pc = 0x2c7e60u;

label_2c7e60:
    // 0x2c7e60: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c7e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2c7e64:
    // 0x2c7e64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2c7e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2c7e68:
    // 0x2c7e68: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c7e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2c7e6c:
    // 0x2c7e6c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c7e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c7e70:
    // 0x2c7e70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c7e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2c7e74:
    // 0x2c7e74: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c7e74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e78:
    // 0x2c7e78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c7e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2c7e7c:
    // 0x2c7e7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c7e7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e80:
    // 0x2c7e80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2c7e84:
    // 0x2c7e84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c7e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e88:
    // 0x2c7e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2c7e8c:
    // 0x2c7e8c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c7e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7e90:
    // 0x2c7e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c7e94:
    // 0x2c7e94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c7e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2c7e98:
    // 0x2c7e98: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c7e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c7e9c:
    // 0x2c7e9c: 0xc0a1214  jal         func_284850
label_2c7ea0:
    if (ctx->pc == 0x2C7EA0u) {
        ctx->pc = 0x2C7EA0u;
            // 0x2c7ea0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2C7EA4u;
        goto label_2c7ea4;
    }
    ctx->pc = 0x2C7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2C7EA4u);
    ctx->pc = 0x2C7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E9Cu;
            // 0x2c7ea0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7EA4u; }
        if (ctx->pc != 0x2C7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7EA4u; }
        if (ctx->pc != 0x2C7EA4u) { return; }
    }
    ctx->pc = 0x2C7EA4u;
label_2c7ea4:
    // 0x2c7ea4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c7ea4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ea8:
    // 0x2c7ea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c7ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7eac:
    // 0x2c7eac: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x2c7eacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2c7eb0:
    // 0x2c7eb0: 0x10200049  beqz        $at, . + 4 + (0x49 << 2)
label_2c7eb4:
    if (ctx->pc == 0x2C7EB4u) {
        ctx->pc = 0x2C7EB4u;
            // 0x2c7eb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EB8u;
        goto label_2c7eb8;
    }
    ctx->pc = 0x2C7EB0u;
    {
        const bool branch_taken_0x2c7eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7EB0u;
            // 0x2c7eb4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7eb0) {
            ctx->pc = 0x2C7FD8u;
            goto label_2c7fd8;
        }
    }
    ctx->pc = 0x2C7EB8u;
label_2c7eb8:
    // 0x2c7eb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c7eb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ebc:
    // 0x2c7ebc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x2c7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_2c7ec0:
    // 0x2c7ec0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c7ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ec4:
    // 0x2c7ec4: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x2c7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_2c7ec8:
    // 0x2c7ec8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c7ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ecc:
    // 0x2c7ecc: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x2c7eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_2c7ed0:
    // 0x2c7ed0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2c7ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2c7ed4:
    // 0x2c7ed4: 0x320f809  jalr        $t9
label_2c7ed8:
    if (ctx->pc == 0x2C7ED8u) {
        ctx->pc = 0x2C7ED8u;
            // 0x2c7ed8: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2C7EDCu;
        goto label_2c7edc;
    }
    ctx->pc = 0x2C7ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C7EDCu);
        ctx->pc = 0x2C7ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7ED4u;
            // 0x2c7ed8: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7EDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7EDCu; }
            if (ctx->pc != 0x2C7EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x2C7EDCu;
label_2c7edc:
    // 0x2c7edc: 0x27a300a4  addiu       $v1, $sp, 0xA4
    ctx->pc = 0x2c7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_2c7ee0:
    // 0x2c7ee0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c7ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7ee4:
    // 0x2c7ee4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_2c7ee8:
    if (ctx->pc == 0x2C7EE8u) {
        ctx->pc = 0x2C7EECu;
        goto label_2c7eec;
    }
    ctx->pc = 0x2C7EE4u;
    {
        const bool branch_taken_0x2c7ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ee4) {
            ctx->pc = 0x2C7EF0u;
            goto label_2c7ef0;
        }
    }
    ctx->pc = 0x2C7EECu;
label_2c7eec:
    // 0x2c7eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7ef0:
    // 0x2c7ef0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2c7ef4:
    if (ctx->pc == 0x2C7EF4u) {
        ctx->pc = 0x2C7EF8u;
        goto label_2c7ef8;
    }
    ctx->pc = 0x2C7EF0u;
    {
        const bool branch_taken_0x2c7ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ef0) {
            ctx->pc = 0x2C7FC8u;
            goto label_2c7fc8;
        }
    }
    ctx->pc = 0x2C7EF8u;
label_2c7ef8:
    // 0x2c7ef8: 0x12600031  beqz        $s3, . + 4 + (0x31 << 2)
label_2c7efc:
    if (ctx->pc == 0x2C7EFCu) {
        ctx->pc = 0x2C7F00u;
        goto label_2c7f00;
    }
    ctx->pc = 0x2C7EF8u;
    {
        const bool branch_taken_0x2c7ef8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7ef8) {
            ctx->pc = 0x2C7FC0u;
            goto label_2c7fc0;
        }
    }
    ctx->pc = 0x2C7F00u;
label_2c7f00:
    // 0x2c7f00: 0x78440180  lq          $a0, 0x180($v0)
    ctx->pc = 0x2c7f00u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 384)));
label_2c7f04:
    // 0x2c7f04: 0x24470038  addiu       $a3, $v0, 0x38
    ctx->pc = 0x2c7f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_2c7f08:
    // 0x2c7f08: 0x26660018  addiu       $a2, $s3, 0x18
    ctx->pc = 0x2c7f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_2c7f0c:
    // 0x2c7f0c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2c7f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c7f10:
    // 0x2c7f10: 0x7e640030  sq          $a0, 0x30($s3)
    ctx->pc = 0x2c7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 4));
label_2c7f14:
    // 0x2c7f14: 0x78440190  lq          $a0, 0x190($v0)
    ctx->pc = 0x2c7f14u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 400)));
label_2c7f18:
    // 0x2c7f18: 0x7e640040  sq          $a0, 0x40($s3)
    ctx->pc = 0x2c7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), GPR_VEC(ctx, 4));
label_2c7f1c:
    // 0x2c7f1c: 0x784401a0  lq          $a0, 0x1A0($v0)
    ctx->pc = 0x2c7f1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 416)));
label_2c7f20:
    // 0x2c7f20: 0x7e640050  sq          $a0, 0x50($s3)
    ctx->pc = 0x2c7f20u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), GPR_VEC(ctx, 4));
label_2c7f24:
    // 0x2c7f24: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2c7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_2c7f28:
    // 0x2c7f28: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2c7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2c7f2c:
    // 0x2c7f2c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2c7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2c7f30:
    // 0x2c7f30: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x2c7f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_2c7f34:
    // 0x2c7f34: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x2c7f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2c7f38:
    // 0x2c7f38: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x2c7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
label_2c7f3c:
    // 0x2c7f3c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c7f40:
    // 0x2c7f40: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x2c7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
label_2c7f44:
    // 0x2c7f44: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2c7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2c7f48:
    // 0x2c7f48: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x2c7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_2c7f4c:
    // 0x2c7f4c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2c7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2c7f50:
    // 0x2c7f50: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2c7f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2c7f54:
    // 0x2c7f54: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x2c7f54u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2c7f58:
    // 0x2c7f58: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2c7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2c7f5c:
    // 0x2c7f5c: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x2c7f5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2c7f60:
    // 0x2c7f60: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x2c7f60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
label_2c7f64:
    // 0x2c7f64: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x2c7f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_2c7f68:
    // 0x2c7f68: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x2c7f68u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c7f6c:
    // 0x2c7f6c: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_2c7f70:
    if (ctx->pc == 0x2C7F70u) {
        ctx->pc = 0x2C7F70u;
            // 0x2c7f70: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x2C7F74u;
        goto label_2c7f74;
    }
    ctx->pc = 0x2C7F6Cu;
    {
        const bool branch_taken_0x2c7f6c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2C7F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7F6Cu;
            // 0x2c7f70: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7f6c) {
            ctx->pc = 0x2C7F54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7f54;
        }
    }
    ctx->pc = 0x2C7F74u;
label_2c7f74:
    // 0x2c7f74: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c7f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2c7f78:
    // 0x2c7f78: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2c7f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2c7f7c:
    // 0x2c7f7c: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x2c7f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_2c7f80:
    // 0x2c7f80: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2c7f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c7f84:
    // 0x2c7f84: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x2c7f84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_2c7f88:
    // 0x2c7f88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c7f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7f8c:
    // 0x2c7f8c: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c7f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_2c7f90:
    // 0x2c7f90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c7f94:
    // 0x2c7f94: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2c7f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2c7f98:
    // 0x2c7f98: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c7f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c7f9c:
    // 0x2c7f9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2c7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2c7fa0:
    // 0x2c7fa0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c7fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2c7fa4:
    // 0x2c7fa4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2c7fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2c7fa8:
    // 0x2c7fa8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_2c7fac:
    if (ctx->pc == 0x2C7FACu) {
        ctx->pc = 0x2C7FACu;
            // 0x2c7fac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2C7FB0u;
        goto label_2c7fb0;
    }
    ctx->pc = 0x2C7FA8u;
    {
        const bool branch_taken_0x2c7fa8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2C7FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FA8u;
            // 0x2c7fac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fa8) {
            ctx->pc = 0x2C7F90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7f90;
        }
    }
    ctx->pc = 0x2C7FB0u;
label_2c7fb0:
    // 0x2c7fb0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2c7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2c7fb4:
    // 0x2c7fb4: 0xae6200b0  sw          $v0, 0xB0($s3)
    ctx->pc = 0x2c7fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
label_2c7fb8:
    // 0x2c7fb8: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x2c7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_2c7fbc:
    // 0x2c7fbc: 0xae6200b4  sw          $v0, 0xB4($s3)
    ctx->pc = 0x2c7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
label_2c7fc0:
    // 0x2c7fc0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2c7fc4:
    if (ctx->pc == 0x2C7FC4u) {
        ctx->pc = 0x2C7FC4u;
            // 0x2c7fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7FC8u;
        goto label_2c7fc8;
    }
    ctx->pc = 0x2C7FC0u;
    {
        const bool branch_taken_0x2c7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FC0u;
            // 0x2c7fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fc0) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C7FC8u;
label_2c7fc8:
    // 0x2c7fc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c7fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c7fcc:
    // 0x2c7fcc: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x2c7fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2c7fd0:
    // 0x2c7fd0: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_2c7fd4:
    if (ctx->pc == 0x2C7FD4u) {
        ctx->pc = 0x2C7FD4u;
            // 0x2c7fd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x2C7FD8u;
        goto label_2c7fd8;
    }
    ctx->pc = 0x2C7FD0u;
    {
        const bool branch_taken_0x2c7fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FD0u;
            // 0x2c7fd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fd0) {
            ctx->pc = 0x2C7EBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7ebc;
        }
    }
    ctx->pc = 0x2C7FD8u;
label_2c7fd8:
    // 0x2c7fd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c7fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fdc:
    // 0x2c7fdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c7fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fe0:
    // 0x2c7fe0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2c7fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7fe4:
    // 0x2c7fe4: 0xc0b2e40  jal         func_2CB900
label_2c7fe8:
    if (ctx->pc == 0x2C7FE8u) {
        ctx->pc = 0x2C7FE8u;
            // 0x2c7fe8: 0xaeb02f60  sw          $s0, 0x2F60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12128), GPR_U32(ctx, 16));
        ctx->pc = 0x2C7FECu;
        goto label_2c7fec;
    }
    ctx->pc = 0x2C7FE4u;
    SET_GPR_U32(ctx, 31, 0x2C7FECu);
    ctx->pc = 0x2C7FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FE4u;
            // 0x2c7fe8: 0xaeb02f60  sw          $s0, 0x2F60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12128), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CB900u;
    if (runtime->hasFunction(0x2CB900u)) {
        auto targetFn = runtime->lookupFunction(0x2CB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FECu; }
        if (ctx->pc != 0x2C7FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameObjectEvent__6CSceneFPfP15CSceneEventData_0x2cb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7FECu; }
        if (ctx->pc != 0x2C7FECu) { return; }
    }
    ctx->pc = 0x2C7FECu;
label_2c7fec:
    // 0x2c7fec: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2c7ff0:
    if (ctx->pc == 0x2C7FF0u) {
        ctx->pc = 0x2C7FF0u;
            // 0x2c7ff0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C7FF4u;
        goto label_2c7ff4;
    }
    ctx->pc = 0x2C7FECu;
    {
        const bool branch_taken_0x2c7fec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C7FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FECu;
            // 0x2c7ff0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7fec) {
            ctx->pc = 0x2C7FFCu;
            goto label_2c7ffc;
        }
    }
    ctx->pc = 0x2C7FF4u;
label_2c7ff4:
    // 0x2c7ff4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2c7ff8:
    if (ctx->pc == 0x2C7FF8u) {
        ctx->pc = 0x2C7FF8u;
            // 0x2c7ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FFCu;
        goto label_2c7ffc;
    }
    ctx->pc = 0x2C7FF4u;
    {
        const bool branch_taken_0x2c7ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FF4u;
            // 0x2c7ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ff4) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C7FFCu;
label_2c7ffc:
    // 0x2c7ffc: 0x12c30003  beq         $s6, $v1, . + 4 + (0x3 << 2)
label_2c8000:
    if (ctx->pc == 0x2C8000u) {
        ctx->pc = 0x2C8000u;
            // 0x2c8000: 0xaea32f60  sw          $v1, 0x2F60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12128), GPR_U32(ctx, 3));
        ctx->pc = 0x2C8004u;
        goto label_2c8004;
    }
    ctx->pc = 0x2C7FFCu;
    {
        const bool branch_taken_0x2c7ffc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C8000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7FFCu;
            // 0x2c8000: 0xaea32f60  sw          $v1, 0x2F60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7ffc) {
            ctx->pc = 0x2C800Cu;
            goto label_2c800c;
        }
    }
    ctx->pc = 0x2C8004u;
label_2c8004:
    // 0x2c8004: 0x1000000c  b           . + 4 + (0xC << 2)
label_2c8008:
    if (ctx->pc == 0x2C8008u) {
        ctx->pc = 0x2C8008u;
            // 0x2c8008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C800Cu;
        goto label_2c800c;
    }
    ctx->pc = 0x2C8004u;
    {
        const bool branch_taken_0x2c8004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8004u;
            // 0x2c8008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8004) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C800Cu;
label_2c800c:
    // 0x2c800c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2c800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_2c8010:
    // 0x2c8010: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2c8014:
    if (ctx->pc == 0x2C8014u) {
        ctx->pc = 0x2C8014u;
            // 0x2c8014: 0x2403007a  addiu       $v1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->pc = 0x2C8018u;
        goto label_2c8018;
    }
    ctx->pc = 0x2C8010u;
    {
        const bool branch_taken_0x2c8010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8010u;
            // 0x2c8014: 0x2403007a  addiu       $v1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8010) {
            ctx->pc = 0x2C8024u;
            goto label_2c8024;
        }
    }
    ctx->pc = 0x2C8018u;
label_2c8018:
    // 0x2c8018: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x2c8018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2c801c:
    // 0x2c801c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2c8020:
    if (ctx->pc == 0x2C8020u) {
        ctx->pc = 0x2C8020u;
            // 0x2c8020: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2C8024u;
        goto label_2c8024;
    }
    ctx->pc = 0x2C801Cu;
    {
        const bool branch_taken_0x2c801c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C801Cu;
            // 0x2c8020: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c801c) {
            ctx->pc = 0x2C8034u;
            goto label_2c8034;
        }
    }
    ctx->pc = 0x2C8024u;
label_2c8024:
    // 0x2c8024: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_2c8028:
    if (ctx->pc == 0x2C8028u) {
        ctx->pc = 0x2C8028u;
            // 0x2c8028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C802Cu;
        goto label_2c802c;
    }
    ctx->pc = 0x2C8024u;
    {
        const bool branch_taken_0x2c8024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C8028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8024u;
            // 0x2c8028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8024) {
            ctx->pc = 0x2C8038u;
            goto label_2c8038;
        }
    }
    ctx->pc = 0x2C802Cu;
label_2c802c:
    // 0x2c802c: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2c802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_2c8030:
    // 0x2c8030: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2c8030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2c8034:
    // 0x2c8034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8038:
    // 0x2c8038: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2c8038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2c803c:
    // 0x2c803c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c803cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c8040:
    // 0x2c8040: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c8040u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c8044:
    // 0x2c8044: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c8044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c8048:
    // 0x2c8048: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c8048u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c804c:
    // 0x2c804c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c804cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8050:
    // 0x2c8050: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c8050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8054:
    // 0x2c8054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c8054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8058:
    // 0x2c8058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c8058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c805c:
    // 0x2c805c: 0x3e00008  jr          $ra
label_2c8060:
    if (ctx->pc == 0x2C8060u) {
        ctx->pc = 0x2C8060u;
            // 0x2c8060: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2C8064u;
        goto label_fallthrough_0x2c805c;
    }
    ctx->pc = 0x2C805Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C805Cu;
            // 0x2c8060: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c805c:
    ctx->pc = 0x2C8064u;
}
