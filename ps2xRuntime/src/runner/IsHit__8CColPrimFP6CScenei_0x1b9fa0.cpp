#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsHit__8CColPrimFP6CScenei
// Address: 0x1b9fa0 - 0x1ba43c
void IsHit__8CColPrimFP6CScenei_0x1b9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsHit__8CColPrimFP6CScenei_0x1b9fa0");
#endif

    switch (ctx->pc) {
        case 0x1ba004u: goto label_1ba004;
        case 0x1ba024u: goto label_1ba024;
        case 0x1ba0c0u: goto label_1ba0c0;
        case 0x1ba0ecu: goto label_1ba0ec;
        case 0x1ba100u: goto label_1ba100;
        case 0x1ba118u: goto label_1ba118;
        case 0x1ba144u: goto label_1ba144;
        case 0x1ba154u: goto label_1ba154;
        case 0x1ba184u: goto label_1ba184;
        case 0x1ba194u: goto label_1ba194;
        case 0x1ba1a4u: goto label_1ba1a4;
        case 0x1ba1b8u: goto label_1ba1b8;
        case 0x1ba1d4u: goto label_1ba1d4;
        case 0x1ba1e4u: goto label_1ba1e4;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba20cu: goto label_1ba20c;
        case 0x1ba224u: goto label_1ba224;
        case 0x1ba22cu: goto label_1ba22c;
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba270u: goto label_1ba270;
        case 0x1ba2a8u: goto label_1ba2a8;
        case 0x1ba2c8u: goto label_1ba2c8;
        case 0x1ba2e8u: goto label_1ba2e8;
        case 0x1ba2f8u: goto label_1ba2f8;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba348u: goto label_1ba348;
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba3fcu: goto label_1ba3fc;
        default: break;
    }

    ctx->pc = 0x1b9fa0u;

    // 0x1b9fa0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x1b9fa4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b9fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1b9fa8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b9fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b9fac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b9facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b9fb0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1b9fb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9fb4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b9fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b9fb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b9fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b9fbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b9fc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b9fc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9fc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b9fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b9fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9fd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b9fd4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b9fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9FD8u;
    {
        const bool branch_taken_0x1b9fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FD8u;
            // 0x1b9fdc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fd8) {
            ctx->pc = 0x1B9FE8u;
            goto label_1b9fe8;
        }
    }
    ctx->pc = 0x1B9FE0u;
    // 0x1b9fe0: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x1B9FE0u;
    {
        const bool branch_taken_0x1b9fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FE0u;
            // 0x1b9fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fe0) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1B9FE8u;
label_1b9fe8:
    // 0x1b9fe8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1b9fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9FECu;
    {
        const bool branch_taken_0x1b9fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FECu;
            // 0x1b9ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fec) {
            ctx->pc = 0x1B9FFCu;
            goto label_1b9ffc;
        }
    }
    ctx->pc = 0x1B9FF4u;
    // 0x1b9ff4: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x1B9FF4u;
    {
        const bool branch_taken_0x1b9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FF4u;
            // 0x1b9ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ff4) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1B9FFCu;
label_1b9ffc:
    // 0x1b9ffc: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x1B9FFCu;
    SET_GPR_U32(ctx, 31, 0x1BA004u);
    ctx->pc = 0x1BA000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FFCu;
            // 0x1ba000: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA004u; }
        if (ctx->pc != 0x1BA004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA004u; }
        if (ctx->pc != 0x1BA004u) { return; }
    }
    ctx->pc = 0x1BA004u;
label_1ba004:
    // 0x1ba004: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ba004u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba008: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA008u;
    {
        const bool branch_taken_0x1ba008 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA008u;
            // 0x1ba00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba008) {
            ctx->pc = 0x1BA018u;
            goto label_1ba018;
        }
    }
    ctx->pc = 0x1BA010u;
    // 0x1ba010: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x1BA010u;
    {
        const bool branch_taken_0x1ba010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA010u;
            // 0x1ba014: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba010) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA018u;
label_1ba018:
    // 0x1ba018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba01c: 0xc0a1208  jal         func_284820
    ctx->pc = 0x1BA01Cu;
    SET_GPR_U32(ctx, 31, 0x1BA024u);
    ctx->pc = 0x1BA020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA01Cu;
            // 0x1ba020: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284820u;
    if (runtime->hasFunction(0x284820u)) {
        auto targetFn = runtime->lookupFunction(0x284820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA024u; }
        if (ctx->pc != 0x1BA024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__6CSceneFii_0x284820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA024u; }
        if (ctx->pc != 0x1BA024u) { return; }
    }
    ctx->pc = 0x1BA024u;
label_1ba024:
    // 0x1ba024: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba028: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA028u;
    {
        const bool branch_taken_0x1ba028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BA02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA028u;
            // 0x1ba02c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba028) {
            ctx->pc = 0x1BA04Cu;
            goto label_1ba04c;
        }
    }
    ctx->pc = 0x1BA030u;
    // 0x1ba030: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x1ba030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1ba034: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1ba034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1ba038: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA038u;
    {
        const bool branch_taken_0x1ba038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba038) {
            ctx->pc = 0x1BA048u;
            goto label_1ba048;
        }
    }
    ctx->pc = 0x1BA040u;
    // 0x1ba040: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x1BA040u;
    {
        const bool branch_taken_0x1ba040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA040u;
            // 0x1ba044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba040) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA048u;
label_1ba048:
    // 0x1ba048: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ba048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ba04c:
    // 0x1ba04c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA04Cu;
    {
        const bool branch_taken_0x1ba04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BA050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA04Cu;
            // 0x1ba050: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba04c) {
            ctx->pc = 0x1BA070u;
            goto label_1ba070;
        }
    }
    ctx->pc = 0x1BA054u;
    // 0x1ba054: 0x8ea20080  lw          $v0, 0x80($s5)
    ctx->pc = 0x1ba054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x1ba058: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ba058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ba05c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA05Cu;
    {
        const bool branch_taken_0x1ba05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA05Cu;
            // 0x1ba060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba05c) {
            ctx->pc = 0x1BA06Cu;
            goto label_1ba06c;
        }
    }
    ctx->pc = 0x1BA064u;
    // 0x1ba064: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1BA064u;
    {
        const bool branch_taken_0x1ba064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA064u;
            // 0x1ba068: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba064) {
            ctx->pc = 0x1BA410u;
            goto label_1ba410;
        }
    }
    ctx->pc = 0x1BA06Cu;
label_1ba06c:
    // 0x1ba06c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ba06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ba070:
    // 0x1ba070: 0x13c20009  beq         $fp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA070u;
    {
        const bool branch_taken_0x1ba070 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba070) {
            ctx->pc = 0x1BA098u;
            goto label_1ba098;
        }
    }
    ctx->pc = 0x1BA078u;
    // 0x1ba078: 0xdea20018  ld          $v0, 0x18($s5)
    ctx->pc = 0x1ba078u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1ba07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba080: 0x3c31804  sllv        $v1, $v1, $fp
    ctx->pc = 0x1ba080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 30) & 0x1F));
    // 0x1ba084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ba084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ba088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA088u;
    {
        const bool branch_taken_0x1ba088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA088u;
            // 0x1ba08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba088) {
            ctx->pc = 0x1BA098u;
            goto label_1ba098;
        }
    }
    ctx->pc = 0x1BA090u;
    // 0x1ba090: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x1BA090u;
    {
        const bool branch_taken_0x1ba090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba090) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA098u;
label_1ba098:
    // 0x1ba098: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba09c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ba09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ba0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba0a4: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba0a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba0ac: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1BA0ACu;
    {
        const bool branch_taken_0x1ba0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0ACu;
            // 0x1ba0b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0ac) {
            ctx->pc = 0x1BA11Cu;
            goto label_1ba11c;
        }
    }
    ctx->pc = 0x1BA0B4u;
    // 0x1ba0b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1ba0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1ba0b8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA0B8u;
    SET_GPR_U32(ctx, 31, 0x1BA0C0u);
    ctx->pc = 0x1BA0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0B8u;
            // 0x1ba0bc: 0x26a50040  addiu       $a1, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0C0u; }
        if (ctx->pc != 0x1BA0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0C0u; }
        if (ctx->pc != 0x1BA0C0u) { return; }
    }
    ctx->pc = 0x1BA0C0u;
label_1ba0c0:
    // 0x1ba0c0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba0c4: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba0c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba0c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ba0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ba0cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA0CCu;
    {
        const bool branch_taken_0x1ba0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0CCu;
            // 0x1ba0d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0cc) {
            ctx->pc = 0x1BA11Cu;
            goto label_1ba11c;
        }
    }
    ctx->pc = 0x1BA0D4u;
    // 0x1ba0d4: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x1ba0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1ba0d8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1BA0D8u;
    {
        const bool branch_taken_0x1ba0d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0D8u;
            // 0x1ba0dc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0d8) {
            ctx->pc = 0x1BA11Cu;
            goto label_1ba11c;
        }
    }
    ctx->pc = 0x1BA0E0u;
    // 0x1ba0e0: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1ba0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1ba0e4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA0E4u;
    SET_GPR_U32(ctx, 31, 0x1BA0ECu);
    ctx->pc = 0x1BA0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0E4u;
            // 0x1ba0e8: 0x26a60040  addiu       $a2, $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0ECu; }
        if (ctx->pc != 0x1BA0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA0ECu; }
        if (ctx->pc != 0x1BA0ECu) { return; }
    }
    ctx->pc = 0x1BA0ECu;
label_1ba0ec:
    // 0x1ba0ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ba0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba0f0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba0f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ba0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba0f8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BA0F8u;
    SET_GPR_U32(ctx, 31, 0x1BA100u);
    ctx->pc = 0x1BA0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0F8u;
            // 0x1ba0fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA100u; }
        if (ctx->pc != 0x1BA100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA100u; }
        if (ctx->pc != 0x1BA100u) { return; }
    }
    ctx->pc = 0x1BA100u;
label_1ba100:
    // 0x1ba100: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ba104: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1ba104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba108: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ba10c: 0x26a60040  addiu       $a2, $s5, 0x40
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba110: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BA110u;
    SET_GPR_U32(ctx, 31, 0x1BA118u);
    ctx->pc = 0x1BA114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA110u;
            // 0x1ba114: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA118u; }
        if (ctx->pc != 0x1BA118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA118u; }
        if (ctx->pc != 0x1BA118u) { return; }
    }
    ctx->pc = 0x1BA118u;
label_1ba118:
    // 0x1ba118: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ba118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ba11c:
    // 0x1ba11c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba120: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba124: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ba124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ba128: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1BA128u;
    {
        const bool branch_taken_0x1ba128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA128u;
            // 0x1ba12c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba128) {
            ctx->pc = 0x1BA214u;
            goto label_1ba214;
        }
    }
    ctx->pc = 0x1BA130u;
    // 0x1ba130: 0x109900  sll         $s3, $s0, 4
    ctx->pc = 0x1ba130u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ba134: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba138: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1ba138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ba13c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA13Cu;
    SET_GPR_U32(ctx, 31, 0x1BA144u);
    ctx->pc = 0x1BA140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA13Cu;
            // 0x1ba140: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA144u; }
        if (ctx->pc != 0x1BA144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA144u; }
        if (ctx->pc != 0x1BA144u) { return; }
    }
    ctx->pc = 0x1BA144u;
label_1ba144:
    // 0x1ba144: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1ba144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ba148: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1ba148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1ba14c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA14Cu;
    SET_GPR_U32(ctx, 31, 0x1BA154u);
    ctx->pc = 0x1BA150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA14Cu;
            // 0x1ba150: 0x24440140  addiu       $a0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA154u; }
        if (ctx->pc != 0x1BA154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA154u; }
        if (ctx->pc != 0x1BA154u) { return; }
    }
    ctx->pc = 0x1BA154u;
label_1ba154:
    // 0x1ba154: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba158: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba15c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ba15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ba160: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BA160u;
    {
        const bool branch_taken_0x1ba160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA160u;
            // 0x1ba164: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba160) {
            ctx->pc = 0x1BA210u;
            goto label_1ba210;
        }
    }
    ctx->pc = 0x1BA168u;
    // 0x1ba168: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x1ba168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1ba16c: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1BA16Cu;
    {
        const bool branch_taken_0x1ba16c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1BA170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA16Cu;
            // 0x1ba170: 0x109900  sll         $s3, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba16c) {
            ctx->pc = 0x1BA210u;
            goto label_1ba210;
        }
    }
    ctx->pc = 0x1BA174u;
    // 0x1ba174: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba178: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1ba178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ba17c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA17Cu;
    SET_GPR_U32(ctx, 31, 0x1BA184u);
    ctx->pc = 0x1BA180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA17Cu;
            // 0x1ba180: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA184u; }
        if (ctx->pc != 0x1BA184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA184u; }
        if (ctx->pc != 0x1BA184u) { return; }
    }
    ctx->pc = 0x1BA184u;
label_1ba184:
    // 0x1ba184: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ba188: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1ba188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1ba18c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA18Cu;
    SET_GPR_U32(ctx, 31, 0x1BA194u);
    ctx->pc = 0x1BA190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA18Cu;
            // 0x1ba190: 0x24440140  addiu       $a0, $v0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA194u; }
        if (ctx->pc != 0x1BA194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA194u; }
        if (ctx->pc != 0x1BA194u) { return; }
    }
    ctx->pc = 0x1BA194u;
label_1ba194:
    // 0x1ba194: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ba194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba198: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1ba198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba19c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA19Cu;
    SET_GPR_U32(ctx, 31, 0x1BA1A4u);
    ctx->pc = 0x1BA1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA19Cu;
            // 0x1ba1a0: 0x26a60050  addiu       $a2, $s5, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1A4u; }
        if (ctx->pc != 0x1BA1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1A4u; }
        if (ctx->pc != 0x1BA1A4u) { return; }
    }
    ctx->pc = 0x1BA1A4u;
label_1ba1a4:
    // 0x1ba1a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ba1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba1a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba1ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ba1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba1b0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BA1B0u;
    SET_GPR_U32(ctx, 31, 0x1BA1B8u);
    ctx->pc = 0x1BA1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1B0u;
            // 0x1ba1b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B8u; }
        if (ctx->pc != 0x1BA1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1B8u; }
        if (ctx->pc != 0x1BA1B8u) { return; }
    }
    ctx->pc = 0x1BA1B8u;
label_1ba1b8:
    // 0x1ba1b8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1ba1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ba1bc: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1ba1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1ba1c0: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ba1c4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba1c8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1ba1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ba1cc: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BA1CCu;
    SET_GPR_U32(ctx, 31, 0x1BA1D4u);
    ctx->pc = 0x1BA1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1CCu;
            // 0x1ba1d0: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1D4u; }
        if (ctx->pc != 0x1BA1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1D4u; }
        if (ctx->pc != 0x1BA1D4u) { return; }
    }
    ctx->pc = 0x1BA1D4u;
label_1ba1d4:
    // 0x1ba1d4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ba1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba1d8: 0x26a50060  addiu       $a1, $s5, 0x60
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1ba1dc: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA1DCu;
    SET_GPR_U32(ctx, 31, 0x1BA1E4u);
    ctx->pc = 0x1BA1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1DCu;
            // 0x1ba1e0: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1E4u; }
        if (ctx->pc != 0x1BA1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1E4u; }
        if (ctx->pc != 0x1BA1E4u) { return; }
    }
    ctx->pc = 0x1BA1E4u;
label_1ba1e4:
    // 0x1ba1e4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ba1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba1e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1ba1ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ba1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba1f0: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BA1F0u;
    SET_GPR_U32(ctx, 31, 0x1BA1F8u);
    ctx->pc = 0x1BA1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1F0u;
            // 0x1ba1f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1F8u; }
        if (ctx->pc != 0x1BA1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA1F8u; }
        if (ctx->pc != 0x1BA1F8u) { return; }
    }
    ctx->pc = 0x1BA1F8u;
label_1ba1f8:
    // 0x1ba1f8: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x1ba1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1ba1fc: 0x26a50070  addiu       $a1, $s5, 0x70
    ctx->pc = 0x1ba1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
    // 0x1ba200: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1ba200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1ba204: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BA204u;
    SET_GPR_U32(ctx, 31, 0x1BA20Cu);
    ctx->pc = 0x1BA208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA204u;
            // 0x1ba208: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA20Cu; }
        if (ctx->pc != 0x1BA20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA20Cu; }
        if (ctx->pc != 0x1BA20Cu) { return; }
    }
    ctx->pc = 0x1BA20Cu;
label_1ba20c:
    // 0x1ba20c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1ba20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1ba210:
    // 0x1ba210: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ba210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba214:
    // 0x1ba214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba21c: 0xc05d420  jal         func_175080
    ctx->pc = 0x1BA21Cu;
    SET_GPR_U32(ctx, 31, 0x1BA224u);
    ctx->pc = 0x1BA220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA21Cu;
            // 0x1ba220: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA224u; }
        if (ctx->pc != 0x1BA224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA224u; }
        if (ctx->pc != 0x1BA224u) { return; }
    }
    ctx->pc = 0x1BA224u;
label_1ba224:
    // 0x1ba224: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1BA224u;
    {
        const bool branch_taken_0x1ba224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA224u;
            // 0x1ba228: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba224) {
            ctx->pc = 0x1BA404u;
            goto label_1ba404;
        }
    }
    ctx->pc = 0x1BA22Cu;
label_1ba22c:
    // 0x1ba22c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ba230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA230u;
    {
        const bool branch_taken_0x1ba230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba230) {
            ctx->pc = 0x1BA240u;
            goto label_1ba240;
        }
    }
    ctx->pc = 0x1BA238u;
    // 0x1ba238: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1BA238u;
    {
        const bool branch_taken_0x1ba238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA238u;
            // 0x1ba23c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba238) {
            ctx->pc = 0x1BA3E4u;
            goto label_1ba3e4;
        }
    }
    ctx->pc = 0x1BA240u;
label_1ba240:
    // 0x1ba240: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba244: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba244u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ba248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ba24c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1BA24Cu;
    {
        const bool branch_taken_0x1ba24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA24Cu;
            // 0x1ba250: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba24c) {
            ctx->pc = 0x1BA310u;
            goto label_1ba310;
        }
    }
    ctx->pc = 0x1BA254u;
    // 0x1ba254: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BA254u;
    {
        const bool branch_taken_0x1ba254 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA254u;
            // 0x1ba258: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba254) {
            ctx->pc = 0x1BA310u;
            goto label_1ba310;
        }
    }
    ctx->pc = 0x1BA25Cu;
    // 0x1ba25c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ba25cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba260:
    // 0x1ba260: 0x2dd1021  addu        $v0, $s6, $sp
    ctx->pc = 0x1ba260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
    // 0x1ba264: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x1ba264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1ba268: 0xc04c018  jal         func_130060
    ctx->pc = 0x1BA268u;
    SET_GPR_U32(ctx, 31, 0x1BA270u);
    ctx->pc = 0x1BA26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA268u;
            // 0x1ba26c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA270u; }
        if (ctx->pc != 0x1BA270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA270u; }
        if (ctx->pc != 0x1BA270u) { return; }
    }
    ctx->pc = 0x1BA270u;
label_1ba270:
    // 0x1ba270: 0xc6a30084  lwc1        $f3, 0x84($s5)
    ctx->pc = 0x1ba270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba274: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba278: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1ba278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba27c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba280: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ba280u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ba284: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba284u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba288: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ba288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba28c: 0x0  nop
    ctx->pc = 0x1ba28cu;
    // NOP
    // 0x1ba290: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x1BA290u;
    {
        const bool branch_taken_0x1ba290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA290u;
            // 0x1ba294: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba290) {
            ctx->pc = 0x1BA300u;
            goto label_1ba300;
        }
    }
    ctx->pc = 0x1BA298u;
    // 0x1ba298: 0x26a40100  addiu       $a0, $s5, 0x100
    ctx->pc = 0x1ba298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1ba29c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1ba29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1ba2a0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BA2A0u;
    SET_GPR_U32(ctx, 31, 0x1BA2A8u);
    ctx->pc = 0x1BA2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2A0u;
            // 0x1ba2a4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2A8u; }
        if (ctx->pc != 0x1BA2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2A8u; }
        if (ctx->pc != 0x1BA2A8u) { return; }
    }
    ctx->pc = 0x1BA2A8u;
label_1ba2a8:
    // 0x1ba2a8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba2ac: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba2acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba2b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ba2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ba2b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA2B4u;
    {
        const bool branch_taken_0x1ba2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2B4u;
            // 0x1ba2b8: 0x26a400f0  addiu       $a0, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2b4) {
            ctx->pc = 0x1BA2D0u;
            goto label_1ba2d0;
        }
    }
    ctx->pc = 0x1BA2BCu;
    // 0x1ba2bc: 0x26a50040  addiu       $a1, $s5, 0x40
    ctx->pc = 0x1ba2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1ba2c0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA2C0u;
    SET_GPR_U32(ctx, 31, 0x1BA2C8u);
    ctx->pc = 0x1BA2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2C0u;
            // 0x1ba2c4: 0x26a60060  addiu       $a2, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2C8u; }
        if (ctx->pc != 0x1BA2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2C8u; }
        if (ctx->pc != 0x1BA2C8u) { return; }
    }
    ctx->pc = 0x1BA2C8u;
label_1ba2c8:
    // 0x1ba2c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA2C8u;
    {
        const bool branch_taken_0x1ba2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba2c8) {
            ctx->pc = 0x1BA2E8u;
            goto label_1ba2e8;
        }
    }
    ctx->pc = 0x1BA2D0u;
label_1ba2d0:
    // 0x1ba2d0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x1ba2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x1ba2d4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ba2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ba2d8: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x1ba2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1ba2dc: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x1ba2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1ba2e0: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA2E0u;
    SET_GPR_U32(ctx, 31, 0x1BA2E8u);
    ctx->pc = 0x1BA2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2E0u;
            // 0x1ba2e4: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2E8u; }
        if (ctx->pc != 0x1BA2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2E8u; }
        if (ctx->pc != 0x1BA2E8u) { return; }
    }
    ctx->pc = 0x1BA2E8u;
label_1ba2e8:
    // 0x1ba2e8: 0x26a400f0  addiu       $a0, $s5, 0xF0
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
    // 0x1ba2ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ba2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2f0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1BA2F0u;
    SET_GPR_U32(ctx, 31, 0x1BA2F8u);
    ctx->pc = 0x1BA2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2F0u;
            // 0x1ba2f4: 0xaea000f4  sw          $zero, 0xF4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2F8u; }
        if (ctx->pc != 0x1BA2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA2F8u; }
        if (ctx->pc != 0x1BA2F8u) { return; }
    }
    ctx->pc = 0x1BA2F8u;
label_1ba2f8:
    // 0x1ba2f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA2F8u;
    {
        const bool branch_taken_0x1ba2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2F8u;
            // 0x1ba2fc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2f8) {
            ctx->pc = 0x1BA310u;
            goto label_1ba310;
        }
    }
    ctx->pc = 0x1BA300u;
label_1ba300:
    // 0x1ba300: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1ba300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ba304: 0x290102a  slt         $v0, $s4, $s0
    ctx->pc = 0x1ba304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ba308: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1BA308u;
    {
        const bool branch_taken_0x1ba308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA308u;
            // 0x1ba30c: 0x26d60010  addiu       $s6, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba308) {
            ctx->pc = 0x1BA260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba260;
        }
    }
    ctx->pc = 0x1BA310u;
label_1ba310:
    // 0x1ba310: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba314: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x1ba314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ba318: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ba31c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BA31Cu;
    {
        const bool branch_taken_0x1ba31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA31Cu;
            // 0x1ba320: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba31c) {
            ctx->pc = 0x1BA398u;
            goto label_1ba398;
        }
    }
    ctx->pc = 0x1BA324u;
    // 0x1ba324: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BA324u;
    {
        const bool branch_taken_0x1ba324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA324u;
            // 0x1ba328: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba324) {
            ctx->pc = 0x1BA398u;
            goto label_1ba398;
        }
    }
    ctx->pc = 0x1BA32Cu;
    // 0x1ba32c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ba32cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba330:
    // 0x1ba330: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x1ba334: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ba334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ba338: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x1ba33c: 0x24460140  addiu       $a2, $v0, 0x140
    ctx->pc = 0x1ba33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    // 0x1ba340: 0xc04bd7c  jal         func_12F5F0
    ctx->pc = 0x1BA340u;
    SET_GPR_U32(ctx, 31, 0x1BA348u);
    ctx->pc = 0x1BA344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA340u;
            // 0x1ba344: 0x26a70100  addiu       $a3, $s5, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5F0u;
    if (runtime->hasFunction(0x12F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA348u; }
        if (ctx->pc != 0x1BA348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistLinePoint__FPfPfPfPf_0x12f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA348u; }
        if (ctx->pc != 0x1BA348u) { return; }
    }
    ctx->pc = 0x1BA348u;
label_1ba348:
    // 0x1ba348: 0xc6a30084  lwc1        $f3, 0x84($s5)
    ctx->pc = 0x1ba348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ba34c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba350: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x1ba350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba354: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba358: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1ba358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1ba35c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ba35cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ba360: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1ba360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba364: 0x0  nop
    ctx->pc = 0x1ba364u;
    // NOP
    // 0x1ba368: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA368u;
    {
        const bool branch_taken_0x1ba368 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA368u;
            // 0x1ba36c: 0x26a400f0  addiu       $a0, $s5, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba368) {
            ctx->pc = 0x1BA384u;
            goto label_1ba384;
        }
    }
    ctx->pc = 0x1BA370u;
    // 0x1ba370: 0x26a50050  addiu       $a1, $s5, 0x50
    ctx->pc = 0x1ba370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 80));
    // 0x1ba374: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1BA374u;
    SET_GPR_U32(ctx, 31, 0x1BA37Cu);
    ctx->pc = 0x1BA378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA374u;
            // 0x1ba378: 0x26a60070  addiu       $a2, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA37Cu; }
        if (ctx->pc != 0x1BA37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA37Cu; }
        if (ctx->pc != 0x1BA37Cu) { return; }
    }
    ctx->pc = 0x1BA37Cu;
label_1ba37c:
    // 0x1ba37c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA37Cu;
    {
        const bool branch_taken_0x1ba37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA37Cu;
            // 0x1ba380: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba37c) {
            ctx->pc = 0x1BA398u;
            goto label_1ba398;
        }
    }
    ctx->pc = 0x1BA384u;
label_1ba384:
    // 0x1ba384: 0x0  nop
    ctx->pc = 0x1ba384u;
    // NOP
    // 0x1ba388: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ba388u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ba38c: 0x2d0102a  slt         $v0, $s6, $s0
    ctx->pc = 0x1ba38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ba390: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1BA390u;
    {
        const bool branch_taken_0x1ba390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA390u;
            // 0x1ba394: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba390) {
            ctx->pc = 0x1BA330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba330;
        }
    }
    ctx->pc = 0x1BA398u;
label_1ba398:
    // 0x1ba398: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA398u;
    {
        const bool branch_taken_0x1ba398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA398u;
            // 0x1ba39c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba398) {
            ctx->pc = 0x1BA3E0u;
            goto label_1ba3e0;
        }
    }
    ctx->pc = 0x1BA3A0u;
    // 0x1ba3a0: 0x13c2000a  beq         $fp, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BA3A0u;
    {
        const bool branch_taken_0x1ba3a0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba3a0) {
            ctx->pc = 0x1BA3CCu;
            goto label_1ba3cc;
        }
    }
    ctx->pc = 0x1BA3A8u;
    // 0x1ba3a8: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1ba3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1ba3ac: 0x80420020  lb          $v0, 0x20($v0)
    ctx->pc = 0x1ba3acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1ba3b0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA3B0u;
    {
        const bool branch_taken_0x1ba3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba3b0) {
            ctx->pc = 0x1BA3CCu;
            goto label_1ba3cc;
        }
    }
    ctx->pc = 0x1BA3B8u;
    // 0x1ba3b8: 0xdea20018  ld          $v0, 0x18($s5)
    ctx->pc = 0x1ba3b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1ba3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba3c0: 0x3c31804  sllv        $v1, $v1, $fp
    ctx->pc = 0x1ba3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 30) & 0x1F));
    // 0x1ba3c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ba3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ba3c8: 0xfea20018  sd          $v0, 0x18($s5)
    ctx->pc = 0x1ba3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 2));
label_1ba3cc:
    // 0x1ba3cc: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x1ba3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1ba3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba3d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ba3d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BA3D8u;
    {
        const bool branch_taken_0x1ba3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3D8u;
            // 0x1ba3dc: 0xaea30028  sw          $v1, 0x28($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3d8) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA3E0u;
label_1ba3e0:
    // 0x1ba3e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ba3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ba3e4:
    // 0x1ba3e4: 0x0  nop
    ctx->pc = 0x1ba3e4u;
    // NOP
    // 0x1ba3e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ba3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba3f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ba3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3f4: 0xc05d420  jal         func_175080
    ctx->pc = 0x1BA3F4u;
    SET_GPR_U32(ctx, 31, 0x1BA3FCu);
    ctx->pc = 0x1BA3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3F4u;
            // 0x1ba3f8: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3FCu; }
        if (ctx->pc != 0x1BA3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA3FCu; }
        if (ctx->pc != 0x1BA3FCu) { return; }
    }
    ctx->pc = 0x1BA3FCu;
label_1ba3fc:
    // 0x1ba3fc: 0x1440ff8b  bnez        $v0, . + 4 + (-0x75 << 2)
    ctx->pc = 0x1BA3FCu;
    {
        const bool branch_taken_0x1ba3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3FCu;
            // 0x1ba400: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3fc) {
            ctx->pc = 0x1BA22Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ba22c;
        }
    }
    ctx->pc = 0x1BA404u;
label_1ba404:
    // 0x1ba404: 0x0  nop
    ctx->pc = 0x1ba404u;
    // NOP
    // 0x1ba408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ba408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba40c:
    // 0x1ba40c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ba40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ba410:
    // 0x1ba410: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ba410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ba414: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ba414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ba418: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ba418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ba41c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ba41cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ba420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba434: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA434u;
            // 0x1ba438: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA43Cu;
}
