#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COPY_CHARA__FP12RS_STACKDATAi
// Address: 0x266d50 - 0x267004
void ps2__COPY_CHARA__FP12RS_STACKDATAi_0x266d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COPY_CHARA__FP12RS_STACKDATAi_0x266d50");
#endif

    switch (ctx->pc) {
        case 0x266d50u: goto label_266d50;
        case 0x266d54u: goto label_266d54;
        case 0x266d58u: goto label_266d58;
        case 0x266d5cu: goto label_266d5c;
        case 0x266d60u: goto label_266d60;
        case 0x266d64u: goto label_266d64;
        case 0x266d68u: goto label_266d68;
        case 0x266d6cu: goto label_266d6c;
        case 0x266d70u: goto label_266d70;
        case 0x266d74u: goto label_266d74;
        case 0x266d78u: goto label_266d78;
        case 0x266d7cu: goto label_266d7c;
        case 0x266d80u: goto label_266d80;
        case 0x266d84u: goto label_266d84;
        case 0x266d88u: goto label_266d88;
        case 0x266d8cu: goto label_266d8c;
        case 0x266d90u: goto label_266d90;
        case 0x266d94u: goto label_266d94;
        case 0x266d98u: goto label_266d98;
        case 0x266d9cu: goto label_266d9c;
        case 0x266da0u: goto label_266da0;
        case 0x266da4u: goto label_266da4;
        case 0x266da8u: goto label_266da8;
        case 0x266dacu: goto label_266dac;
        case 0x266db0u: goto label_266db0;
        case 0x266db4u: goto label_266db4;
        case 0x266db8u: goto label_266db8;
        case 0x266dbcu: goto label_266dbc;
        case 0x266dc0u: goto label_266dc0;
        case 0x266dc4u: goto label_266dc4;
        case 0x266dc8u: goto label_266dc8;
        case 0x266dccu: goto label_266dcc;
        case 0x266dd0u: goto label_266dd0;
        case 0x266dd4u: goto label_266dd4;
        case 0x266dd8u: goto label_266dd8;
        case 0x266ddcu: goto label_266ddc;
        case 0x266de0u: goto label_266de0;
        case 0x266de4u: goto label_266de4;
        case 0x266de8u: goto label_266de8;
        case 0x266decu: goto label_266dec;
        case 0x266df0u: goto label_266df0;
        case 0x266df4u: goto label_266df4;
        case 0x266df8u: goto label_266df8;
        case 0x266dfcu: goto label_266dfc;
        case 0x266e00u: goto label_266e00;
        case 0x266e04u: goto label_266e04;
        case 0x266e08u: goto label_266e08;
        case 0x266e0cu: goto label_266e0c;
        case 0x266e10u: goto label_266e10;
        case 0x266e14u: goto label_266e14;
        case 0x266e18u: goto label_266e18;
        case 0x266e1cu: goto label_266e1c;
        case 0x266e20u: goto label_266e20;
        case 0x266e24u: goto label_266e24;
        case 0x266e28u: goto label_266e28;
        case 0x266e2cu: goto label_266e2c;
        case 0x266e30u: goto label_266e30;
        case 0x266e34u: goto label_266e34;
        case 0x266e38u: goto label_266e38;
        case 0x266e3cu: goto label_266e3c;
        case 0x266e40u: goto label_266e40;
        case 0x266e44u: goto label_266e44;
        case 0x266e48u: goto label_266e48;
        case 0x266e4cu: goto label_266e4c;
        case 0x266e50u: goto label_266e50;
        case 0x266e54u: goto label_266e54;
        case 0x266e58u: goto label_266e58;
        case 0x266e5cu: goto label_266e5c;
        case 0x266e60u: goto label_266e60;
        case 0x266e64u: goto label_266e64;
        case 0x266e68u: goto label_266e68;
        case 0x266e6cu: goto label_266e6c;
        case 0x266e70u: goto label_266e70;
        case 0x266e74u: goto label_266e74;
        case 0x266e78u: goto label_266e78;
        case 0x266e7cu: goto label_266e7c;
        case 0x266e80u: goto label_266e80;
        case 0x266e84u: goto label_266e84;
        case 0x266e88u: goto label_266e88;
        case 0x266e8cu: goto label_266e8c;
        case 0x266e90u: goto label_266e90;
        case 0x266e94u: goto label_266e94;
        case 0x266e98u: goto label_266e98;
        case 0x266e9cu: goto label_266e9c;
        case 0x266ea0u: goto label_266ea0;
        case 0x266ea4u: goto label_266ea4;
        case 0x266ea8u: goto label_266ea8;
        case 0x266eacu: goto label_266eac;
        case 0x266eb0u: goto label_266eb0;
        case 0x266eb4u: goto label_266eb4;
        case 0x266eb8u: goto label_266eb8;
        case 0x266ebcu: goto label_266ebc;
        case 0x266ec0u: goto label_266ec0;
        case 0x266ec4u: goto label_266ec4;
        case 0x266ec8u: goto label_266ec8;
        case 0x266eccu: goto label_266ecc;
        case 0x266ed0u: goto label_266ed0;
        case 0x266ed4u: goto label_266ed4;
        case 0x266ed8u: goto label_266ed8;
        case 0x266edcu: goto label_266edc;
        case 0x266ee0u: goto label_266ee0;
        case 0x266ee4u: goto label_266ee4;
        case 0x266ee8u: goto label_266ee8;
        case 0x266eecu: goto label_266eec;
        case 0x266ef0u: goto label_266ef0;
        case 0x266ef4u: goto label_266ef4;
        case 0x266ef8u: goto label_266ef8;
        case 0x266efcu: goto label_266efc;
        case 0x266f00u: goto label_266f00;
        case 0x266f04u: goto label_266f04;
        case 0x266f08u: goto label_266f08;
        case 0x266f0cu: goto label_266f0c;
        case 0x266f10u: goto label_266f10;
        case 0x266f14u: goto label_266f14;
        case 0x266f18u: goto label_266f18;
        case 0x266f1cu: goto label_266f1c;
        case 0x266f20u: goto label_266f20;
        case 0x266f24u: goto label_266f24;
        case 0x266f28u: goto label_266f28;
        case 0x266f2cu: goto label_266f2c;
        case 0x266f30u: goto label_266f30;
        case 0x266f34u: goto label_266f34;
        case 0x266f38u: goto label_266f38;
        case 0x266f3cu: goto label_266f3c;
        case 0x266f40u: goto label_266f40;
        case 0x266f44u: goto label_266f44;
        case 0x266f48u: goto label_266f48;
        case 0x266f4cu: goto label_266f4c;
        case 0x266f50u: goto label_266f50;
        case 0x266f54u: goto label_266f54;
        case 0x266f58u: goto label_266f58;
        case 0x266f5cu: goto label_266f5c;
        case 0x266f60u: goto label_266f60;
        case 0x266f64u: goto label_266f64;
        case 0x266f68u: goto label_266f68;
        case 0x266f6cu: goto label_266f6c;
        case 0x266f70u: goto label_266f70;
        case 0x266f74u: goto label_266f74;
        case 0x266f78u: goto label_266f78;
        case 0x266f7cu: goto label_266f7c;
        case 0x266f80u: goto label_266f80;
        case 0x266f84u: goto label_266f84;
        case 0x266f88u: goto label_266f88;
        case 0x266f8cu: goto label_266f8c;
        case 0x266f90u: goto label_266f90;
        case 0x266f94u: goto label_266f94;
        case 0x266f98u: goto label_266f98;
        case 0x266f9cu: goto label_266f9c;
        case 0x266fa0u: goto label_266fa0;
        case 0x266fa4u: goto label_266fa4;
        case 0x266fa8u: goto label_266fa8;
        case 0x266facu: goto label_266fac;
        case 0x266fb0u: goto label_266fb0;
        case 0x266fb4u: goto label_266fb4;
        case 0x266fb8u: goto label_266fb8;
        case 0x266fbcu: goto label_266fbc;
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        case 0x267000u: goto label_267000;
        default: break;
    }

    ctx->pc = 0x266d50u;

label_266d50:
    // 0x266d50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x266d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_266d54:
    // 0x266d54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x266d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_266d58:
    // 0x266d58: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x266d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_266d5c:
    // 0x266d5c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x266d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_266d60:
    // 0x266d60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_266d64:
    // 0x266d64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x266d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_266d68:
    // 0x266d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x266d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_266d6c:
    // 0x266d6c: 0x10a20035  beq         $a1, $v0, . + 4 + (0x35 << 2)
label_266d70:
    if (ctx->pc == 0x266D70u) {
        ctx->pc = 0x266D70u;
            // 0x266d70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x266D74u;
        goto label_266d74;
    }
    ctx->pc = 0x266D6Cu;
    {
        const bool branch_taken_0x266d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x266D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266D6Cu;
            // 0x266d70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d6c) {
            ctx->pc = 0x266E44u;
            goto label_266e44;
        }
    }
    ctx->pc = 0x266D74u;
label_266d74:
    // 0x266d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266d78:
    // 0x266d78: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_266d7c:
    if (ctx->pc == 0x266D7Cu) {
        ctx->pc = 0x266D80u;
        goto label_266d80;
    }
    ctx->pc = 0x266D78u;
    {
        const bool branch_taken_0x266d78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x266d78) {
            ctx->pc = 0x266D88u;
            goto label_266d88;
        }
    }
    ctx->pc = 0x266D80u;
label_266d80:
    // 0x266d80: 0x1000003b  b           . + 4 + (0x3B << 2)
label_266d84:
    if (ctx->pc == 0x266D84u) {
        ctx->pc = 0x266D84u;
            // 0x266d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266D88u;
        goto label_266d88;
    }
    ctx->pc = 0x266D80u;
    {
        const bool branch_taken_0x266d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266D80u;
            // 0x266d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d80) {
            ctx->pc = 0x266E70u;
            goto label_266e70;
        }
    }
    ctx->pc = 0x266D88u;
label_266d88:
    // 0x266d88: 0xc097e18  jal         func_25F860
label_266d8c:
    if (ctx->pc == 0x266D8Cu) {
        ctx->pc = 0x266D90u;
        goto label_266d90;
    }
    ctx->pc = 0x266D88u;
    SET_GPR_U32(ctx, 31, 0x266D90u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266D90u; }
        if (ctx->pc != 0x266D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266D90u; }
        if (ctx->pc != 0x266D90u) { return; }
    }
    ctx->pc = 0x266D90u;
label_266d90:
    // 0x266d90: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x266d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_266d94:
    // 0x266d94: 0x8c262a34  lw          $a2, 0x2A34($at)
    ctx->pc = 0x266d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10804)));
label_266d98:
    // 0x266d98: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_266d9c:
    if (ctx->pc == 0x266D9Cu) {
        ctx->pc = 0x266D9Cu;
            // 0x266d9c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x266DA0u;
        goto label_266da0;
    }
    ctx->pc = 0x266D98u;
    {
        const bool branch_taken_0x266d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x266D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266D98u;
            // 0x266d9c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266d98) {
            ctx->pc = 0x266DA8u;
            goto label_266da8;
        }
    }
    ctx->pc = 0x266DA0u;
label_266da0:
    // 0x266da0: 0x10000019  b           . + 4 + (0x19 << 2)
label_266da4:
    if (ctx->pc == 0x266DA4u) {
        ctx->pc = 0x266DA4u;
            // 0x266da4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266DA8u;
        goto label_266da8;
    }
    ctx->pc = 0x266DA0u;
    {
        const bool branch_taken_0x266da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266DA0u;
            // 0x266da4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266da0) {
            ctx->pc = 0x266E08u;
            goto label_266e08;
        }
    }
    ctx->pc = 0x266DA8u;
label_266da8:
    // 0x266da8: 0x8c242a38  lw          $a0, 0x2A38($at)
    ctx->pc = 0x266da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 10808)));
label_266dac:
    // 0x266dac: 0x1000000c  b           . + 4 + (0xC << 2)
label_266db0:
    if (ctx->pc == 0x266DB0u) {
        ctx->pc = 0x266DB0u;
            // 0x266db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266DB4u;
        goto label_266db4;
    }
    ctx->pc = 0x266DACu;
    {
        const bool branch_taken_0x266dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266DACu;
            // 0x266db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dac) {
            ctx->pc = 0x266DE0u;
            goto label_266de0;
        }
    }
    ctx->pc = 0x266DB4u;
label_266db4:
    // 0x266db4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x266db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_266db8:
    // 0x266db8: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_266dbc:
    if (ctx->pc == 0x266DBCu) {
        ctx->pc = 0x266DC0u;
        goto label_266dc0;
    }
    ctx->pc = 0x266DB8u;
    {
        const bool branch_taken_0x266db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x266db8) {
            ctx->pc = 0x266DECu;
            goto label_266dec;
        }
    }
    ctx->pc = 0x266DC0u;
label_266dc0:
    // 0x266dc0: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x266dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_266dc4:
    // 0x266dc4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_266dc8:
    if (ctx->pc == 0x266DC8u) {
        ctx->pc = 0x266DCCu;
        goto label_266dcc;
    }
    ctx->pc = 0x266DC4u;
    {
        const bool branch_taken_0x266dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x266dc4) {
            ctx->pc = 0x266DD4u;
            goto label_266dd4;
        }
    }
    ctx->pc = 0x266DCCu;
label_266dcc:
    // 0x266dcc: 0x10000004  b           . + 4 + (0x4 << 2)
label_266dd0:
    if (ctx->pc == 0x266DD0u) {
        ctx->pc = 0x266DD0u;
            // 0x266dd0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x266DD4u;
        goto label_266dd4;
    }
    ctx->pc = 0x266DCCu;
    {
        const bool branch_taken_0x266dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266DCCu;
            // 0x266dd0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dcc) {
            ctx->pc = 0x266DE0u;
            goto label_266de0;
        }
    }
    ctx->pc = 0x266DD4u;
label_266dd4:
    // 0x266dd4: 0x0  nop
    ctx->pc = 0x266dd4u;
    // NOP
label_266dd8:
    // 0x266dd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_266ddc:
    if (ctx->pc == 0x266DDCu) {
        ctx->pc = 0x266DDCu;
            // 0x266ddc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266DE0u;
        goto label_266de0;
    }
    ctx->pc = 0x266DD8u;
    {
        const bool branch_taken_0x266dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266DD8u;
            // 0x266ddc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266dd8) {
            ctx->pc = 0x266E08u;
            goto label_266e08;
        }
    }
    ctx->pc = 0x266DE0u;
label_266de0:
    // 0x266de0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x266de0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_266de4:
    // 0x266de4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_266de8:
    if (ctx->pc == 0x266DE8u) {
        ctx->pc = 0x266DECu;
        goto label_266dec;
    }
    ctx->pc = 0x266DE4u;
    {
        const bool branch_taken_0x266de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x266de4) {
            ctx->pc = 0x266DB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_266db4;
        }
    }
    ctx->pc = 0x266DECu;
label_266dec:
    // 0x266dec: 0x0  nop
    ctx->pc = 0x266decu;
    // NOP
label_266df0:
    // 0x266df0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_266df4:
    if (ctx->pc == 0x266DF4u) {
        ctx->pc = 0x266DF4u;
            // 0x266df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266DF8u;
        goto label_266df8;
    }
    ctx->pc = 0x266DF0u;
    {
        const bool branch_taken_0x266df0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x266DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266DF0u;
            // 0x266df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266df0) {
            ctx->pc = 0x266E00u;
            goto label_266e00;
        }
    }
    ctx->pc = 0x266DF8u;
label_266df8:
    // 0x266df8: 0x10000003  b           . + 4 + (0x3 << 2)
label_266dfc:
    if (ctx->pc == 0x266DFCu) {
        ctx->pc = 0x266E00u;
        goto label_266e00;
    }
    ctx->pc = 0x266DF8u;
    {
        const bool branch_taken_0x266df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266df8) {
            ctx->pc = 0x266E08u;
            goto label_266e08;
        }
    }
    ctx->pc = 0x266E00u;
label_266e00:
    // 0x266e00: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x266e00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_266e04:
    // 0x266e04: 0x0  nop
    ctx->pc = 0x266e04u;
    // NOP
label_266e08:
    // 0x266e08: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_266e0c:
    if (ctx->pc == 0x266E0Cu) {
        ctx->pc = 0x266E0Cu;
            // 0x266e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E10u;
        goto label_266e10;
    }
    ctx->pc = 0x266E08u;
    {
        const bool branch_taken_0x266e08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x266E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E08u;
            // 0x266e0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e08) {
            ctx->pc = 0x266E18u;
            goto label_266e18;
        }
    }
    ctx->pc = 0x266E10u;
label_266e10:
    // 0x266e10: 0x10000074  b           . + 4 + (0x74 << 2)
label_266e14:
    if (ctx->pc == 0x266E14u) {
        ctx->pc = 0x266E14u;
            // 0x266e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E18u;
        goto label_266e18;
    }
    ctx->pc = 0x266E10u;
    {
        const bool branch_taken_0x266e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E10u;
            // 0x266e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e10) {
            ctx->pc = 0x266FE4u;
            goto label_266fe4;
        }
    }
    ctx->pc = 0x266E18u;
label_266e18:
    // 0x266e18: 0xc097f6c  jal         func_25FDB0
label_266e1c:
    if (ctx->pc == 0x266E1Cu) {
        ctx->pc = 0x266E1Cu;
            // 0x266e1c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x266E20u;
        goto label_266e20;
    }
    ctx->pc = 0x266E18u;
    SET_GPR_U32(ctx, 31, 0x266E20u);
    ctx->pc = 0x266E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E18u;
            // 0x266e1c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E20u; }
        if (ctx->pc != 0x266E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E20u; }
        if (ctx->pc != 0x266E20u) { return; }
    }
    ctx->pc = 0x266E20u;
label_266e20:
    // 0x266e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266e24:
    // 0x266e24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266e24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266e28:
    // 0x266e28: 0xc097f6c  jal         func_25FDB0
label_266e2c:
    if (ctx->pc == 0x266E2Cu) {
        ctx->pc = 0x266E2Cu;
            // 0x266e2c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x266E30u;
        goto label_266e30;
    }
    ctx->pc = 0x266E28u;
    SET_GPR_U32(ctx, 31, 0x266E30u);
    ctx->pc = 0x266E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E28u;
            // 0x266e2c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E30u; }
        if (ctx->pc != 0x266E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E30u; }
        if (ctx->pc != 0x266E30u) { return; }
    }
    ctx->pc = 0x266E30u;
label_266e30:
    // 0x266e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266e34:
    // 0x266e34: 0xc097f6c  jal         func_25FDB0
label_266e38:
    if (ctx->pc == 0x266E38u) {
        ctx->pc = 0x266E38u;
            // 0x266e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E3Cu;
        goto label_266e3c;
    }
    ctx->pc = 0x266E34u;
    SET_GPR_U32(ctx, 31, 0x266E3Cu);
    ctx->pc = 0x266E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E34u;
            // 0x266e38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25FDB0u;
    if (runtime->hasFunction(0x25FDB0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E3Cu; }
        if (ctx->pc != 0x266E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetArgInt__FP8ARG_DATA_0x25fdb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E3Cu; }
        if (ctx->pc != 0x266E3Cu) { return; }
    }
    ctx->pc = 0x266E3Cu;
label_266e3c:
    // 0x266e3c: 0x1000000e  b           . + 4 + (0xE << 2)
label_266e40:
    if (ctx->pc == 0x266E40u) {
        ctx->pc = 0x266E40u;
            // 0x266e40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E44u;
        goto label_266e44;
    }
    ctx->pc = 0x266E3Cu;
    {
        const bool branch_taken_0x266e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E3Cu;
            // 0x266e40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e3c) {
            ctx->pc = 0x266E78u;
            goto label_266e78;
        }
    }
    ctx->pc = 0x266E44u;
label_266e44:
    // 0x266e44: 0xc097e18  jal         func_25F860
label_266e48:
    if (ctx->pc == 0x266E48u) {
        ctx->pc = 0x266E48u;
            // 0x266e48: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x266E4Cu;
        goto label_266e4c;
    }
    ctx->pc = 0x266E44u;
    SET_GPR_U32(ctx, 31, 0x266E4Cu);
    ctx->pc = 0x266E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E44u;
            // 0x266e48: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E4Cu; }
        if (ctx->pc != 0x266E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E4Cu; }
        if (ctx->pc != 0x266E4Cu) { return; }
    }
    ctx->pc = 0x266E4Cu;
label_266e4c:
    // 0x266e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266e50:
    // 0x266e50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266e54:
    // 0x266e54: 0xc097e18  jal         func_25F860
label_266e58:
    if (ctx->pc == 0x266E58u) {
        ctx->pc = 0x266E58u;
            // 0x266e58: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x266E5Cu;
        goto label_266e5c;
    }
    ctx->pc = 0x266E54u;
    SET_GPR_U32(ctx, 31, 0x266E5Cu);
    ctx->pc = 0x266E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E54u;
            // 0x266e58: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E5Cu; }
        if (ctx->pc != 0x266E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E5Cu; }
        if (ctx->pc != 0x266E5Cu) { return; }
    }
    ctx->pc = 0x266E5Cu;
label_266e5c:
    // 0x266e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_266e60:
    // 0x266e60: 0xc097e18  jal         func_25F860
label_266e64:
    if (ctx->pc == 0x266E64u) {
        ctx->pc = 0x266E64u;
            // 0x266e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E68u;
        goto label_266e68;
    }
    ctx->pc = 0x266E60u;
    SET_GPR_U32(ctx, 31, 0x266E68u);
    ctx->pc = 0x266E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E60u;
            // 0x266e64: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E68u; }
        if (ctx->pc != 0x266E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E68u; }
        if (ctx->pc != 0x266E68u) { return; }
    }
    ctx->pc = 0x266E68u;
label_266e68:
    // 0x266e68: 0x10000003  b           . + 4 + (0x3 << 2)
label_266e6c:
    if (ctx->pc == 0x266E6Cu) {
        ctx->pc = 0x266E6Cu;
            // 0x266e6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E70u;
        goto label_266e70;
    }
    ctx->pc = 0x266E68u;
    {
        const bool branch_taken_0x266e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E68u;
            // 0x266e6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e68) {
            ctx->pc = 0x266E78u;
            goto label_266e78;
        }
    }
    ctx->pc = 0x266E70u;
label_266e70:
    // 0x266e70: 0x1000005d  b           . + 4 + (0x5D << 2)
label_266e74:
    if (ctx->pc == 0x266E74u) {
        ctx->pc = 0x266E74u;
            // 0x266e74: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x266E78u;
        goto label_266e78;
    }
    ctx->pc = 0x266E70u;
    {
        const bool branch_taken_0x266e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E70u;
            // 0x266e74: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e70) {
            ctx->pc = 0x266FE8u;
            goto label_266fe8;
        }
    }
    ctx->pc = 0x266E78u;
label_266e78:
    // 0x266e78: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x266e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_266e7c:
    // 0x266e7c: 0xc0a0c64  jal         func_283190
label_266e80:
    if (ctx->pc == 0x266E80u) {
        ctx->pc = 0x266E80u;
            // 0x266e80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E84u;
        goto label_266e84;
    }
    ctx->pc = 0x266E7Cu;
    SET_GPR_U32(ctx, 31, 0x266E84u);
    ctx->pc = 0x266E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266E7Cu;
            // 0x266e80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E84u; }
        if (ctx->pc != 0x266E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266E84u; }
        if (ctx->pc != 0x266E84u) { return; }
    }
    ctx->pc = 0x266E84u;
label_266e84:
    // 0x266e84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266e88:
    // 0x266e88: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_266e8c:
    if (ctx->pc == 0x266E8Cu) {
        ctx->pc = 0x266E8Cu;
            // 0x266e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E90u;
        goto label_266e90;
    }
    ctx->pc = 0x266E88u;
    {
        const bool branch_taken_0x266e88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x266E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E88u;
            // 0x266e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e88) {
            ctx->pc = 0x266E98u;
            goto label_266e98;
        }
    }
    ctx->pc = 0x266E90u;
label_266e90:
    // 0x266e90: 0x10000054  b           . + 4 + (0x54 << 2)
label_266e94:
    if (ctx->pc == 0x266E94u) {
        ctx->pc = 0x266E94u;
            // 0x266e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266E98u;
        goto label_266e98;
    }
    ctx->pc = 0x266E90u;
    {
        const bool branch_taken_0x266e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266E90u;
            // 0x266e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266e90) {
            ctx->pc = 0x266FE4u;
            goto label_266fe4;
        }
    }
    ctx->pc = 0x266E98u;
label_266e98:
    // 0x266e98: 0xc0956d4  jal         func_255B50
label_266e9c:
    if (ctx->pc == 0x266E9Cu) {
        ctx->pc = 0x266EA0u;
        goto label_266ea0;
    }
    ctx->pc = 0x266E98u;
    SET_GPR_U32(ctx, 31, 0x266EA0u);
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EA0u; }
        if (ctx->pc != 0x266EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EA0u; }
        if (ctx->pc != 0x266EA0u) { return; }
    }
    ctx->pc = 0x266EA0u;
label_266ea0:
    // 0x266ea0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x266ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266ea4:
    // 0x266ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266ea8:
    // 0x266ea8: 0xc04e748  jal         func_139D20
label_266eac:
    if (ctx->pc == 0x266EACu) {
        ctx->pc = 0x266EACu;
            // 0x266eac: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x266EB0u;
        goto label_266eb0;
    }
    ctx->pc = 0x266EA8u;
    SET_GPR_U32(ctx, 31, 0x266EB0u);
    ctx->pc = 0x266EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266EA8u;
            // 0x266eac: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EB0u; }
        if (ctx->pc != 0x266EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EB0u; }
        if (ctx->pc != 0x266EB0u) { return; }
    }
    ctx->pc = 0x266EB0u;
label_266eb0:
    // 0x266eb0: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x266eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_266eb4:
    // 0x266eb4: 0xc04e638  jal         func_1398E0
label_266eb8:
    if (ctx->pc == 0x266EB8u) {
        ctx->pc = 0x266EB8u;
            // 0x266eb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266EBCu;
        goto label_266ebc;
    }
    ctx->pc = 0x266EB4u;
    SET_GPR_U32(ctx, 31, 0x266EBCu);
    ctx->pc = 0x266EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266EB4u;
            // 0x266eb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EBCu; }
        if (ctx->pc != 0x266EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266EBCu; }
        if (ctx->pc != 0x266EBCu) { return; }
    }
    ctx->pc = 0x266EBCu;
label_266ebc:
    // 0x266ebc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_266ec0:
    if (ctx->pc == 0x266EC0u) {
        ctx->pc = 0x266EC0u;
            // 0x266ec0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266EC4u;
        goto label_266ec4;
    }
    ctx->pc = 0x266EBCu;
    {
        const bool branch_taken_0x266ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266EBCu;
            // 0x266ec0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ebc) {
            ctx->pc = 0x266F40u;
            goto label_266f40;
        }
    }
    ctx->pc = 0x266EC4u;
label_266ec4:
    // 0x266ec4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_266ec8:
    // 0x266ec8: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x266ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_266ecc:
    // 0x266ecc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x266eccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_266ed0:
    // 0x266ed0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266ed4:
    // 0x266ed4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x266ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_266ed8:
    // 0x266ed8: 0x320f809  jalr        $t9
label_266edc:
    if (ctx->pc == 0x266EDCu) {
        ctx->pc = 0x266EDCu;
            // 0x266edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266EE0u;
        goto label_266ee0;
    }
    ctx->pc = 0x266ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266EE0u);
        ctx->pc = 0x266EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266ED8u;
            // 0x266edc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266EE0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266EE0u; }
            if (ctx->pc != 0x266EE0u) { return; }
        }
        }
    }
    ctx->pc = 0x266EE0u;
label_266ee0:
    // 0x266ee0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x266ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_266ee4:
    // 0x266ee4: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x266ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_266ee8:
    // 0x266ee8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x266ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_266eec:
    // 0x266eec: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266ef0:
    // 0x266ef0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x266ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_266ef4:
    // 0x266ef4: 0x320f809  jalr        $t9
label_266ef8:
    if (ctx->pc == 0x266EF8u) {
        ctx->pc = 0x266EF8u;
            // 0x266ef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266EFCu;
        goto label_266efc;
    }
    ctx->pc = 0x266EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266EFCu);
        ctx->pc = 0x266EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266EF4u;
            // 0x266ef8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266EFCu; }
            if (ctx->pc != 0x266EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x266EFCu;
label_266efc:
    // 0x266efc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x266efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_266f00:
    // 0x266f00: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x266f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_266f04:
    // 0x266f04: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x266f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_266f08:
    // 0x266f08: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266f0c:
    // 0x266f0c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x266f0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_266f10:
    // 0x266f10: 0x320f809  jalr        $t9
label_266f14:
    if (ctx->pc == 0x266F14u) {
        ctx->pc = 0x266F14u;
            // 0x266f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F18u;
        goto label_266f18;
    }
    ctx->pc = 0x266F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266F18u);
        ctx->pc = 0x266F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266F10u;
            // 0x266f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266F18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266F18u; }
            if (ctx->pc != 0x266F18u) { return; }
        }
        }
    }
    ctx->pc = 0x266F18u;
label_266f18:
    // 0x266f18: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x266f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_266f1c:
    // 0x266f1c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x266f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_266f20:
    // 0x266f20: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x266f20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_266f24:
    // 0x266f24: 0xae80035c  sw          $zero, 0x35C($s4)
    ctx->pc = 0x266f24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 860), GPR_U32(ctx, 0));
label_266f28:
    // 0x266f28: 0xae800364  sw          $zero, 0x364($s4)
    ctx->pc = 0x266f28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 868), GPR_U32(ctx, 0));
label_266f2c:
    // 0x266f2c: 0xae800360  sw          $zero, 0x360($s4)
    ctx->pc = 0x266f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 0));
label_266f30:
    // 0x266f30: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x266f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_266f34:
    // 0x266f34: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x266f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_266f38:
    // 0x266f38: 0x320f809  jalr        $t9
label_266f3c:
    if (ctx->pc == 0x266F3Cu) {
        ctx->pc = 0x266F3Cu;
            // 0x266f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F40u;
        goto label_266f40;
    }
    ctx->pc = 0x266F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266F40u);
        ctx->pc = 0x266F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266F38u;
            // 0x266f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266F40u; }
            if (ctx->pc != 0x266F40u) { return; }
        }
        }
    }
    ctx->pc = 0x266F40u;
label_266f40:
    // 0x266f40: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_266f44:
    if (ctx->pc == 0x266F44u) {
        ctx->pc = 0x266F44u;
            // 0x266f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F48u;
        goto label_266f48;
    }
    ctx->pc = 0x266F40u;
    {
        const bool branch_taken_0x266f40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x266F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266F40u;
            // 0x266f44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f40) {
            ctx->pc = 0x266F50u;
            goto label_266f50;
        }
    }
    ctx->pc = 0x266F48u;
label_266f48:
    // 0x266f48: 0x10000026  b           . + 4 + (0x26 << 2)
label_266f4c:
    if (ctx->pc == 0x266F4Cu) {
        ctx->pc = 0x266F50u;
        goto label_266f50;
    }
    ctx->pc = 0x266F48u;
    {
        const bool branch_taken_0x266f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f48) {
            ctx->pc = 0x266FE4u;
            goto label_266fe4;
        }
    }
    ctx->pc = 0x266F50u;
label_266f50:
    // 0x266f50: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_266f54:
    if (ctx->pc == 0x266F54u) {
        ctx->pc = 0x266F54u;
            // 0x266f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F58u;
        goto label_266f58;
    }
    ctx->pc = 0x266F50u;
    {
        const bool branch_taken_0x266f50 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x266F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266F50u;
            // 0x266f54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f50) {
            ctx->pc = 0x266F60u;
            goto label_266f60;
        }
    }
    ctx->pc = 0x266F58u;
label_266f58:
    // 0x266f58: 0x10000022  b           . + 4 + (0x22 << 2)
label_266f5c:
    if (ctx->pc == 0x266F5Cu) {
        ctx->pc = 0x266F60u;
        goto label_266f60;
    }
    ctx->pc = 0x266F58u;
    {
        const bool branch_taken_0x266f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f58) {
            ctx->pc = 0x266FE4u;
            goto label_266fe4;
        }
    }
    ctx->pc = 0x266F60u;
label_266f60:
    // 0x266f60: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x266f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_266f64:
    // 0x266f64: 0xc0a14ec  jal         func_2853B0
label_266f68:
    if (ctx->pc == 0x266F68u) {
        ctx->pc = 0x266F68u;
            // 0x266f68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F6Cu;
        goto label_266f6c;
    }
    ctx->pc = 0x266F64u;
    SET_GPR_U32(ctx, 31, 0x266F6Cu);
    ctx->pc = 0x266F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266F64u;
            // 0x266f68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F6Cu; }
        if (ctx->pc != 0x266F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F6Cu; }
        if (ctx->pc != 0x266F6Cu) { return; }
    }
    ctx->pc = 0x266F6Cu;
label_266f6c:
    // 0x266f6c: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x266f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_266f70:
    // 0x266f70: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x266f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_266f74:
    // 0x266f74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266f78:
    // 0x266f78: 0xc0a0e8c  jal         func_283A30
label_266f7c:
    if (ctx->pc == 0x266F7Cu) {
        ctx->pc = 0x266F7Cu;
            // 0x266f7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F80u;
        goto label_266f80;
    }
    ctx->pc = 0x266F78u;
    SET_GPR_U32(ctx, 31, 0x266F80u);
    ctx->pc = 0x266F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266F78u;
            // 0x266f7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F80u; }
        if (ctx->pc != 0x266F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266F80u; }
        if (ctx->pc != 0x266F80u) { return; }
    }
    ctx->pc = 0x266F80u;
label_266f80:
    // 0x266f80: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_266f84:
    if (ctx->pc == 0x266F84u) {
        ctx->pc = 0x266F88u;
        goto label_266f88;
    }
    ctx->pc = 0x266F80u;
    {
        const bool branch_taken_0x266f80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x266f80) {
            ctx->pc = 0x266F90u;
            goto label_266f90;
        }
    }
    ctx->pc = 0x266F88u;
label_266f88:
    // 0x266f88: 0x10000016  b           . + 4 + (0x16 << 2)
label_266f8c:
    if (ctx->pc == 0x266F8Cu) {
        ctx->pc = 0x266F8Cu;
            // 0x266f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266F90u;
        goto label_266f90;
    }
    ctx->pc = 0x266F88u;
    {
        const bool branch_taken_0x266f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266F88u;
            // 0x266f8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f88) {
            ctx->pc = 0x266FE4u;
            goto label_266fe4;
        }
    }
    ctx->pc = 0x266F90u;
label_266f90:
    // 0x266f90: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x266f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_266f94:
    // 0x266f94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x266f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266f98:
    // 0x266f98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x266f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266f9c:
    // 0x266f9c: 0xc0a11d0  jal         func_284740
label_266fa0:
    if (ctx->pc == 0x266FA0u) {
        ctx->pc = 0x266FA0u;
            // 0x266fa0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x266FA4u;
        goto label_266fa4;
    }
    ctx->pc = 0x266F9Cu;
    SET_GPR_U32(ctx, 31, 0x266FA4u);
    ctx->pc = 0x266FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266F9Cu;
            // 0x266fa0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FA4u; }
        if (ctx->pc != 0x266FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FA4u; }
        if (ctx->pc != 0x266FA4u) { return; }
    }
    ctx->pc = 0x266FA4u;
label_266fa4:
    // 0x266fa4: 0xc0956d4  jal         func_255B50
label_266fa8:
    if (ctx->pc == 0x266FA8u) {
        ctx->pc = 0x266FA8u;
            // 0x266fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266FACu;
        goto label_266fac;
    }
    ctx->pc = 0x266FA4u;
    SET_GPR_U32(ctx, 31, 0x266FACu);
    ctx->pc = 0x266FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266FA4u;
            // 0x266fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FACu; }
        if (ctx->pc != 0x266FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FACu; }
        if (ctx->pc != 0x266FACu) { return; }
    }
    ctx->pc = 0x266FACu;
label_266fac:
    // 0x266fac: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x266facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_266fb0:
    // 0x266fb0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x266fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_266fb4:
    // 0x266fb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x266fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_266fb8:
    // 0x266fb8: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x266fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_266fbc:
    // 0x266fbc: 0x320f809  jalr        $t9
label_266fc0:
    if (ctx->pc == 0x266FC0u) {
        ctx->pc = 0x266FC0u;
            // 0x266fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266FC4u;
        goto label_266fc4;
    }
    ctx->pc = 0x266FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x266FC4u);
        ctx->pc = 0x266FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266FBCu;
            // 0x266fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x266FC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x266FC4u; }
            if (ctx->pc != 0x266FC4u) { return; }
        }
        }
    }
    ctx->pc = 0x266FC4u;
label_266fc4:
    // 0x266fc4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_266fc8:
    // 0x266fc8: 0xc0a1240  jal         func_284900
label_266fcc:
    if (ctx->pc == 0x266FCCu) {
        ctx->pc = 0x266FCCu;
            // 0x266fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266FD0u;
        goto label_266fd0;
    }
    ctx->pc = 0x266FC8u;
    SET_GPR_U32(ctx, 31, 0x266FD0u);
    ctx->pc = 0x266FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266FC8u;
            // 0x266fcc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FD0u; }
        if (ctx->pc != 0x266FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FD0u; }
        if (ctx->pc != 0x266FD0u) { return; }
    }
    ctx->pc = 0x266FD0u;
label_266fd0:
    // 0x266fd0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x266fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_266fd4:
    // 0x266fd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x266fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_266fd8:
    // 0x266fd8: 0xc0a1264  jal         func_284990
label_266fdc:
    if (ctx->pc == 0x266FDCu) {
        ctx->pc = 0x266FDCu;
            // 0x266fdc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x266FE0u;
        goto label_266fe0;
    }
    ctx->pc = 0x266FD8u;
    SET_GPR_U32(ctx, 31, 0x266FE0u);
    ctx->pc = 0x266FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266FD8u;
            // 0x266fdc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FE0u; }
        if (ctx->pc != 0x266FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266FE0u; }
        if (ctx->pc != 0x266FE0u) { return; }
    }
    ctx->pc = 0x266FE0u;
label_266fe0:
    // 0x266fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_266fe4:
    // 0x266fe4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x266fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_266fe8:
    // 0x266fe8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x266fe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_266fec:
    // 0x266fec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x266fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_266ff0:
    // 0x266ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x266ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_266ff4:
    // 0x266ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x266ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_266ff8:
    // 0x266ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_266ffc:
    // 0x266ffc: 0x3e00008  jr          $ra
label_267000:
    if (ctx->pc == 0x267000u) {
        ctx->pc = 0x267000u;
            // 0x267000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x267004u;
        goto label_fallthrough_0x266ffc;
    }
    ctx->pc = 0x266FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266FFCu;
            // 0x267000: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x266ffc:
    ctx->pc = 0x267004u;
}
