#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DeleteMap__6CSceneFii
// Address: 0x285e70 - 0x286074
void DeleteMap__6CSceneFii_0x285e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteMap__6CSceneFii_0x285e70");
#endif

    switch (ctx->pc) {
        case 0x285e70u: goto label_285e70;
        case 0x285e74u: goto label_285e74;
        case 0x285e78u: goto label_285e78;
        case 0x285e7cu: goto label_285e7c;
        case 0x285e80u: goto label_285e80;
        case 0x285e84u: goto label_285e84;
        case 0x285e88u: goto label_285e88;
        case 0x285e8cu: goto label_285e8c;
        case 0x285e90u: goto label_285e90;
        case 0x285e94u: goto label_285e94;
        case 0x285e98u: goto label_285e98;
        case 0x285e9cu: goto label_285e9c;
        case 0x285ea0u: goto label_285ea0;
        case 0x285ea4u: goto label_285ea4;
        case 0x285ea8u: goto label_285ea8;
        case 0x285eacu: goto label_285eac;
        case 0x285eb0u: goto label_285eb0;
        case 0x285eb4u: goto label_285eb4;
        case 0x285eb8u: goto label_285eb8;
        case 0x285ebcu: goto label_285ebc;
        case 0x285ec0u: goto label_285ec0;
        case 0x285ec4u: goto label_285ec4;
        case 0x285ec8u: goto label_285ec8;
        case 0x285eccu: goto label_285ecc;
        case 0x285ed0u: goto label_285ed0;
        case 0x285ed4u: goto label_285ed4;
        case 0x285ed8u: goto label_285ed8;
        case 0x285edcu: goto label_285edc;
        case 0x285ee0u: goto label_285ee0;
        case 0x285ee4u: goto label_285ee4;
        case 0x285ee8u: goto label_285ee8;
        case 0x285eecu: goto label_285eec;
        case 0x285ef0u: goto label_285ef0;
        case 0x285ef4u: goto label_285ef4;
        case 0x285ef8u: goto label_285ef8;
        case 0x285efcu: goto label_285efc;
        case 0x285f00u: goto label_285f00;
        case 0x285f04u: goto label_285f04;
        case 0x285f08u: goto label_285f08;
        case 0x285f0cu: goto label_285f0c;
        case 0x285f10u: goto label_285f10;
        case 0x285f14u: goto label_285f14;
        case 0x285f18u: goto label_285f18;
        case 0x285f1cu: goto label_285f1c;
        case 0x285f20u: goto label_285f20;
        case 0x285f24u: goto label_285f24;
        case 0x285f28u: goto label_285f28;
        case 0x285f2cu: goto label_285f2c;
        case 0x285f30u: goto label_285f30;
        case 0x285f34u: goto label_285f34;
        case 0x285f38u: goto label_285f38;
        case 0x285f3cu: goto label_285f3c;
        case 0x285f40u: goto label_285f40;
        case 0x285f44u: goto label_285f44;
        case 0x285f48u: goto label_285f48;
        case 0x285f4cu: goto label_285f4c;
        case 0x285f50u: goto label_285f50;
        case 0x285f54u: goto label_285f54;
        case 0x285f58u: goto label_285f58;
        case 0x285f5cu: goto label_285f5c;
        case 0x285f60u: goto label_285f60;
        case 0x285f64u: goto label_285f64;
        case 0x285f68u: goto label_285f68;
        case 0x285f6cu: goto label_285f6c;
        case 0x285f70u: goto label_285f70;
        case 0x285f74u: goto label_285f74;
        case 0x285f78u: goto label_285f78;
        case 0x285f7cu: goto label_285f7c;
        case 0x285f80u: goto label_285f80;
        case 0x285f84u: goto label_285f84;
        case 0x285f88u: goto label_285f88;
        case 0x285f8cu: goto label_285f8c;
        case 0x285f90u: goto label_285f90;
        case 0x285f94u: goto label_285f94;
        case 0x285f98u: goto label_285f98;
        case 0x285f9cu: goto label_285f9c;
        case 0x285fa0u: goto label_285fa0;
        case 0x285fa4u: goto label_285fa4;
        case 0x285fa8u: goto label_285fa8;
        case 0x285facu: goto label_285fac;
        case 0x285fb0u: goto label_285fb0;
        case 0x285fb4u: goto label_285fb4;
        case 0x285fb8u: goto label_285fb8;
        case 0x285fbcu: goto label_285fbc;
        case 0x285fc0u: goto label_285fc0;
        case 0x285fc4u: goto label_285fc4;
        case 0x285fc8u: goto label_285fc8;
        case 0x285fccu: goto label_285fcc;
        case 0x285fd0u: goto label_285fd0;
        case 0x285fd4u: goto label_285fd4;
        case 0x285fd8u: goto label_285fd8;
        case 0x285fdcu: goto label_285fdc;
        case 0x285fe0u: goto label_285fe0;
        case 0x285fe4u: goto label_285fe4;
        case 0x285fe8u: goto label_285fe8;
        case 0x285fecu: goto label_285fec;
        case 0x285ff0u: goto label_285ff0;
        case 0x285ff4u: goto label_285ff4;
        case 0x285ff8u: goto label_285ff8;
        case 0x285ffcu: goto label_285ffc;
        case 0x286000u: goto label_286000;
        case 0x286004u: goto label_286004;
        case 0x286008u: goto label_286008;
        case 0x28600cu: goto label_28600c;
        case 0x286010u: goto label_286010;
        case 0x286014u: goto label_286014;
        case 0x286018u: goto label_286018;
        case 0x28601cu: goto label_28601c;
        case 0x286020u: goto label_286020;
        case 0x286024u: goto label_286024;
        case 0x286028u: goto label_286028;
        case 0x28602cu: goto label_28602c;
        case 0x286030u: goto label_286030;
        case 0x286034u: goto label_286034;
        case 0x286038u: goto label_286038;
        case 0x28603cu: goto label_28603c;
        case 0x286040u: goto label_286040;
        case 0x286044u: goto label_286044;
        case 0x286048u: goto label_286048;
        case 0x28604cu: goto label_28604c;
        case 0x286050u: goto label_286050;
        case 0x286054u: goto label_286054;
        case 0x286058u: goto label_286058;
        case 0x28605cu: goto label_28605c;
        case 0x286060u: goto label_286060;
        case 0x286064u: goto label_286064;
        case 0x286068u: goto label_286068;
        case 0x28606cu: goto label_28606c;
        case 0x286070u: goto label_286070;
        default: break;
    }

    ctx->pc = 0x285e70u;

label_285e70:
    // 0x285e70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x285e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_285e74:
    // 0x285e74: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x285e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_285e78:
    // 0x285e78: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x285e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_285e7c:
    // 0x285e7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x285e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_285e80:
    // 0x285e80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x285e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_285e84:
    // 0x285e84: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x285e84u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_285e88:
    // 0x285e88: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x285e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_285e8c:
    // 0x285e8c: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
label_285e90:
    // 0x285e90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x285e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_285e94:
    // 0x285e94: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x285e94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285e98:
    // 0x285e98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x285e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_285e9c:
    // 0x285e9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x285e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285ea0:
    // 0x285ea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x285ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_285ea4:
    // 0x285ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x285ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_285ea8:
    // 0x285ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x285ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_285eac:
    // 0x285eac: 0xc0a0ce0  jal         func_283380
label_285eb0:
    if (ctx->pc == 0x285EB0u) {
        ctx->pc = 0x285EB0u;
            // 0x285eb0: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->pc = 0x285EB4u;
        goto label_285eb4;
    }
    ctx->pc = 0x285EACu;
    SET_GPR_U32(ctx, 31, 0x285EB4u);
    ctx->pc = 0x285EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285EACu;
            // 0x285eb0: 0xafa600ac  sw          $a2, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EB4u; }
        if (ctx->pc != 0x285EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EB4u; }
        if (ctx->pc != 0x285EB4u) { return; }
    }
    ctx->pc = 0x285EB4u;
label_285eb4:
    // 0x285eb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285eb8:
    // 0x285eb8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_285ebc:
    if (ctx->pc == 0x285EBCu) {
        ctx->pc = 0x285EBCu;
            // 0x285ebc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EC0u;
        goto label_285ec0;
    }
    ctx->pc = 0x285EB8u;
    {
        const bool branch_taken_0x285eb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x285EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EB8u;
            // 0x285ebc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285eb8) {
            ctx->pc = 0x285EC8u;
            goto label_285ec8;
        }
    }
    ctx->pc = 0x285EC0u;
label_285ec0:
    // 0x285ec0: 0x10000060  b           . + 4 + (0x60 << 2)
label_285ec4:
    if (ctx->pc == 0x285EC4u) {
        ctx->pc = 0x285EC4u;
            // 0x285ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EC8u;
        goto label_285ec8;
    }
    ctx->pc = 0x285EC0u;
    {
        const bool branch_taken_0x285ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EC0u;
            // 0x285ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ec0) {
            ctx->pc = 0x286044u;
            goto label_286044;
        }
    }
    ctx->pc = 0x285EC8u;
label_285ec8:
    // 0x285ec8: 0xc0a0f58  jal         func_283D60
label_285ecc:
    if (ctx->pc == 0x285ECCu) {
        ctx->pc = 0x285ECCu;
            // 0x285ecc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285ED0u;
        goto label_285ed0;
    }
    ctx->pc = 0x285EC8u;
    SET_GPR_U32(ctx, 31, 0x285ED0u);
    ctx->pc = 0x285ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285EC8u;
            // 0x285ecc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285ED0u; }
        if (ctx->pc != 0x285ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285ED0u; }
        if (ctx->pc != 0x285ED0u) { return; }
    }
    ctx->pc = 0x285ED0u;
label_285ed0:
    // 0x285ed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x285ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285ed4:
    // 0x285ed4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_285ed8:
    if (ctx->pc == 0x285ED8u) {
        ctx->pc = 0x285ED8u;
            // 0x285ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EDCu;
        goto label_285edc;
    }
    ctx->pc = 0x285ED4u;
    {
        const bool branch_taken_0x285ed4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x285ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285ED4u;
            // 0x285ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ed4) {
            ctx->pc = 0x285EE4u;
            goto label_285ee4;
        }
    }
    ctx->pc = 0x285EDCu;
label_285edc:
    // 0x285edc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_285ee0:
    if (ctx->pc == 0x285EE0u) {
        ctx->pc = 0x285EE0u;
            // 0x285ee0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x285EE4u;
        goto label_285ee4;
    }
    ctx->pc = 0x285EDCu;
    {
        const bool branch_taken_0x285edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EDCu;
            // 0x285ee0: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285edc) {
            ctx->pc = 0x286048u;
            goto label_286048;
        }
    }
    ctx->pc = 0x285EE4u;
label_285ee4:
    // 0x285ee4: 0x8e1e0030  lw          $fp, 0x30($s0)
    ctx->pc = 0x285ee4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_285ee8:
    // 0x285ee8: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x285ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
label_285eec:
    // 0x285eec: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x285eecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_285ef0:
    // 0x285ef0: 0x8e160028  lw          $s6, 0x28($s0)
    ctx->pc = 0x285ef0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_285ef4:
    // 0x285ef4: 0x6c0000d  bltz        $s6, . + 4 + (0xD << 2)
label_285ef8:
    if (ctx->pc == 0x285EF8u) {
        ctx->pc = 0x285EF8u;
            // 0x285ef8: 0x8e11002c  lw          $s1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->pc = 0x285EFCu;
        goto label_285efc;
    }
    ctx->pc = 0x285EF4u;
    {
        const bool branch_taken_0x285ef4 = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x285EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EF4u;
            // 0x285ef8: 0x8e11002c  lw          $s1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ef4) {
            ctx->pc = 0x285F2Cu;
            goto label_285f2c;
        }
    }
    ctx->pc = 0x285EFCu;
label_285efc:
    // 0x285efc: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
label_285f00:
    if (ctx->pc == 0x285F00u) {
        ctx->pc = 0x285F00u;
            // 0x285f00: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x285F04u;
        goto label_285f04;
    }
    ctx->pc = 0x285EFCu;
    {
        const bool branch_taken_0x285efc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x285F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EFCu;
            // 0x285f00: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285efc) {
            ctx->pc = 0x285F2Cu;
            goto label_285f2c;
        }
    }
    ctx->pc = 0x285F04u;
label_285f04:
    // 0x285f04: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_285f08:
    if (ctx->pc == 0x285F08u) {
        ctx->pc = 0x285F08u;
            // 0x285f08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F0Cu;
        goto label_285f0c;
    }
    ctx->pc = 0x285F04u;
    {
        const bool branch_taken_0x285f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F04u;
            // 0x285f08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f04) {
            ctx->pc = 0x285F2Cu;
            goto label_285f2c;
        }
    }
    ctx->pc = 0x285F0Cu;
label_285f0c:
    // 0x285f0c: 0x2d22821  addu        $a1, $s6, $s2
    ctx->pc = 0x285f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_285f10:
    // 0x285f10: 0xc04b950  jal         func_12E540
label_285f14:
    if (ctx->pc == 0x285F14u) {
        ctx->pc = 0x285F14u;
            // 0x285f14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F18u;
        goto label_285f18;
    }
    ctx->pc = 0x285F10u;
    SET_GPR_U32(ctx, 31, 0x285F18u);
    ctx->pc = 0x285F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F10u;
            // 0x285f14: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F18u; }
        if (ctx->pc != 0x285F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F18u; }
        if (ctx->pc != 0x285F18u) { return; }
    }
    ctx->pc = 0x285F18u;
label_285f18:
    // 0x285f18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x285f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_285f1c:
    // 0x285f1c: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x285f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_285f20:
    // 0x285f20: 0x0  nop
    ctx->pc = 0x285f20u;
    // NOP
label_285f24:
    // 0x285f24: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_285f28:
    if (ctx->pc == 0x285F28u) {
        ctx->pc = 0x285F2Cu;
        goto label_285f2c;
    }
    ctx->pc = 0x285F24u;
    {
        const bool branch_taken_0x285f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285f24) {
            ctx->pc = 0x285F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285f0c;
        }
    }
    ctx->pc = 0x285F2Cu;
label_285f2c:
    // 0x285f2c: 0x0  nop
    ctx->pc = 0x285f2cu;
    // NOP
label_285f30:
    // 0x285f30: 0x8e650318  lw          $a1, 0x318($s3)
    ctx->pc = 0x285f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_285f34:
    // 0x285f34: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_285f38:
    if (ctx->pc == 0x285F38u) {
        ctx->pc = 0x285F38u;
            // 0x285f38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F3Cu;
        goto label_285f3c;
    }
    ctx->pc = 0x285F34u;
    {
        const bool branch_taken_0x285f34 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x285F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F34u;
            // 0x285f38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f34) {
            ctx->pc = 0x285F48u;
            goto label_285f48;
        }
    }
    ctx->pc = 0x285F3Cu;
label_285f3c:
    // 0x285f3c: 0xc04b950  jal         func_12E540
label_285f40:
    if (ctx->pc == 0x285F40u) {
        ctx->pc = 0x285F40u;
            // 0x285f40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F44u;
        goto label_285f44;
    }
    ctx->pc = 0x285F3Cu;
    SET_GPR_U32(ctx, 31, 0x285F44u);
    ctx->pc = 0x285F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F3Cu;
            // 0x285f40: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F44u; }
        if (ctx->pc != 0x285F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F44u; }
        if (ctx->pc != 0x285F44u) { return; }
    }
    ctx->pc = 0x285F44u;
label_285f44:
    // 0x285f44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x285f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285f48:
    // 0x285f48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285f4c:
    // 0x285f4c: 0xc0593e8  jal         func_164FA0
label_285f50:
    if (ctx->pc == 0x285F50u) {
        ctx->pc = 0x285F50u;
            // 0x285f50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F54u;
        goto label_285f54;
    }
    ctx->pc = 0x285F4Cu;
    SET_GPR_U32(ctx, 31, 0x285F54u);
    ctx->pc = 0x285F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F4Cu;
            // 0x285f50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FA0u;
    if (runtime->hasFunction(0x164FA0u)) {
        auto targetFn = runtime->lookupFunction(0x164FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F54u; }
        if (ctx->pc != 0x285F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetImgName__8CMapInfoFi_0x164fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F54u; }
        if (ctx->pc != 0x285F54u) { return; }
    }
    ctx->pc = 0x285F54u;
label_285f54:
    // 0x285f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285f58:
    // 0x285f58: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_285f5c:
    if (ctx->pc == 0x285F5Cu) {
        ctx->pc = 0x285F5Cu;
            // 0x285f5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F60u;
        goto label_285f60;
    }
    ctx->pc = 0x285F58u;
    {
        const bool branch_taken_0x285f58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F58u;
            // 0x285f5c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f58) {
            ctx->pc = 0x285F88u;
            goto label_285f88;
        }
    }
    ctx->pc = 0x285F60u;
label_285f60:
    // 0x285f60: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x285f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285f64:
    // 0x285f64: 0xc0a0d40  jal         func_283500
label_285f68:
    if (ctx->pc == 0x285F68u) {
        ctx->pc = 0x285F68u;
            // 0x285f68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F6Cu;
        goto label_285f6c;
    }
    ctx->pc = 0x285F64u;
    SET_GPR_U32(ctx, 31, 0x285F6Cu);
    ctx->pc = 0x285F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F64u;
            // 0x285f68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283500u;
    if (runtime->hasFunction(0x283500u)) {
        auto targetFn = runtime->lookupFunction(0x283500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F6Cu; }
        if (ctx->pc != 0x285F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckIMGName__6CSceneFiPc_0x283500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F6Cu; }
        if (ctx->pc != 0x285F6Cu) { return; }
    }
    ctx->pc = 0x285F6Cu;
label_285f6c:
    // 0x285f6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285f70:
    if (ctx->pc == 0x285F70u) {
        ctx->pc = 0x285F70u;
            // 0x285f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F74u;
        goto label_285f74;
    }
    ctx->pc = 0x285F6Cu;
    {
        const bool branch_taken_0x285f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F6Cu;
            // 0x285f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f6c) {
            ctx->pc = 0x285F7Cu;
            goto label_285f7c;
        }
    }
    ctx->pc = 0x285F74u;
label_285f74:
    // 0x285f74: 0xc05a3c0  jal         func_168F00
label_285f78:
    if (ctx->pc == 0x285F78u) {
        ctx->pc = 0x285F78u;
            // 0x285f78: 0x26a423d0  addiu       $a0, $s5, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9168));
        ctx->pc = 0x285F7Cu;
        goto label_285f7c;
    }
    ctx->pc = 0x285F74u;
    SET_GPR_U32(ctx, 31, 0x285F7Cu);
    ctx->pc = 0x285F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F74u;
            // 0x285f78: 0x26a423d0  addiu       $a0, $s5, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168F00u;
    if (runtime->hasFunction(0x168F00u)) {
        auto targetFn = runtime->lookupFunction(0x168F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F7Cu; }
        if (ctx->pc != 0x285F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteIMG__11CMdsListSetFPc_0x168f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F7Cu; }
        if (ctx->pc != 0x285F7Cu) { return; }
    }
    ctx->pc = 0x285F7Cu;
label_285f7c:
    // 0x285f7c: 0x0  nop
    ctx->pc = 0x285f7cu;
    // NOP
label_285f80:
    // 0x285f80: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_285f84:
    if (ctx->pc == 0x285F84u) {
        ctx->pc = 0x285F84u;
            // 0x285f84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x285F88u;
        goto label_285f88;
    }
    ctx->pc = 0x285F80u;
    {
        const bool branch_taken_0x285f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F80u;
            // 0x285f84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f80) {
            ctx->pc = 0x285F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285f48;
        }
    }
    ctx->pc = 0x285F88u;
label_285f88:
    // 0x285f88: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x285f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285f8c:
    // 0x285f8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x285f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_285f90:
    // 0x285f90: 0xc0593f8  jal         func_164FE0
label_285f94:
    if (ctx->pc == 0x285F94u) {
        ctx->pc = 0x285F94u;
            // 0x285f94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F98u;
        goto label_285f98;
    }
    ctx->pc = 0x285F90u;
    SET_GPR_U32(ctx, 31, 0x285F98u);
    ctx->pc = 0x285F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F90u;
            // 0x285f94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FE0u;
    if (runtime->hasFunction(0x164FE0u)) {
        auto targetFn = runtime->lookupFunction(0x164FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F98u; }
        if (ctx->pc != 0x285F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPCPName__8CMapInfoFi_0x164fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F98u; }
        if (ctx->pc != 0x285F98u) { return; }
    }
    ctx->pc = 0x285F98u;
label_285f98:
    // 0x285f98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x285f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285f9c:
    // 0x285f9c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_285fa0:
    if (ctx->pc == 0x285FA0u) {
        ctx->pc = 0x285FA0u;
            // 0x285fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FA4u;
        goto label_285fa4;
    }
    ctx->pc = 0x285F9Cu;
    {
        const bool branch_taken_0x285f9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F9Cu;
            // 0x285fa0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f9c) {
            ctx->pc = 0x285FC8u;
            goto label_285fc8;
        }
    }
    ctx->pc = 0x285FA4u;
label_285fa4:
    // 0x285fa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x285fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285fa8:
    // 0x285fa8: 0xc0a0d74  jal         func_2835D0
label_285fac:
    if (ctx->pc == 0x285FACu) {
        ctx->pc = 0x285FACu;
            // 0x285fac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FB0u;
        goto label_285fb0;
    }
    ctx->pc = 0x285FA8u;
    SET_GPR_U32(ctx, 31, 0x285FB0u);
    ctx->pc = 0x285FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FA8u;
            // 0x285fac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2835D0u;
    if (runtime->hasFunction(0x2835D0u)) {
        auto targetFn = runtime->lookupFunction(0x2835D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FB0u; }
        if (ctx->pc != 0x285FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMDSName__6CSceneFiPc_0x2835d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FB0u; }
        if (ctx->pc != 0x285FB0u) { return; }
    }
    ctx->pc = 0x285FB0u;
label_285fb0:
    // 0x285fb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285fb4:
    if (ctx->pc == 0x285FB4u) {
        ctx->pc = 0x285FB4u;
            // 0x285fb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FB8u;
        goto label_285fb8;
    }
    ctx->pc = 0x285FB0u;
    {
        const bool branch_taken_0x285fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FB0u;
            // 0x285fb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fb0) {
            ctx->pc = 0x285FC0u;
            goto label_285fc0;
        }
    }
    ctx->pc = 0x285FB8u;
label_285fb8:
    // 0x285fb8: 0xc05a37c  jal         func_168DF0
label_285fbc:
    if (ctx->pc == 0x285FBCu) {
        ctx->pc = 0x285FBCu;
            // 0x285fbc: 0x26a423d0  addiu       $a0, $s5, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9168));
        ctx->pc = 0x285FC0u;
        goto label_285fc0;
    }
    ctx->pc = 0x285FB8u;
    SET_GPR_U32(ctx, 31, 0x285FC0u);
    ctx->pc = 0x285FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FB8u;
            // 0x285fbc: 0x26a423d0  addiu       $a0, $s5, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168DF0u;
    if (runtime->hasFunction(0x168DF0u)) {
        auto targetFn = runtime->lookupFunction(0x168DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FC0u; }
        if (ctx->pc != 0x285FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMdsList__11CMdsListSetFPc_0x168df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FC0u; }
        if (ctx->pc != 0x285FC0u) { return; }
    }
    ctx->pc = 0x285FC0u;
label_285fc0:
    // 0x285fc0: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_285fc4:
    if (ctx->pc == 0x285FC4u) {
        ctx->pc = 0x285FC4u;
            // 0x285fc4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x285FC8u;
        goto label_285fc8;
    }
    ctx->pc = 0x285FC0u;
    {
        const bool branch_taken_0x285fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FC0u;
            // 0x285fc4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fc0) {
            ctx->pc = 0x285F8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285f8c;
        }
    }
    ctx->pc = 0x285FC8u;
label_285fc8:
    // 0x285fc8: 0xc0a0ad8  jal         func_282B60
label_285fcc:
    if (ctx->pc == 0x285FCCu) {
        ctx->pc = 0x285FCCu;
            // 0x285fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FD0u;
        goto label_285fd0;
    }
    ctx->pc = 0x285FC8u;
    SET_GPR_U32(ctx, 31, 0x285FD0u);
    ctx->pc = 0x285FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FC8u;
            // 0x285fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282B60u;
    if (runtime->hasFunction(0x282B60u)) {
        auto targetFn = runtime->lookupFunction(0x282B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FD0u; }
        if (ctx->pc != 0x285FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CSceneMapFv_0x282b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FD0u; }
        if (ctx->pc != 0x285FD0u) { return; }
    }
    ctx->pc = 0x285FD0u;
label_285fd0:
    // 0x285fd0: 0x8e790d00  lw          $t9, 0xD00($s3)
    ctx->pc = 0x285fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3328)));
label_285fd4:
    // 0x285fd4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x285fd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_285fd8:
    // 0x285fd8: 0x320f809  jalr        $t9
label_285fdc:
    if (ctx->pc == 0x285FDCu) {
        ctx->pc = 0x285FDCu;
            // 0x285fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FE0u;
        goto label_285fe0;
    }
    ctx->pc = 0x285FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x285FE0u);
        ctx->pc = 0x285FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FD8u;
            // 0x285fdc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x285FE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x285FE0u; }
            if (ctx->pc != 0x285FE0u) { return; }
        }
        }
    }
    ctx->pc = 0x285FE0u;
label_285fe0:
    // 0x285fe0: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x285fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_285fe4:
    // 0x285fe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_285fe8:
    if (ctx->pc == 0x285FE8u) {
        ctx->pc = 0x285FE8u;
            // 0x285fe8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FECu;
        goto label_285fec;
    }
    ctx->pc = 0x285FE4u;
    {
        const bool branch_taken_0x285fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FE4u;
            // 0x285fe8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fe4) {
            ctx->pc = 0x285FF4u;
            goto label_285ff4;
        }
    }
    ctx->pc = 0x285FECu;
label_285fec:
    // 0x285fec: 0x10000015  b           . + 4 + (0x15 << 2)
label_285ff0:
    if (ctx->pc == 0x285FF0u) {
        ctx->pc = 0x285FF0u;
            // 0x285ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x285FF4u;
        goto label_285ff4;
    }
    ctx->pc = 0x285FECu;
    {
        const bool branch_taken_0x285fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FECu;
            // 0x285ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fec) {
            ctx->pc = 0x286044u;
            goto label_286044;
        }
    }
    ctx->pc = 0x285FF4u;
label_285ff4:
    // 0x285ff4: 0x1000000d  b           . + 4 + (0xD << 2)
label_285ff8:
    if (ctx->pc == 0x285FF8u) {
        ctx->pc = 0x285FFCu;
        goto label_285ffc;
    }
    ctx->pc = 0x285FF4u;
    {
        const bool branch_taken_0x285ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ff4) {
            ctx->pc = 0x28602Cu;
            goto label_28602c;
        }
    }
    ctx->pc = 0x285FFCu;
label_285ffc:
    // 0x285ffc: 0xc0a0ce0  jal         func_283380
label_286000:
    if (ctx->pc == 0x286000u) {
        ctx->pc = 0x286000u;
            // 0x286000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286004u;
        goto label_286004;
    }
    ctx->pc = 0x285FFCu;
    SET_GPR_U32(ctx, 31, 0x286004u);
    ctx->pc = 0x286000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FFCu;
            // 0x286000: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283380u;
    if (runtime->hasFunction(0x283380u)) {
        auto targetFn = runtime->lookupFunction(0x283380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286004u; }
        if (ctx->pc != 0x286004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSceneMap__6CSceneFi_0x283380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x286004u; }
        if (ctx->pc != 0x286004u) { return; }
    }
    ctx->pc = 0x286004u;
label_286004:
    // 0x286004: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_286008:
    if (ctx->pc == 0x286008u) {
        ctx->pc = 0x28600Cu;
        goto label_28600c;
    }
    ctx->pc = 0x286004u;
    {
        const bool branch_taken_0x286004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286004) {
            ctx->pc = 0x286024u;
            goto label_286024;
        }
    }
    ctx->pc = 0x28600Cu;
label_28600c:
    // 0x28600c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x28600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_286010:
    // 0x286010: 0x145e0004  bne         $v0, $fp, . + 4 + (0x4 << 2)
label_286014:
    if (ctx->pc == 0x286014u) {
        ctx->pc = 0x286014u;
            // 0x286014: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286018u;
        goto label_286018;
    }
    ctx->pc = 0x286010u;
    {
        const bool branch_taken_0x286010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x286014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286010u;
            // 0x286014: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286010) {
            ctx->pc = 0x286024u;
            goto label_286024;
        }
    }
    ctx->pc = 0x286018u;
label_286018:
    // 0x286018: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28601c:
    // 0x28601c: 0xc0a179c  jal         func_285E70
label_286020:
    if (ctx->pc == 0x286020u) {
        ctx->pc = 0x286020u;
            // 0x286020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286024u;
        goto label_286024;
    }
    ctx->pc = 0x28601Cu;
    SET_GPR_U32(ctx, 31, 0x286024u);
    ctx->pc = 0x286020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28601Cu;
            // 0x286020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    goto label_285e70;
    ctx->pc = 0x286024u;
label_286024:
    // 0x286024: 0x0  nop
    ctx->pc = 0x286024u;
    // NOP
label_286028:
    // 0x286028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28602c:
    // 0x28602c: 0x0  nop
    ctx->pc = 0x28602cu;
    // NOP
label_286030:
    // 0x286030: 0x8ea227e0  lw          $v0, 0x27E0($s5)
    ctx->pc = 0x286030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10208)));
label_286034:
    // 0x286034: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x286034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286038:
    // 0x286038: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_28603c:
    if (ctx->pc == 0x28603Cu) {
        ctx->pc = 0x28603Cu;
            // 0x28603c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286040u;
        goto label_286040;
    }
    ctx->pc = 0x286038u;
    {
        const bool branch_taken_0x286038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286038u;
            // 0x28603c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286038) {
            ctx->pc = 0x285FFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_285ffc;
        }
    }
    ctx->pc = 0x286040u;
label_286040:
    // 0x286040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286044:
    // 0x286044: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x286044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_286048:
    // 0x286048: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x286048u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28604c:
    // 0x28604c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28604cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_286050:
    // 0x286050: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x286050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_286054:
    // 0x286054: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x286054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_286058:
    // 0x286058: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x286058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28605c:
    // 0x28605c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28605cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_286060:
    // 0x286060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x286060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_286064:
    // 0x286064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x286064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_286068:
    // 0x286068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x286068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28606c:
    // 0x28606c: 0x3e00008  jr          $ra
label_286070:
    if (ctx->pc == 0x286070u) {
        ctx->pc = 0x286070u;
            // 0x286070: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x286074u;
        goto label_fallthrough_0x28606c;
    }
    ctx->pc = 0x28606Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28606Cu;
            // 0x286070: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28606c:
    ctx->pc = 0x286074u;
}
