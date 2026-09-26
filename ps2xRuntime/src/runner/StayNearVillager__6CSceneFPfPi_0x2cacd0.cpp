#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StayNearVillager__6CSceneFPfPi
// Address: 0x2cacd0 - 0x2cae58
void StayNearVillager__6CSceneFPfPi_0x2cacd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StayNearVillager__6CSceneFPfPi_0x2cacd0");
#endif

    switch (ctx->pc) {
        case 0x2cacd0u: goto label_2cacd0;
        case 0x2cacd4u: goto label_2cacd4;
        case 0x2cacd8u: goto label_2cacd8;
        case 0x2cacdcu: goto label_2cacdc;
        case 0x2cace0u: goto label_2cace0;
        case 0x2cace4u: goto label_2cace4;
        case 0x2cace8u: goto label_2cace8;
        case 0x2cacecu: goto label_2cacec;
        case 0x2cacf0u: goto label_2cacf0;
        case 0x2cacf4u: goto label_2cacf4;
        case 0x2cacf8u: goto label_2cacf8;
        case 0x2cacfcu: goto label_2cacfc;
        case 0x2cad00u: goto label_2cad00;
        case 0x2cad04u: goto label_2cad04;
        case 0x2cad08u: goto label_2cad08;
        case 0x2cad0cu: goto label_2cad0c;
        case 0x2cad10u: goto label_2cad10;
        case 0x2cad14u: goto label_2cad14;
        case 0x2cad18u: goto label_2cad18;
        case 0x2cad1cu: goto label_2cad1c;
        case 0x2cad20u: goto label_2cad20;
        case 0x2cad24u: goto label_2cad24;
        case 0x2cad28u: goto label_2cad28;
        case 0x2cad2cu: goto label_2cad2c;
        case 0x2cad30u: goto label_2cad30;
        case 0x2cad34u: goto label_2cad34;
        case 0x2cad38u: goto label_2cad38;
        case 0x2cad3cu: goto label_2cad3c;
        case 0x2cad40u: goto label_2cad40;
        case 0x2cad44u: goto label_2cad44;
        case 0x2cad48u: goto label_2cad48;
        case 0x2cad4cu: goto label_2cad4c;
        case 0x2cad50u: goto label_2cad50;
        case 0x2cad54u: goto label_2cad54;
        case 0x2cad58u: goto label_2cad58;
        case 0x2cad5cu: goto label_2cad5c;
        case 0x2cad60u: goto label_2cad60;
        case 0x2cad64u: goto label_2cad64;
        case 0x2cad68u: goto label_2cad68;
        case 0x2cad6cu: goto label_2cad6c;
        case 0x2cad70u: goto label_2cad70;
        case 0x2cad74u: goto label_2cad74;
        case 0x2cad78u: goto label_2cad78;
        case 0x2cad7cu: goto label_2cad7c;
        case 0x2cad80u: goto label_2cad80;
        case 0x2cad84u: goto label_2cad84;
        case 0x2cad88u: goto label_2cad88;
        case 0x2cad8cu: goto label_2cad8c;
        case 0x2cad90u: goto label_2cad90;
        case 0x2cad94u: goto label_2cad94;
        case 0x2cad98u: goto label_2cad98;
        case 0x2cad9cu: goto label_2cad9c;
        case 0x2cada0u: goto label_2cada0;
        case 0x2cada4u: goto label_2cada4;
        case 0x2cada8u: goto label_2cada8;
        case 0x2cadacu: goto label_2cadac;
        case 0x2cadb0u: goto label_2cadb0;
        case 0x2cadb4u: goto label_2cadb4;
        case 0x2cadb8u: goto label_2cadb8;
        case 0x2cadbcu: goto label_2cadbc;
        case 0x2cadc0u: goto label_2cadc0;
        case 0x2cadc4u: goto label_2cadc4;
        case 0x2cadc8u: goto label_2cadc8;
        case 0x2cadccu: goto label_2cadcc;
        case 0x2cadd0u: goto label_2cadd0;
        case 0x2cadd4u: goto label_2cadd4;
        case 0x2cadd8u: goto label_2cadd8;
        case 0x2caddcu: goto label_2caddc;
        case 0x2cade0u: goto label_2cade0;
        case 0x2cade4u: goto label_2cade4;
        case 0x2cade8u: goto label_2cade8;
        case 0x2cadecu: goto label_2cadec;
        case 0x2cadf0u: goto label_2cadf0;
        case 0x2cadf4u: goto label_2cadf4;
        case 0x2cadf8u: goto label_2cadf8;
        case 0x2cadfcu: goto label_2cadfc;
        case 0x2cae00u: goto label_2cae00;
        case 0x2cae04u: goto label_2cae04;
        case 0x2cae08u: goto label_2cae08;
        case 0x2cae0cu: goto label_2cae0c;
        case 0x2cae10u: goto label_2cae10;
        case 0x2cae14u: goto label_2cae14;
        case 0x2cae18u: goto label_2cae18;
        case 0x2cae1cu: goto label_2cae1c;
        case 0x2cae20u: goto label_2cae20;
        case 0x2cae24u: goto label_2cae24;
        case 0x2cae28u: goto label_2cae28;
        case 0x2cae2cu: goto label_2cae2c;
        case 0x2cae30u: goto label_2cae30;
        case 0x2cae34u: goto label_2cae34;
        case 0x2cae38u: goto label_2cae38;
        case 0x2cae3cu: goto label_2cae3c;
        case 0x2cae40u: goto label_2cae40;
        case 0x2cae44u: goto label_2cae44;
        case 0x2cae48u: goto label_2cae48;
        case 0x2cae4cu: goto label_2cae4c;
        case 0x2cae50u: goto label_2cae50;
        case 0x2cae54u: goto label_2cae54;
        default: break;
    }

    ctx->pc = 0x2cacd0u;

label_2cacd0:
    // 0x2cacd0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2cacd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2cacd4:
    // 0x2cacd4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2cacd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2cacd8:
    // 0x2cacd8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2cacd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2cacdc:
    // 0x2cacdc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2cacdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2cace0:
    // 0x2cace0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2cace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2cace4:
    // 0x2cace4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2cace4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2cace8:
    // 0x2cace8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2cace8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cacec:
    // 0x2cacec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2cacecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2cacf0:
    // 0x2cacf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2cacf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2cacf4:
    // 0x2cacf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2cacf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2cacf8:
    // 0x2cacf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cacf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cacfc:
    // 0x2cacfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cacfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cad00:
    // 0x2cad00: 0xafa600ac  sw          $a2, 0xAC($sp)
    ctx->pc = 0x2cad00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 6));
label_2cad04:
    // 0x2cad04: 0x8c833050  lw          $v1, 0x3050($a0)
    ctx->pc = 0x2cad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12368)));
label_2cad08:
    // 0x2cad08: 0x8c9e3054  lw          $fp, 0x3054($a0)
    ctx->pc = 0x2cad08u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12372)));
label_2cad0c:
    // 0x2cad0c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
label_2cad10:
    if (ctx->pc == 0x2CAD10u) {
        ctx->pc = 0x2CAD10u;
            // 0x2cad10: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD14u;
        goto label_2cad14;
    }
    ctx->pc = 0x2CAD0Cu;
    {
        const bool branch_taken_0x2cad0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD0Cu;
            // 0x2cad10: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad0c) {
            ctx->pc = 0x2CAE28u;
            goto label_2cae28;
        }
    }
    ctx->pc = 0x2CAD14u;
label_2cad14:
    // 0x2cad14: 0x1e082a  slt         $at, $zero, $fp
    ctx->pc = 0x2cad14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2cad18:
    // 0x2cad18: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_2cad1c:
    if (ctx->pc == 0x2CAD1Cu) {
        ctx->pc = 0x2CAD1Cu;
            // 0x2cad1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD20u;
        goto label_2cad20;
    }
    ctx->pc = 0x2CAD18u;
    {
        const bool branch_taken_0x2cad18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD18u;
            // 0x2cad1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad18) {
            ctx->pc = 0x2CAE28u;
            goto label_2cae28;
        }
    }
    ctx->pc = 0x2CAD20u;
label_2cad20:
    // 0x2cad20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cad20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cad24:
    // 0x2cad24: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2cad24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2cad28:
    // 0x2cad28: 0x26a43050  addiu       $a0, $s5, 0x3050
    ctx->pc = 0x2cad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12368));
label_2cad2c:
    // 0x2cad2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cad2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cad30:
    // 0x2cad30: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x2cad30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2cad34:
    // 0x2cad34: 0xc0b34a4  jal         func_2CD290
label_2cad38:
    if (ctx->pc == 0x2CAD38u) {
        ctx->pc = 0x2CAD38u;
            // 0x2cad38: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2CAD3Cu;
        goto label_2cad3c;
    }
    ctx->pc = 0x2CAD34u;
    SET_GPR_U32(ctx, 31, 0x2CAD3Cu);
    ctx->pc = 0x2CAD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD34u;
            // 0x2cad38: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD290u;
    if (runtime->hasFunction(0x2CD290u)) {
        auto targetFn = runtime->lookupFunction(0x2CD290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD3Cu; }
        if (ctx->pc != 0x2CAD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetData__13CVillagerMngrFi_0x2cd290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD3Cu; }
        if (ctx->pc != 0x2CAD3Cu) { return; }
    }
    ctx->pc = 0x2CAD3Cu;
label_2cad3c:
    // 0x2cad3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cad3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cad40:
    // 0x2cad40: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
label_2cad44:
    if (ctx->pc == 0x2CAD44u) {
        ctx->pc = 0x2CAD48u;
        goto label_2cad48;
    }
    ctx->pc = 0x2CAD40u;
    {
        const bool branch_taken_0x2cad40 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cad40) {
            ctx->pc = 0x2CAE18u;
            goto label_2cae18;
        }
    }
    ctx->pc = 0x2CAD48u;
label_2cad48:
    // 0x2cad48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cad48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2cad4c:
    // 0x2cad4c: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x2cad4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2cad50:
    // 0x2cad50: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2cad54:
    if (ctx->pc == 0x2CAD54u) {
        ctx->pc = 0x2CAD58u;
        goto label_2cad58;
    }
    ctx->pc = 0x2CAD50u;
    {
        const bool branch_taken_0x2cad50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cad50) {
            ctx->pc = 0x2CAD64u;
            goto label_2cad64;
        }
    }
    ctx->pc = 0x2CAD58u;
label_2cad58:
    // 0x2cad58: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x2cad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2cad5c:
    // 0x2cad5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2cad5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2cad60:
    // 0x2cad60: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2cad60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2cad64:
    // 0x2cad64: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cad64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2cad68:
    // 0x2cad68: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_2cad6c:
    if (ctx->pc == 0x2CAD6Cu) {
        ctx->pc = 0x2CAD70u;
        goto label_2cad70;
    }
    ctx->pc = 0x2CAD68u;
    {
        const bool branch_taken_0x2cad68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cad68) {
            ctx->pc = 0x2CAE18u;
            goto label_2cae18;
        }
    }
    ctx->pc = 0x2CAD70u;
label_2cad70:
    // 0x2cad70: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2cad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2cad74:
    // 0x2cad74: 0x1c600028  bgtz        $v1, . + 4 + (0x28 << 2)
label_2cad78:
    if (ctx->pc == 0x2CAD78u) {
        ctx->pc = 0x2CAD78u;
            // 0x2cad78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAD7Cu;
        goto label_2cad7c;
    }
    ctx->pc = 0x2CAD74u;
    {
        const bool branch_taken_0x2cad74 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CAD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD74u;
            // 0x2cad78: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad74) {
            ctx->pc = 0x2CAE18u;
            goto label_2cae18;
        }
    }
    ctx->pc = 0x2CAD7Cu;
label_2cad7c:
    // 0x2cad7c: 0xc04c028  jal         func_1300A0
label_2cad80:
    if (ctx->pc == 0x2CAD80u) {
        ctx->pc = 0x2CAD80u;
            // 0x2cad80: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x2CAD84u;
        goto label_2cad84;
    }
    ctx->pc = 0x2CAD7Cu;
    SET_GPR_U32(ctx, 31, 0x2CAD84u);
    ctx->pc = 0x2CAD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD7Cu;
            // 0x2cad80: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD84u; }
        if (ctx->pc != 0x2CAD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAD84u; }
        if (ctx->pc != 0x2CAD84u) { return; }
    }
    ctx->pc = 0x2CAD84u;
label_2cad84:
    // 0x2cad84: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x2cad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2cad88:
    // 0x2cad88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cad88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2cad8c:
    // 0x2cad8c: 0x0  nop
    ctx->pc = 0x2cad8cu;
    // NOP
label_2cad90:
    // 0x2cad90: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_2cad94:
    if (ctx->pc == 0x2CAD94u) {
        ctx->pc = 0x2CAD94u;
            // 0x2cad94: 0x26a43050  addiu       $a0, $s5, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12368));
        ctx->pc = 0x2CAD98u;
        goto label_2cad98;
    }
    ctx->pc = 0x2CAD90u;
    {
        const bool branch_taken_0x2cad90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CAD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD90u;
            // 0x2cad94: 0x26a43050  addiu       $a0, $s5, 0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cad90) {
            ctx->pc = 0x2CAE18u;
            goto label_2cae18;
        }
    }
    ctx->pc = 0x2CAD98u;
label_2cad98:
    // 0x2cad98: 0xc0b34b4  jal         func_2CD2D0
label_2cad9c:
    if (ctx->pc == 0x2CAD9Cu) {
        ctx->pc = 0x2CAD9Cu;
            // 0x2cad9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADA0u;
        goto label_2cada0;
    }
    ctx->pc = 0x2CAD98u;
    SET_GPR_U32(ctx, 31, 0x2CADA0u);
    ctx->pc = 0x2CAD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAD98u;
            // 0x2cad9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD2D0u;
    if (runtime->hasFunction(0x2CD2D0u)) {
        auto targetFn = runtime->lookupFunction(0x2CD2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADA0u; }
        if (ctx->pc != 0x2CADA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stay__13CVillagerMngrFi_0x2cd2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADA0u; }
        if (ctx->pc != 0x2CADA0u) { return; }
    }
    ctx->pc = 0x2CADA0u;
label_2cada0:
    // 0x2cada0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2cada0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cada4:
    // 0x2cada4: 0xc0a0ed8  jal         func_283B60
label_2cada8:
    if (ctx->pc == 0x2CADA8u) {
        ctx->pc = 0x2CADA8u;
            // 0x2cada8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADACu;
        goto label_2cadac;
    }
    ctx->pc = 0x2CADA4u;
    SET_GPR_U32(ctx, 31, 0x2CADACu);
    ctx->pc = 0x2CADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADA4u;
            // 0x2cada8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADACu; }
        if (ctx->pc != 0x2CADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADACu; }
        if (ctx->pc != 0x2CADACu) { return; }
    }
    ctx->pc = 0x2CADACu;
label_2cadac:
    // 0x2cadac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cadacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cadb0:
    // 0x2cadb0: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_2cadb4:
    if (ctx->pc == 0x2CADB4u) {
        ctx->pc = 0x2CADB8u;
        goto label_2cadb8;
    }
    ctx->pc = 0x2CADB0u;
    {
        const bool branch_taken_0x2cadb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cadb0) {
            ctx->pc = 0x2CAE18u;
            goto label_2cae18;
        }
    }
    ctx->pc = 0x2CADB8u;
label_2cadb8:
    // 0x2cadb8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2cadb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2cadbc:
    // 0x2cadbc: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x2cadbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_2cadc0:
    // 0x2cadc0: 0x320f809  jalr        $t9
label_2cadc4:
    if (ctx->pc == 0x2CADC4u) {
        ctx->pc = 0x2CADC4u;
            // 0x2cadc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADC8u;
        goto label_2cadc8;
    }
    ctx->pc = 0x2CADC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CADC8u);
        ctx->pc = 0x2CADC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADC0u;
            // 0x2cadc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CADC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CADC8u; }
            if (ctx->pc != 0x2CADC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2CADC8u;
label_2cadc8:
    // 0x2cadc8: 0xc0b29dc  jal         func_2CA770
label_2cadcc:
    if (ctx->pc == 0x2CADCCu) {
        ctx->pc = 0x2CADCCu;
            // 0x2cadcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADD0u;
        goto label_2cadd0;
    }
    ctx->pc = 0x2CADC8u;
    SET_GPR_U32(ctx, 31, 0x2CADD0u);
    ctx->pc = 0x2CADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADC8u;
            // 0x2cadcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA770u;
    if (runtime->hasFunction(0x2CA770u)) {
        auto targetFn = runtime->lookupFunction(0x2CA770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADD0u; }
        if (ctx->pc != 0x2CADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMotionID__FPc_0x2ca770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADD0u; }
        if (ctx->pc != 0x2CADD0u) { return; }
    }
    ctx->pc = 0x2CADD0u;
label_2cadd0:
    // 0x2cadd0: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_2cadd4:
    if (ctx->pc == 0x2CADD4u) {
        ctx->pc = 0x2CADD4u;
            // 0x2cadd4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADD8u;
        goto label_2cadd8;
    }
    ctx->pc = 0x2CADD0u;
    {
        const bool branch_taken_0x2cadd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CADD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADD0u;
            // 0x2cadd4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cadd0) {
            ctx->pc = 0x2CAE0Cu;
            goto label_2cae0c;
        }
    }
    ctx->pc = 0x2CADD8u;
label_2cadd8:
    // 0x2cadd8: 0x26a43050  addiu       $a0, $s5, 0x3050
    ctx->pc = 0x2cadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 12368));
label_2caddc:
    // 0x2caddc: 0xc0b3550  jal         func_2CD540
label_2cade0:
    if (ctx->pc == 0x2CADE0u) {
        ctx->pc = 0x2CADE0u;
            // 0x2cade0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CADE4u;
        goto label_2cade4;
    }
    ctx->pc = 0x2CADDCu;
    SET_GPR_U32(ctx, 31, 0x2CADE4u);
    ctx->pc = 0x2CADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CADDCu;
            // 0x2cade0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD540u;
    if (runtime->hasFunction(0x2CD540u)) {
        auto targetFn = runtime->lookupFunction(0x2CD540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADE4u; }
        if (ctx->pc != 0x2CADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStay__13CVillagerMngrFi_0x2cd540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CADE4u; }
        if (ctx->pc != 0x2CADE4u) { return; }
    }
    ctx->pc = 0x2CADE4u;
label_2cade4:
    // 0x2cade4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2cade8:
    if (ctx->pc == 0x2CADE8u) {
        ctx->pc = 0x2CADECu;
        goto label_2cadec;
    }
    ctx->pc = 0x2CADE4u;
    {
        const bool branch_taken_0x2cade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cade4) {
            ctx->pc = 0x2CAE0Cu;
            goto label_2cae0c;
        }
    }
    ctx->pc = 0x2CADECu;
label_2cadec:
    // 0x2cadec: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x2cadecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2cadf0:
    // 0x2cadf0: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x2cadf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2cadf4:
    // 0x2cadf4: 0x16e30005  bne         $s7, $v1, . + 4 + (0x5 << 2)
label_2cadf8:
    if (ctx->pc == 0x2CADF8u) {
        ctx->pc = 0x2CADFCu;
        goto label_2cadfc;
    }
    ctx->pc = 0x2CADF4u;
    {
        const bool branch_taken_0x2cadf4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 3));
        if (branch_taken_0x2cadf4) {
            ctx->pc = 0x2CAE0Cu;
            goto label_2cae0c;
        }
    }
    ctx->pc = 0x2CADFCu;
label_2cadfc:
    // 0x2cadfc: 0x8ca50024  lw          $a1, 0x24($a1)
    ctx->pc = 0x2cadfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_2cae00:
    // 0x2cae00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cae04:
    // 0x2cae04: 0xc0b29fc  jal         func_2CA7F0
label_2cae08:
    if (ctx->pc == 0x2CAE08u) {
        ctx->pc = 0x2CAE08u;
            // 0x2cae08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE0Cu;
        goto label_2cae0c;
    }
    ctx->pc = 0x2CAE04u;
    SET_GPR_U32(ctx, 31, 0x2CAE0Cu);
    ctx->pc = 0x2CAE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE04u;
            // 0x2cae08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA7F0u;
    if (runtime->hasFunction(0x2CA7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2CA7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAE0Cu; }
        if (ctx->pc != 0x2CAE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaMotion__FP11CCharacter2ii_0x2ca7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CAE0Cu; }
        if (ctx->pc != 0x2CAE0Cu) { return; }
    }
    ctx->pc = 0x2CAE0Cu;
label_2cae0c:
    // 0x2cae0c: 0x0  nop
    ctx->pc = 0x2cae0cu;
    // NOP
label_2cae10:
    // 0x2cae10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cae10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cae14:
    // 0x2cae14: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x2cae14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_2cae18:
    // 0x2cae18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cae18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2cae1c:
    // 0x2cae1c: 0x21e182a  slt         $v1, $s0, $fp
    ctx->pc = 0x2cae1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_2cae20:
    // 0x2cae20: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_2cae24:
    if (ctx->pc == 0x2CAE24u) {
        ctx->pc = 0x2CAE24u;
            // 0x2cae24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2CAE28u;
        goto label_2cae28;
    }
    ctx->pc = 0x2CAE20u;
    {
        const bool branch_taken_0x2cae20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CAE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE20u;
            // 0x2cae24: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cae20) {
            ctx->pc = 0x2CAD24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cad24;
        }
    }
    ctx->pc = 0x2CAE28u;
label_2cae28:
    // 0x2cae28: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2cae28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2cae2c:
    // 0x2cae2c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2cae2cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2cae30:
    // 0x2cae30: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2cae30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2cae34:
    // 0x2cae34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2cae34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2cae38:
    // 0x2cae38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2cae38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2cae3c:
    // 0x2cae3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2cae3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2cae40:
    // 0x2cae40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2cae40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cae44:
    // 0x2cae44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2cae44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cae48:
    // 0x2cae48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cae48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cae4c:
    // 0x2cae4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cae4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cae50:
    // 0x2cae50: 0x3e00008  jr          $ra
label_2cae54:
    if (ctx->pc == 0x2CAE54u) {
        ctx->pc = 0x2CAE54u;
            // 0x2cae54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2CAE58u;
        goto label_fallthrough_0x2cae50;
    }
    ctx->pc = 0x2CAE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CAE50u;
            // 0x2cae54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2cae50:
    ctx->pc = 0x2CAE58u;
}
