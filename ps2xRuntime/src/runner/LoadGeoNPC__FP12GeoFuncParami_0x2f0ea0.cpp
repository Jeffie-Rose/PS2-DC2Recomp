#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadGeoNPC__FP12GeoFuncParami
// Address: 0x2f0ea0 - 0x2f113c
void LoadGeoNPC__FP12GeoFuncParami_0x2f0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadGeoNPC__FP12GeoFuncParami_0x2f0ea0");
#endif

    switch (ctx->pc) {
        case 0x2f0ea0u: goto label_2f0ea0;
        case 0x2f0ea4u: goto label_2f0ea4;
        case 0x2f0ea8u: goto label_2f0ea8;
        case 0x2f0eacu: goto label_2f0eac;
        case 0x2f0eb0u: goto label_2f0eb0;
        case 0x2f0eb4u: goto label_2f0eb4;
        case 0x2f0eb8u: goto label_2f0eb8;
        case 0x2f0ebcu: goto label_2f0ebc;
        case 0x2f0ec0u: goto label_2f0ec0;
        case 0x2f0ec4u: goto label_2f0ec4;
        case 0x2f0ec8u: goto label_2f0ec8;
        case 0x2f0eccu: goto label_2f0ecc;
        case 0x2f0ed0u: goto label_2f0ed0;
        case 0x2f0ed4u: goto label_2f0ed4;
        case 0x2f0ed8u: goto label_2f0ed8;
        case 0x2f0edcu: goto label_2f0edc;
        case 0x2f0ee0u: goto label_2f0ee0;
        case 0x2f0ee4u: goto label_2f0ee4;
        case 0x2f0ee8u: goto label_2f0ee8;
        case 0x2f0eecu: goto label_2f0eec;
        case 0x2f0ef0u: goto label_2f0ef0;
        case 0x2f0ef4u: goto label_2f0ef4;
        case 0x2f0ef8u: goto label_2f0ef8;
        case 0x2f0efcu: goto label_2f0efc;
        case 0x2f0f00u: goto label_2f0f00;
        case 0x2f0f04u: goto label_2f0f04;
        case 0x2f0f08u: goto label_2f0f08;
        case 0x2f0f0cu: goto label_2f0f0c;
        case 0x2f0f10u: goto label_2f0f10;
        case 0x2f0f14u: goto label_2f0f14;
        case 0x2f0f18u: goto label_2f0f18;
        case 0x2f0f1cu: goto label_2f0f1c;
        case 0x2f0f20u: goto label_2f0f20;
        case 0x2f0f24u: goto label_2f0f24;
        case 0x2f0f28u: goto label_2f0f28;
        case 0x2f0f2cu: goto label_2f0f2c;
        case 0x2f0f30u: goto label_2f0f30;
        case 0x2f0f34u: goto label_2f0f34;
        case 0x2f0f38u: goto label_2f0f38;
        case 0x2f0f3cu: goto label_2f0f3c;
        case 0x2f0f40u: goto label_2f0f40;
        case 0x2f0f44u: goto label_2f0f44;
        case 0x2f0f48u: goto label_2f0f48;
        case 0x2f0f4cu: goto label_2f0f4c;
        case 0x2f0f50u: goto label_2f0f50;
        case 0x2f0f54u: goto label_2f0f54;
        case 0x2f0f58u: goto label_2f0f58;
        case 0x2f0f5cu: goto label_2f0f5c;
        case 0x2f0f60u: goto label_2f0f60;
        case 0x2f0f64u: goto label_2f0f64;
        case 0x2f0f68u: goto label_2f0f68;
        case 0x2f0f6cu: goto label_2f0f6c;
        case 0x2f0f70u: goto label_2f0f70;
        case 0x2f0f74u: goto label_2f0f74;
        case 0x2f0f78u: goto label_2f0f78;
        case 0x2f0f7cu: goto label_2f0f7c;
        case 0x2f0f80u: goto label_2f0f80;
        case 0x2f0f84u: goto label_2f0f84;
        case 0x2f0f88u: goto label_2f0f88;
        case 0x2f0f8cu: goto label_2f0f8c;
        case 0x2f0f90u: goto label_2f0f90;
        case 0x2f0f94u: goto label_2f0f94;
        case 0x2f0f98u: goto label_2f0f98;
        case 0x2f0f9cu: goto label_2f0f9c;
        case 0x2f0fa0u: goto label_2f0fa0;
        case 0x2f0fa4u: goto label_2f0fa4;
        case 0x2f0fa8u: goto label_2f0fa8;
        case 0x2f0facu: goto label_2f0fac;
        case 0x2f0fb0u: goto label_2f0fb0;
        case 0x2f0fb4u: goto label_2f0fb4;
        case 0x2f0fb8u: goto label_2f0fb8;
        case 0x2f0fbcu: goto label_2f0fbc;
        case 0x2f0fc0u: goto label_2f0fc0;
        case 0x2f0fc4u: goto label_2f0fc4;
        case 0x2f0fc8u: goto label_2f0fc8;
        case 0x2f0fccu: goto label_2f0fcc;
        case 0x2f0fd0u: goto label_2f0fd0;
        case 0x2f0fd4u: goto label_2f0fd4;
        case 0x2f0fd8u: goto label_2f0fd8;
        case 0x2f0fdcu: goto label_2f0fdc;
        case 0x2f0fe0u: goto label_2f0fe0;
        case 0x2f0fe4u: goto label_2f0fe4;
        case 0x2f0fe8u: goto label_2f0fe8;
        case 0x2f0fecu: goto label_2f0fec;
        case 0x2f0ff0u: goto label_2f0ff0;
        case 0x2f0ff4u: goto label_2f0ff4;
        case 0x2f0ff8u: goto label_2f0ff8;
        case 0x2f0ffcu: goto label_2f0ffc;
        case 0x2f1000u: goto label_2f1000;
        case 0x2f1004u: goto label_2f1004;
        case 0x2f1008u: goto label_2f1008;
        case 0x2f100cu: goto label_2f100c;
        case 0x2f1010u: goto label_2f1010;
        case 0x2f1014u: goto label_2f1014;
        case 0x2f1018u: goto label_2f1018;
        case 0x2f101cu: goto label_2f101c;
        case 0x2f1020u: goto label_2f1020;
        case 0x2f1024u: goto label_2f1024;
        case 0x2f1028u: goto label_2f1028;
        case 0x2f102cu: goto label_2f102c;
        case 0x2f1030u: goto label_2f1030;
        case 0x2f1034u: goto label_2f1034;
        case 0x2f1038u: goto label_2f1038;
        case 0x2f103cu: goto label_2f103c;
        case 0x2f1040u: goto label_2f1040;
        case 0x2f1044u: goto label_2f1044;
        case 0x2f1048u: goto label_2f1048;
        case 0x2f104cu: goto label_2f104c;
        case 0x2f1050u: goto label_2f1050;
        case 0x2f1054u: goto label_2f1054;
        case 0x2f1058u: goto label_2f1058;
        case 0x2f105cu: goto label_2f105c;
        case 0x2f1060u: goto label_2f1060;
        case 0x2f1064u: goto label_2f1064;
        case 0x2f1068u: goto label_2f1068;
        case 0x2f106cu: goto label_2f106c;
        case 0x2f1070u: goto label_2f1070;
        case 0x2f1074u: goto label_2f1074;
        case 0x2f1078u: goto label_2f1078;
        case 0x2f107cu: goto label_2f107c;
        case 0x2f1080u: goto label_2f1080;
        case 0x2f1084u: goto label_2f1084;
        case 0x2f1088u: goto label_2f1088;
        case 0x2f108cu: goto label_2f108c;
        case 0x2f1090u: goto label_2f1090;
        case 0x2f1094u: goto label_2f1094;
        case 0x2f1098u: goto label_2f1098;
        case 0x2f109cu: goto label_2f109c;
        case 0x2f10a0u: goto label_2f10a0;
        case 0x2f10a4u: goto label_2f10a4;
        case 0x2f10a8u: goto label_2f10a8;
        case 0x2f10acu: goto label_2f10ac;
        case 0x2f10b0u: goto label_2f10b0;
        case 0x2f10b4u: goto label_2f10b4;
        case 0x2f10b8u: goto label_2f10b8;
        case 0x2f10bcu: goto label_2f10bc;
        case 0x2f10c0u: goto label_2f10c0;
        case 0x2f10c4u: goto label_2f10c4;
        case 0x2f10c8u: goto label_2f10c8;
        case 0x2f10ccu: goto label_2f10cc;
        case 0x2f10d0u: goto label_2f10d0;
        case 0x2f10d4u: goto label_2f10d4;
        case 0x2f10d8u: goto label_2f10d8;
        case 0x2f10dcu: goto label_2f10dc;
        case 0x2f10e0u: goto label_2f10e0;
        case 0x2f10e4u: goto label_2f10e4;
        case 0x2f10e8u: goto label_2f10e8;
        case 0x2f10ecu: goto label_2f10ec;
        case 0x2f10f0u: goto label_2f10f0;
        case 0x2f10f4u: goto label_2f10f4;
        case 0x2f10f8u: goto label_2f10f8;
        case 0x2f10fcu: goto label_2f10fc;
        case 0x2f1100u: goto label_2f1100;
        case 0x2f1104u: goto label_2f1104;
        case 0x2f1108u: goto label_2f1108;
        case 0x2f110cu: goto label_2f110c;
        case 0x2f1110u: goto label_2f1110;
        case 0x2f1114u: goto label_2f1114;
        case 0x2f1118u: goto label_2f1118;
        case 0x2f111cu: goto label_2f111c;
        case 0x2f1120u: goto label_2f1120;
        case 0x2f1124u: goto label_2f1124;
        case 0x2f1128u: goto label_2f1128;
        case 0x2f112cu: goto label_2f112c;
        case 0x2f1130u: goto label_2f1130;
        case 0x2f1134u: goto label_2f1134;
        case 0x2f1138u: goto label_2f1138;
        default: break;
    }

    ctx->pc = 0x2f0ea0u;

label_2f0ea0:
    // 0x2f0ea0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2f0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2f0ea4:
    // 0x2f0ea4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f0ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2f0ea8:
    // 0x2f0ea8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2f0ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2f0eac:
    // 0x2f0eac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2f0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2f0eb0:
    // 0x2f0eb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2f0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2f0eb4:
    // 0x2f0eb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2f0eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2f0eb8:
    // 0x2f0eb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2f0eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ebc:
    // 0x2f0ebc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f0ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2f0ec0:
    // 0x2f0ec0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2f0ec4:
    // 0x2f0ec4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x2f0ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f0ec8:
    // 0x2f0ec8: 0xc0a0f80  jal         func_283E00
label_2f0ecc:
    if (ctx->pc == 0x2F0ECCu) {
        ctx->pc = 0x2F0ECCu;
            // 0x2f0ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0ED0u;
        goto label_2f0ed0;
    }
    ctx->pc = 0x2F0EC8u;
    SET_GPR_U32(ctx, 31, 0x2F0ED0u);
    ctx->pc = 0x2F0ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0EC8u;
            // 0x2f0ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E00u;
    if (runtime->hasFunction(0x283E00u)) {
        auto targetFn = runtime->lookupFunction(0x283E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0ED0u; }
        if (ctx->pc != 0x2F0ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainMapNo__6CSceneFv_0x283e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0ED0u; }
        if (ctx->pc != 0x2F0ED0u) { return; }
    }
    ctx->pc = 0x2F0ED0u;
label_2f0ed0:
    // 0x2f0ed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f0ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f0ed4:
    // 0x2f0ed4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2f0ed8:
    if (ctx->pc == 0x2F0ED8u) {
        ctx->pc = 0x2F0ED8u;
            // 0x2f0ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EDCu;
        goto label_2f0edc;
    }
    ctx->pc = 0x2F0ED4u;
    {
        const bool branch_taken_0x2f0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0ED4u;
            // 0x2f0ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ed4) {
            ctx->pc = 0x2F0EE4u;
            goto label_2f0ee4;
        }
    }
    ctx->pc = 0x2F0EDCu;
label_2f0edc:
    // 0x2f0edc: 0x1000008f  b           . + 4 + (0x8F << 2)
label_2f0ee0:
    if (ctx->pc == 0x2F0EE0u) {
        ctx->pc = 0x2F0EE0u;
            // 0x2f0ee0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2F0EE4u;
        goto label_2f0ee4;
    }
    ctx->pc = 0x2F0EDCu;
    {
        const bool branch_taken_0x2f0edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0EDCu;
            // 0x2f0ee0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0edc) {
            ctx->pc = 0x2F111Cu;
            goto label_2f111c;
        }
    }
    ctx->pc = 0x2F0EE4u;
label_2f0ee4:
    // 0x2f0ee4: 0x8e052e5c  lw          $a1, 0x2E5C($s0)
    ctx->pc = 0x2f0ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11868)));
label_2f0ee8:
    // 0x2f0ee8: 0xc0a0f58  jal         func_283D60
label_2f0eec:
    if (ctx->pc == 0x2F0EECu) {
        ctx->pc = 0x2F0EECu;
            // 0x2f0eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EF0u;
        goto label_2f0ef0;
    }
    ctx->pc = 0x2F0EE8u;
    SET_GPR_U32(ctx, 31, 0x2F0EF0u);
    ctx->pc = 0x2F0EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0EE8u;
            // 0x2f0eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0EF0u; }
        if (ctx->pc != 0x2F0EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0EF0u; }
        if (ctx->pc != 0x2F0EF0u) { return; }
    }
    ctx->pc = 0x2F0EF0u;
label_2f0ef0:
    // 0x2f0ef0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f0ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ef4:
    // 0x2f0ef4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2f0ef8:
    if (ctx->pc == 0x2F0EF8u) {
        ctx->pc = 0x2F0EF8u;
            // 0x2f0ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EFCu;
        goto label_2f0efc;
    }
    ctx->pc = 0x2F0EF4u;
    {
        const bool branch_taken_0x2f0ef4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0EF4u;
            // 0x2f0ef8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0ef4) {
            ctx->pc = 0x2F0F04u;
            goto label_2f0f04;
        }
    }
    ctx->pc = 0x2F0EFCu;
label_2f0efc:
    // 0x2f0efc: 0x10000086  b           . + 4 + (0x86 << 2)
label_2f0f00:
    if (ctx->pc == 0x2F0F00u) {
        ctx->pc = 0x2F0F04u;
        goto label_2f0f04;
    }
    ctx->pc = 0x2F0EFCu;
    {
        const bool branch_taken_0x2f0efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0efc) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F0F04u;
label_2f0f04:
    // 0x2f0f04: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
label_2f0f08:
    if (ctx->pc == 0x2F0F08u) {
        ctx->pc = 0x2F0F08u;
            // 0x2f0f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F0Cu;
        goto label_2f0f0c;
    }
    ctx->pc = 0x2F0F04u;
    {
        const bool branch_taken_0x2f0f04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F04u;
            // 0x2f0f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f04) {
            ctx->pc = 0x2F0F18u;
            goto label_2f0f18;
        }
    }
    ctx->pc = 0x2F0F0Cu;
label_2f0f0c:
    // 0x2f0f0c: 0xc0b25c4  jal         func_2C9710
label_2f0f10:
    if (ctx->pc == 0x2F0F10u) {
        ctx->pc = 0x2F0F10u;
            // 0x2f0f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F14u;
        goto label_2f0f14;
    }
    ctx->pc = 0x2F0F0Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F14u);
    ctx->pc = 0x2F0F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F0Cu;
            // 0x2f0f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C9710u;
    if (runtime->hasFunction(0x2C9710u)) {
        auto targetFn = runtime->lookupFunction(0x2C9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F14u; }
        if (ctx->pc != 0x2F0F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteVillager__6CSceneFv_0x2c9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F14u; }
        if (ctx->pc != 0x2F0F14u) { return; }
    }
    ctx->pc = 0x2F0F14u;
label_2f0f14:
    // 0x2f0f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f18:
    // 0x2f0f18: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x2f0f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_2f0f1c:
    // 0x2f0f1c: 0x27a6013c  addiu       $a2, $sp, 0x13C
    ctx->pc = 0x2f0f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_2f0f20:
    // 0x2f0f20: 0xc0bb9dc  jal         func_2EE770
label_2f0f24:
    if (ctx->pc == 0x2F0F24u) {
        ctx->pc = 0x2F0F24u;
            // 0x2f0f24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0F28u;
        goto label_2f0f28;
    }
    ctx->pc = 0x2F0F20u;
    SET_GPR_U32(ctx, 31, 0x2F0F28u);
    ctx->pc = 0x2F0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F20u;
            // 0x2f0f24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE770u;
    if (runtime->hasFunction(0x2EE770u)) {
        auto targetFn = runtime->lookupFunction(0x2EE770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F28u; }
        if (ctx->pc != 0x2F0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlacePartsAtInfoID__8CEditMapFiPii_0x2ee770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F28u; }
        if (ctx->pc != 0x2F0F28u) { return; }
    }
    ctx->pc = 0x2F0F28u;
label_2f0f28:
    // 0x2f0f28: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
label_2f0f2c:
    if (ctx->pc == 0x2F0F2Cu) {
        ctx->pc = 0x2F0F2Cu;
            // 0x2f0f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F30u;
        goto label_2f0f30;
    }
    ctx->pc = 0x2F0F28u;
    {
        const bool branch_taken_0x2f0f28 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2F0F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F28u;
            // 0x2f0f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f28) {
            ctx->pc = 0x2F0F38u;
            goto label_2f0f38;
        }
    }
    ctx->pc = 0x2F0F30u;
label_2f0f30:
    // 0x2f0f30: 0x10000079  b           . + 4 + (0x79 << 2)
label_2f0f34:
    if (ctx->pc == 0x2F0F34u) {
        ctx->pc = 0x2F0F38u;
        goto label_2f0f38;
    }
    ctx->pc = 0x2F0F30u;
    {
        const bool branch_taken_0x2f0f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0f30) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F0F38u;
label_2f0f38:
    // 0x2f0f38: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x2f0f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_2f0f3c:
    // 0x2f0f3c: 0xc06c310  jal         func_1B0C40
label_2f0f40:
    if (ctx->pc == 0x2F0F40u) {
        ctx->pc = 0x2F0F40u;
            // 0x2f0f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F44u;
        goto label_2f0f44;
    }
    ctx->pc = 0x2F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F44u);
    ctx->pc = 0x2F0F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F3Cu;
            // 0x2f0f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F44u; }
        if (ctx->pc != 0x2F0F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F44u; }
        if (ctx->pc != 0x2F0F44u) { return; }
    }
    ctx->pc = 0x2F0F44u;
label_2f0f44:
    // 0x2f0f44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f0f44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f48:
    // 0x2f0f48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2f0f4c:
    if (ctx->pc == 0x2F0F4Cu) {
        ctx->pc = 0x2F0F4Cu;
            // 0x2f0f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F50u;
        goto label_2f0f50;
    }
    ctx->pc = 0x2F0F48u;
    {
        const bool branch_taken_0x2f0f48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F48u;
            // 0x2f0f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f48) {
            ctx->pc = 0x2F0F58u;
            goto label_2f0f58;
        }
    }
    ctx->pc = 0x2F0F50u;
label_2f0f50:
    // 0x2f0f50: 0x10000071  b           . + 4 + (0x71 << 2)
label_2f0f54:
    if (ctx->pc == 0x2F0F54u) {
        ctx->pc = 0x2F0F54u;
            // 0x2f0f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F58u;
        goto label_2f0f58;
    }
    ctx->pc = 0x2F0F50u;
    {
        const bool branch_taken_0x2f0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F50u;
            // 0x2f0f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f50) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F0F58u;
label_2f0f58:
    // 0x2f0f58: 0xc06d69c  jal         func_1B5A70
label_2f0f5c:
    if (ctx->pc == 0x2F0F5Cu) {
        ctx->pc = 0x2F0F60u;
        goto label_2f0f60;
    }
    ctx->pc = 0x2F0F58u;
    SET_GPR_U32(ctx, 31, 0x2F0F60u);
    ctx->pc = 0x1B5A70u;
    if (runtime->hasFunction(0x1B5A70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F60u; }
        if (ctx->pc != 0x2F0F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLiveNPC__10CEditPartsFv_0x1b5a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F60u; }
        if (ctx->pc != 0x2F0F60u) { return; }
    }
    ctx->pc = 0x2F0F60u;
label_2f0f60:
    // 0x2f0f60: 0x8e14003c  lw          $s4, 0x3C($s0)
    ctx->pc = 0x2f0f60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f0f64:
    // 0x2f0f64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f0f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f68:
    // 0x2f0f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f6c:
    // 0x2f0f6c: 0xc0c65f4  jal         func_3197D0
label_2f0f70:
    if (ctx->pc == 0x2F0F70u) {
        ctx->pc = 0x2F0F70u;
            // 0x2f0f70: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F0F74u;
        goto label_2f0f74;
    }
    ctx->pc = 0x2F0F6Cu;
    SET_GPR_U32(ctx, 31, 0x2F0F74u);
    ctx->pc = 0x2F0F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F6Cu;
            // 0x2f0f70: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3197D0u;
    if (runtime->hasFunction(0x3197D0u)) {
        auto targetFn = runtime->lookupFunction(0x3197D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F74u; }
        if (ctx->pc != 0x2F0F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVillagerModelName__FiPc_0x3197d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0F74u; }
        if (ctx->pc != 0x2F0F74u) { return; }
    }
    ctx->pc = 0x2F0F74u;
label_2f0f74:
    // 0x2f0f74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f0f78:
    if (ctx->pc == 0x2F0F78u) {
        ctx->pc = 0x2F0F78u;
            // 0x2f0f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0F7Cu;
        goto label_2f0f7c;
    }
    ctx->pc = 0x2F0F74u;
    {
        const bool branch_taken_0x2f0f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F74u;
            // 0x2f0f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f74) {
            ctx->pc = 0x2F0F84u;
            goto label_2f0f84;
        }
    }
    ctx->pc = 0x2F0F7Cu;
label_2f0f7c:
    // 0x2f0f7c: 0x10000066  b           . + 4 + (0x66 << 2)
label_2f0f80:
    if (ctx->pc == 0x2F0F80u) {
        ctx->pc = 0x2F0F84u;
        goto label_2f0f84;
    }
    ctx->pc = 0x2F0F7Cu;
    {
        const bool branch_taken_0x2f0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0f7c) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F0F84u;
label_2f0f84:
    // 0x2f0f84: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_2f0f88:
    if (ctx->pc == 0x2F0F88u) {
        ctx->pc = 0x2F0F88u;
            // 0x2f0f88: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2F0F8Cu;
        goto label_2f0f8c;
    }
    ctx->pc = 0x2F0F84u;
    {
        const bool branch_taken_0x2f0f84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F84u;
            // 0x2f0f88: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f84) {
            ctx->pc = 0x2F0F94u;
            goto label_2f0f94;
        }
    }
    ctx->pc = 0x2F0F8Cu;
label_2f0f8c:
    // 0x2f0f8c: 0x10000062  b           . + 4 + (0x62 << 2)
label_2f0f90:
    if (ctx->pc == 0x2F0F90u) {
        ctx->pc = 0x2F0F90u;
            // 0x2f0f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F0F94u;
        goto label_2f0f94;
    }
    ctx->pc = 0x2F0F8Cu;
    {
        const bool branch_taken_0x2f0f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F8Cu;
            // 0x2f0f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0f8c) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F0F94u;
label_2f0f94:
    // 0x2f0f94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f0f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f98:
    // 0x2f0f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f0f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f0f9c:
    // 0x2f0f9c: 0xc0524dc  jal         func_149370
label_2f0fa0:
    if (ctx->pc == 0x2F0FA0u) {
        ctx->pc = 0x2F0FA0u;
            // 0x2f0fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FA4u;
        goto label_2f0fa4;
    }
    ctx->pc = 0x2F0F9Cu;
    SET_GPR_U32(ctx, 31, 0x2F0FA4u);
    ctx->pc = 0x2F0FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0F9Cu;
            // 0x2f0fa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FA4u; }
        if (ctx->pc != 0x2F0FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FA4u; }
        if (ctx->pc != 0x2F0FA4u) { return; }
    }
    ctx->pc = 0x2F0FA4u;
label_2f0fa4:
    // 0x2f0fa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2f0fa8:
    if (ctx->pc == 0x2F0FA8u) {
        ctx->pc = 0x2F0FA8u;
            // 0x2f0fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FACu;
        goto label_2f0fac;
    }
    ctx->pc = 0x2F0FA4u;
    {
        const bool branch_taken_0x2f0fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FA4u;
            // 0x2f0fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fa4) {
            ctx->pc = 0x2F0FB4u;
            goto label_2f0fb4;
        }
    }
    ctx->pc = 0x2F0FACu;
label_2f0fac:
    // 0x2f0fac: 0x1000005a  b           . + 4 + (0x5A << 2)
label_2f0fb0:
    if (ctx->pc == 0x2F0FB0u) {
        ctx->pc = 0x2F0FB0u;
            // 0x2f0fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FB4u;
        goto label_2f0fb4;
    }
    ctx->pc = 0x2F0FACu;
    {
        const bool branch_taken_0x2f0fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FACu;
            // 0x2f0fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0fac) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F0FB4u;
label_2f0fb4:
    // 0x2f0fb4: 0xc0a0c9c  jal         func_283270
label_2f0fb8:
    if (ctx->pc == 0x2F0FB8u) {
        ctx->pc = 0x2F0FB8u;
            // 0x2f0fb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F0FBCu;
        goto label_2f0fbc;
    }
    ctx->pc = 0x2F0FB4u;
    SET_GPR_U32(ctx, 31, 0x2F0FBCu);
    ctx->pc = 0x2F0FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FB4u;
            // 0x2f0fb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283270u;
    if (runtime->hasFunction(0x283270u)) {
        auto targetFn = runtime->lookupFunction(0x283270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FBCu; }
        if (ctx->pc != 0x2F0FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignStack__6CSceneFi_0x283270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FBCu; }
        if (ctx->pc != 0x2F0FBCu) { return; }
    }
    ctx->pc = 0x2F0FBCu;
label_2f0fbc:
    // 0x2f0fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0fc0:
    // 0x2f0fc0: 0xc0a0c64  jal         func_283190
label_2f0fc4:
    if (ctx->pc == 0x2F0FC4u) {
        ctx->pc = 0x2F0FC4u;
            // 0x2f0fc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2F0FC8u;
        goto label_2f0fc8;
    }
    ctx->pc = 0x2F0FC0u;
    SET_GPR_U32(ctx, 31, 0x2F0FC8u);
    ctx->pc = 0x2F0FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FC0u;
            // 0x2f0fc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FC8u; }
        if (ctx->pc != 0x2F0FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FC8u; }
        if (ctx->pc != 0x2F0FC8u) { return; }
    }
    ctx->pc = 0x2F0FC8u;
label_2f0fc8:
    // 0x2f0fc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f0fc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0fcc:
    // 0x2f0fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0fd0:
    // 0x2f0fd0: 0xc0a1240  jal         func_284900
label_2f0fd4:
    if (ctx->pc == 0x2F0FD4u) {
        ctx->pc = 0x2F0FD4u;
            // 0x2f0fd4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2F0FD8u;
        goto label_2f0fd8;
    }
    ctx->pc = 0x2F0FD0u;
    SET_GPR_U32(ctx, 31, 0x2F0FD8u);
    ctx->pc = 0x2F0FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FD0u;
            // 0x2f0fd4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FD8u; }
        if (ctx->pc != 0x2F0FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FD8u; }
        if (ctx->pc != 0x2F0FD8u) { return; }
    }
    ctx->pc = 0x2F0FD8u;
label_2f0fd8:
    // 0x2f0fd8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f0fd8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f0fdc:
    // 0x2f0fdc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x2f0fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_2f0fe0:
    // 0x2f0fe0: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2f0fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2f0fe4:
    // 0x2f0fe4: 0xc04b950  jal         func_12E540
label_2f0fe8:
    if (ctx->pc == 0x2F0FE8u) {
        ctx->pc = 0x2F0FE8u;
            // 0x2f0fe8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F0FECu;
        goto label_2f0fec;
    }
    ctx->pc = 0x2F0FE4u;
    SET_GPR_U32(ctx, 31, 0x2F0FECu);
    ctx->pc = 0x2F0FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F0FE4u;
            // 0x2f0fe8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FECu; }
        if (ctx->pc != 0x2F0FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F0FECu; }
        if (ctx->pc != 0x2F0FECu) { return; }
    }
    ctx->pc = 0x2F0FECu;
label_2f0fec:
    // 0x2f0fec: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x2f0fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_2f0ff0:
    // 0x2f0ff0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f0ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ff4:
    // 0x2f0ff4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x2f0ff4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ff8:
    // 0x2f0ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f0ffc:
    // 0x2f0ffc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f1000:
    // 0x2f1000: 0x24e71670  addiu       $a3, $a3, 0x1670
    ctx->pc = 0x2f1000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5744));
label_2f1004:
    // 0x2f1004: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2f1004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1008:
    // 0x2f1008: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2f1008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f100c:
    // 0x2f100c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2f100cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1010:
    // 0x2f1010: 0xc0a1458  jal         func_285160
label_2f1014:
    if (ctx->pc == 0x2F1014u) {
        ctx->pc = 0x2F1014u;
            // 0x2f1014: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->pc = 0x2F1018u;
        goto label_2f1018;
    }
    ctx->pc = 0x2F1010u;
    SET_GPR_U32(ctx, 31, 0x2F1018u);
    ctx->pc = 0x2F1014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1010u;
            // 0x2f1014: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285160u;
    if (runtime->hasFunction(0x285160u)) {
        auto targetFn = runtime->lookupFunction(0x285160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1018u; }
        if (ctx->pc != 0x2F1018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadChara__6CSceneFiPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryii_0x285160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1018u; }
        if (ctx->pc != 0x2F1018u) { return; }
    }
    ctx->pc = 0x2F1018u;
label_2f1018:
    // 0x2f1018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f101c:
    // 0x2f101c: 0xc0a0ed8  jal         func_283B60
label_2f1020:
    if (ctx->pc == 0x2F1020u) {
        ctx->pc = 0x2F1020u;
            // 0x2f1020: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2F1024u;
        goto label_2f1024;
    }
    ctx->pc = 0x2F101Cu;
    SET_GPR_U32(ctx, 31, 0x2F1024u);
    ctx->pc = 0x2F1020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F101Cu;
            // 0x2f1020: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1024u; }
        if (ctx->pc != 0x2F1024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1024u; }
        if (ctx->pc != 0x2F1024u) { return; }
    }
    ctx->pc = 0x2F1024u;
label_2f1024:
    // 0x2f1024: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f1024u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1028:
    // 0x2f1028: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_2f102c:
    if (ctx->pc == 0x2F102Cu) {
        ctx->pc = 0x2F102Cu;
            // 0x2f102c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2F1030u;
        goto label_2f1030;
    }
    ctx->pc = 0x2F1028u;
    {
        const bool branch_taken_0x2f1028 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F102Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1028u;
            // 0x2f102c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1028) {
            ctx->pc = 0x2F1038u;
            goto label_2f1038;
        }
    }
    ctx->pc = 0x2F1030u;
label_2f1030:
    // 0x2f1030: 0x10000039  b           . + 4 + (0x39 << 2)
label_2f1034:
    if (ctx->pc == 0x2F1034u) {
        ctx->pc = 0x2F1034u;
            // 0x2f1034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F1038u;
        goto label_2f1038;
    }
    ctx->pc = 0x2F1030u;
    {
        const bool branch_taken_0x2f1030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1030u;
            // 0x2f1034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1030) {
            ctx->pc = 0x2F1118u;
            goto label_2f1118;
        }
    }
    ctx->pc = 0x2F1038u;
label_2f1038:
    // 0x2f1038: 0x262402b0  addiu       $a0, $s1, 0x2B0
    ctx->pc = 0x2f1038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
label_2f103c:
    // 0x2f103c: 0xc0a763c  jal         func_29D8F0
label_2f1040:
    if (ctx->pc == 0x2F1040u) {
        ctx->pc = 0x2F1040u;
            // 0x2f1040: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
        ctx->pc = 0x2F1044u;
        goto label_2f1044;
    }
    ctx->pc = 0x2F103Cu;
    SET_GPR_U32(ctx, 31, 0x2F1044u);
    ctx->pc = 0x2F1040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F103Cu;
            // 0x2f1040: 0x24a51680  addiu       $a1, $a1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8F0u;
    if (runtime->hasFunction(0x29D8F0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1044u; }
        if (ctx->pc != 0x2F1044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Search__14CFuncPointMngrFPc_0x29d8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1044u; }
        if (ctx->pc != 0x2F1044u) { return; }
    }
    ctx->pc = 0x2F1044u;
label_2f1044:
    // 0x2f1044: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f1044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f1048:
    // 0x2f1048: 0x12a0002b  beqz        $s5, . + 4 + (0x2B << 2)
label_2f104c:
    if (ctx->pc == 0x2F104Cu) {
        ctx->pc = 0x2F104Cu;
            // 0x2f104c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F1050u;
        goto label_2f1050;
    }
    ctx->pc = 0x2F1048u;
    {
        const bool branch_taken_0x2f1048 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1048u;
            // 0x2f104c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1048) {
            ctx->pc = 0x2F10F8u;
            goto label_2f10f8;
        }
    }
    ctx->pc = 0x2F1050u;
label_2f1050:
    // 0x2f1050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1054:
    // 0x2f1054: 0xc059cc0  jal         func_167300
label_2f1058:
    if (ctx->pc == 0x2F1058u) {
        ctx->pc = 0x2F1058u;
            // 0x2f1058: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2F105Cu;
        goto label_2f105c;
    }
    ctx->pc = 0x2F1054u;
    SET_GPR_U32(ctx, 31, 0x2F105Cu);
    ctx->pc = 0x2F1058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1054u;
            // 0x2f1058: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F105Cu; }
        if (ctx->pc != 0x2F105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F105Cu; }
        if (ctx->pc != 0x2F105Cu) { return; }
    }
    ctx->pc = 0x2F105Cu;
label_2f105c:
    // 0x2f105c: 0x7aa30180  lq          $v1, 0x180($s5)
    ctx->pc = 0x2f105cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 384)));
label_2f1060:
    // 0x2f1060: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2f1060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2f1064:
    // 0x2f1064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f1064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2f1068:
    // 0x2f1068: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2f1068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2f106c:
    // 0x2f106c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f106cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1070:
    // 0x2f1070: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2f1070u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2f1074:
    // 0x2f1074: 0xc041bb0  jal         func_106EC0
label_2f1078:
    if (ctx->pc == 0x2F1078u) {
        ctx->pc = 0x2F1078u;
            // 0x2f1078: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x2F107Cu;
        goto label_2f107c;
    }
    ctx->pc = 0x2F1074u;
    SET_GPR_U32(ctx, 31, 0x2F107Cu);
    ctx->pc = 0x2F1078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1074u;
            // 0x2f1078: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F107Cu; }
        if (ctx->pc != 0x2F107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F107Cu; }
        if (ctx->pc != 0x2F107Cu) { return; }
    }
    ctx->pc = 0x2F107Cu;
label_2f107c:
    // 0x2f107c: 0x7aa30190  lq          $v1, 0x190($s5)
    ctx->pc = 0x2f107cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 400)));
label_2f1080:
    // 0x2f1080: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2f1080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2f1084:
    // 0x2f1084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1088:
    // 0x2f1088: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2f1088u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2f108c:
    // 0x2f108c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2f108cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f1090:
    // 0x2f1090: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2f1094:
    // 0x2f1094: 0x320f809  jalr        $t9
label_2f1098:
    if (ctx->pc == 0x2F1098u) {
        ctx->pc = 0x2F1098u;
            // 0x2f1098: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2F109Cu;
        goto label_2f109c;
    }
    ctx->pc = 0x2F1094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F109Cu);
        ctx->pc = 0x2F1098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1094u;
            // 0x2f1098: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F109Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F109Cu; }
            if (ctx->pc != 0x2F109Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F109Cu;
label_2f109c:
    // 0x2f109c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x2f109cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_2f10a0:
    // 0x2f10a0: 0x27b100d4  addiu       $s1, $sp, 0xD4
    ctx->pc = 0x2f10a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2f10a4:
    // 0x2f10a4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2f10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2f10a8:
    // 0x2f10a8: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2f10a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f10ac:
    // 0x2f10ac: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2f10acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f10b0:
    // 0x2f10b0: 0xc04c374  jal         func_130DD0
label_2f10b4:
    if (ctx->pc == 0x2F10B4u) {
        ctx->pc = 0x2F10B4u;
            // 0x2f10b4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2F10B8u;
        goto label_2f10b8;
    }
    ctx->pc = 0x2F10B0u;
    SET_GPR_U32(ctx, 31, 0x2F10B8u);
    ctx->pc = 0x2F10B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10B0u;
            // 0x2f10b4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F10B8u; }
        if (ctx->pc != 0x2F10B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F10B8u; }
        if (ctx->pc != 0x2F10B8u) { return; }
    }
    ctx->pc = 0x2F10B8u;
label_2f10b8:
    // 0x2f10b8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2f10b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2f10bc:
    // 0x2f10bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f10bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f10c0:
    // 0x2f10c0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f10c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f10c4:
    // 0x2f10c4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f10c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f10c8:
    // 0x2f10c8: 0x320f809  jalr        $t9
label_2f10cc:
    if (ctx->pc == 0x2F10CCu) {
        ctx->pc = 0x2F10CCu;
            // 0x2f10cc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2F10D0u;
        goto label_2f10d0;
    }
    ctx->pc = 0x2F10C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F10D0u);
        ctx->pc = 0x2F10CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10C8u;
            // 0x2f10cc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F10D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F10D0u; }
            if (ctx->pc != 0x2F10D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F10D0u;
label_2f10d0:
    // 0x2f10d0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2f10d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2f10d4:
    // 0x2f10d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f10d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f10d8:
    // 0x2f10d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2f10d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2f10dc:
    // 0x2f10dc: 0x320f809  jalr        $t9
label_2f10e0:
    if (ctx->pc == 0x2F10E0u) {
        ctx->pc = 0x2F10E0u;
            // 0x2f10e0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2F10E4u;
        goto label_2f10e4;
    }
    ctx->pc = 0x2F10DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F10E4u);
        ctx->pc = 0x2F10E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10DCu;
            // 0x2f10e0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F10E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F10E4u; }
            if (ctx->pc != 0x2F10E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F10E4u;
label_2f10e4:
    // 0x2f10e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f10e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f10e8:
    // 0x2f10e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f10e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f10ec:
    // 0x2f10ec: 0xc0a11b4  jal         func_2846D0
label_2f10f0:
    if (ctx->pc == 0x2F10F0u) {
        ctx->pc = 0x2F10F0u;
            // 0x2f10f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2F10F4u;
        goto label_2f10f4;
    }
    ctx->pc = 0x2F10ECu;
    SET_GPR_U32(ctx, 31, 0x2F10F4u);
    ctx->pc = 0x2F10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10ECu;
            // 0x2f10f0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F10F4u; }
        if (ctx->pc != 0x2F10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F10F4u; }
        if (ctx->pc != 0x2F10F4u) { return; }
    }
    ctx->pc = 0x2F10F4u;
label_2f10f4:
    // 0x2f10f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f10f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f10f8:
    // 0x2f10f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2f10f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2f10fc:
    // 0x2f10fc: 0xc0a0ec0  jal         func_283B00
label_2f1100:
    if (ctx->pc == 0x2F1100u) {
        ctx->pc = 0x2F1100u;
            // 0x2f1100: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F1104u;
        goto label_2f1104;
    }
    ctx->pc = 0x2F10FCu;
    SET_GPR_U32(ctx, 31, 0x2F1104u);
    ctx->pc = 0x2F1100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F10FCu;
            // 0x2f1100: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B00u;
    if (runtime->hasFunction(0x283B00u)) {
        auto targetFn = runtime->lookupFunction(0x283B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1104u; }
        if (ctx->pc != 0x2F1104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaNo__6CSceneFii_0x283b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1104u; }
        if (ctx->pc != 0x2F1104u) { return; }
    }
    ctx->pc = 0x2F1104u;
label_2f1104:
    // 0x2f1104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f1104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f1108:
    // 0x2f1108: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f1108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f110c:
    // 0x2f110c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f110cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f1110:
    // 0x2f1110: 0xc0b2914  jal         func_2CA450
label_2f1114:
    if (ctx->pc == 0x2F1114u) {
        ctx->pc = 0x2F1114u;
            // 0x2f1114: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2F1118u;
        goto label_2f1118;
    }
    ctx->pc = 0x2F1110u;
    SET_GPR_U32(ctx, 31, 0x2F1118u);
    ctx->pc = 0x2F1114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1110u;
            // 0x2f1114: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA450u;
    if (runtime->hasFunction(0x2CA450u)) {
        auto targetFn = runtime->lookupFunction(0x2CA450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1118u; }
        if (ctx->pc != 0x2F1118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP9mgCMemory_0x2ca450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1118u; }
        if (ctx->pc != 0x2F1118u) { return; }
    }
    ctx->pc = 0x2F1118u;
label_2f1118:
    // 0x2f1118: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f1118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f111c:
    // 0x2f111c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2f111cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2f1120:
    // 0x2f1120: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2f1120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f1124:
    // 0x2f1124: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2f1124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f1128:
    // 0x2f1128: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2f1128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f112c:
    // 0x2f112c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f112cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f1130:
    // 0x2f1130: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f1130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1134:
    // 0x2f1134: 0x3e00008  jr          $ra
label_2f1138:
    if (ctx->pc == 0x2F1138u) {
        ctx->pc = 0x2F1138u;
            // 0x2f1138: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2F113Cu;
        goto label_fallthrough_0x2f1134;
    }
    ctx->pc = 0x2F1134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1134u;
            // 0x2f1138: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f1134:
    ctx->pc = 0x2F113Cu;
}
