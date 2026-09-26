#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__14CActiveMonsterFv
// Address: 0x1dac60 - 0x1dadf4
void Initialize__14CActiveMonsterFv_0x1dac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__14CActiveMonsterFv_0x1dac60");
#endif

    switch (ctx->pc) {
        case 0x1dac78u: goto label_1dac78;
        case 0x1dad10u: goto label_1dad10;
        case 0x1dad70u: goto label_1dad70;
        default: break;
    }

    ctx->pc = 0x1dac60u;

    // 0x1dac60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dac64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dac64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dac6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dac70: 0xc05c838  jal         func_1720E0
    ctx->pc = 0x1DAC70u;
    SET_GPR_U32(ctx, 31, 0x1DAC78u);
    ctx->pc = 0x1DAC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC70u;
            // 0x1dac74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E0u;
    if (runtime->hasFunction(0x1720E0u)) {
        auto targetFn = runtime->lookupFunction(0x1720E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC78u; }
        if (ctx->pc != 0x1DAC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CActionCharaFP9mgCMemory_0x1720e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC78u; }
        if (ctx->pc != 0x1DAC78u) { return; }
    }
    ctx->pc = 0x1DAC78u;
label_1dac78:
    // 0x1dac78: 0xa6001154  sh          $zero, 0x1154($s0)
    ctx->pc = 0x1dac78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4436), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dac7c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1dac7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dac80: 0xa6001156  sh          $zero, 0x1156($s0)
    ctx->pc = 0x1dac80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4438), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dac84: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1dac84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1dac88: 0xa6081158  sh          $t0, 0x1158($s0)
    ctx->pc = 0x1dac88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dac8c: 0x240603e7  addiu       $a2, $zero, 0x3E7
    ctx->pc = 0x1dac8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x1dac90: 0xa608115a  sh          $t0, 0x115A($s0)
    ctx->pc = 0x1dac90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4442), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dac94: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x1dac94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x1dac98: 0xa60012e2  sh          $zero, 0x12E2($s0)
    ctx->pc = 0x1dac98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4834), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dac9c: 0x3c0443c8  lui         $a0, 0x43C8
    ctx->pc = 0x1dac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17352 << 16));
    // 0x1daca0: 0xa60012e4  sh          $zero, 0x12E4($s0)
    ctx->pc = 0x1daca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4836), (uint16_t)GPR_U32(ctx, 0));
    // 0x1daca4: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1daca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1daca8: 0xae0012e8  sw          $zero, 0x12E8($s0)
    ctx->pc = 0x1daca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4840), GPR_U32(ctx, 0));
    // 0x1dacac: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1dacacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1dacb0: 0xae0712ec  sw          $a3, 0x12EC($s0)
    ctx->pc = 0x1dacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4844), GPR_U32(ctx, 7));
    // 0x1dacb4: 0xa60612f0  sh          $a2, 0x12F0($s0)
    ctx->pc = 0x1dacb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4848), (uint16_t)GPR_U32(ctx, 6));
    // 0x1dacb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dacb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacbc: 0xae0512fc  sw          $a1, 0x12FC($s0)
    ctx->pc = 0x1dacbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4860), GPR_U32(ctx, 5));
    // 0x1dacc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dacc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dacc4: 0xae041300  sw          $a0, 0x1300($s0)
    ctx->pc = 0x1dacc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4864), GPR_U32(ctx, 4));
    // 0x1dacc8: 0xae031304  sw          $v1, 0x1304($s0)
    ctx->pc = 0x1dacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4868), GPR_U32(ctx, 3));
    // 0x1daccc: 0xa6021308  sh          $v0, 0x1308($s0)
    ctx->pc = 0x1dacccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4872), (uint16_t)GPR_U32(ctx, 2));
    // 0x1dacd0: 0xa60812a4  sh          $t0, 0x12A4($s0)
    ctx->pc = 0x1dacd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4772), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dacd4: 0xa2000bf4  sb          $zero, 0xBF4($s0)
    ctx->pc = 0x1dacd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3060), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dacd8: 0xa2000bf5  sb          $zero, 0xBF5($s0)
    ctx->pc = 0x1dacd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3061), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dacdc: 0xa6001338  sh          $zero, 0x1338($s0)
    ctx->pc = 0x1dacdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4920), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dace0: 0xa600133a  sh          $zero, 0x133A($s0)
    ctx->pc = 0x1dace0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4922), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dace4: 0xa60812e0  sh          $t0, 0x12E0($s0)
    ctx->pc = 0x1dace4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4832), (uint16_t)GPR_U32(ctx, 8));
    // 0x1dace8: 0xae0012c4  sw          $zero, 0x12C4($s0)
    ctx->pc = 0x1dace8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4804), GPR_U32(ctx, 0));
    // 0x1dacec: 0xae0012c0  sw          $zero, 0x12C0($s0)
    ctx->pc = 0x1dacecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4800), GPR_U32(ctx, 0));
    // 0x1dacf0: 0xae00115c  sw          $zero, 0x115C($s0)
    ctx->pc = 0x1dacf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4444), GPR_U32(ctx, 0));
    // 0x1dacf4: 0xae001160  sw          $zero, 0x1160($s0)
    ctx->pc = 0x1dacf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4448), GPR_U32(ctx, 0));
    // 0x1dacf8: 0xae001164  sw          $zero, 0x1164($s0)
    ctx->pc = 0x1dacf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4452), GPR_U32(ctx, 0));
    // 0x1dacfc: 0xae001168  sw          $zero, 0x1168($s0)
    ctx->pc = 0x1dacfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4456), GPR_U32(ctx, 0));
    // 0x1dad00: 0xae00116c  sw          $zero, 0x116C($s0)
    ctx->pc = 0x1dad00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4460), GPR_U32(ctx, 0));
    // 0x1dad04: 0xae001170  sw          $zero, 0x1170($s0)
    ctx->pc = 0x1dad04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4464), GPR_U32(ctx, 0));
    // 0x1dad08: 0xae001174  sw          $zero, 0x1174($s0)
    ctx->pc = 0x1dad08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4468), GPR_U32(ctx, 0));
    // 0x1dad0c: 0xae001178  sw          $zero, 0x1178($s0)
    ctx->pc = 0x1dad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4472), GPR_U32(ctx, 0));
label_1dad10:
    // 0x1dad10: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x1dad10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1dad14: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1dad14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x1dad18: 0xac60117c  sw          $zero, 0x117C($v1)
    ctx->pc = 0x1dad18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4476), GPR_U32(ctx, 0));
    // 0x1dad1c: 0x28e20020  slti        $v0, $a3, 0x20
    ctx->pc = 0x1dad1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1dad20: 0xac601180  sw          $zero, 0x1180($v1)
    ctx->pc = 0x1dad20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4480), GPR_U32(ctx, 0));
    // 0x1dad24: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1dad24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1dad28: 0xac601184  sw          $zero, 0x1184($v1)
    ctx->pc = 0x1dad28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4484), GPR_U32(ctx, 0));
    // 0x1dad2c: 0xac601188  sw          $zero, 0x1188($v1)
    ctx->pc = 0x1dad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4488), GPR_U32(ctx, 0));
    // 0x1dad30: 0xac60118c  sw          $zero, 0x118C($v1)
    ctx->pc = 0x1dad30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4492), GPR_U32(ctx, 0));
    // 0x1dad34: 0xac601190  sw          $zero, 0x1190($v1)
    ctx->pc = 0x1dad34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4496), GPR_U32(ctx, 0));
    // 0x1dad38: 0xac601194  sw          $zero, 0x1194($v1)
    ctx->pc = 0x1dad38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4500), GPR_U32(ctx, 0));
    // 0x1dad3c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DAD3Cu;
    {
        const bool branch_taken_0x1dad3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD3Cu;
            // 0x1dad40: 0xac601198  sw          $zero, 0x1198($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dad3c) {
            ctx->pc = 0x1DAD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dad10;
        }
    }
    ctx->pc = 0x1DAD44u;
    // 0x1dad44: 0xae001310  sw          $zero, 0x1310($s0)
    ctx->pc = 0x1dad44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4880), GPR_U32(ctx, 0));
    // 0x1dad48: 0x26041220  addiu       $a0, $s0, 0x1220
    ctx->pc = 0x1dad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
    // 0x1dad4c: 0xae001314  sw          $zero, 0x1314($s0)
    ctx->pc = 0x1dad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4884), GPR_U32(ctx, 0));
    // 0x1dad50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dad50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad54: 0xae001330  sw          $zero, 0x1330($s0)
    ctx->pc = 0x1dad54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 0));
    // 0x1dad58: 0xae001334  sw          $zero, 0x1334($s0)
    ctx->pc = 0x1dad58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 0));
    // 0x1dad5c: 0xae0011fc  sw          $zero, 0x11FC($s0)
    ctx->pc = 0x1dad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4604), GPR_U32(ctx, 0));
    // 0x1dad60: 0xa6001204  sh          $zero, 0x1204($s0)
    ctx->pc = 0x1dad60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4612), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dad64: 0xae001208  sw          $zero, 0x1208($s0)
    ctx->pc = 0x1dad64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4616), GPR_U32(ctx, 0));
    // 0x1dad68: 0xc072a58  jal         func_1CA960
    ctx->pc = 0x1DAD68u;
    SET_GPR_U32(ctx, 31, 0x1DAD70u);
    ctx->pc = 0x1DAD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD68u;
            // 0x1dad6c: 0xa6001318  sh          $zero, 0x1318($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4888), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA960u;
    if (runtime->hasFunction(0x1CA960u)) {
        auto targetFn = runtime->lookupFunction(0x1CA960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD70u; }
        if (ctx->pc != 0x1DAD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CEnemyLifeGageFi_0x1ca960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD70u; }
        if (ctx->pc != 0x1DAD70u) { return; }
    }
    ctx->pc = 0x1DAD70u;
label_1dad70:
    // 0x1dad70: 0xae0012a8  sw          $zero, 0x12A8($s0)
    ctx->pc = 0x1dad70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4776), GPR_U32(ctx, 0));
    // 0x1dad74: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1dad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dad78: 0xae0412bc  sw          $a0, 0x12BC($s0)
    ctx->pc = 0x1dad78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4796), GPR_U32(ctx, 4));
    // 0x1dad7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1dad80: 0xae00131c  sw          $zero, 0x131C($s0)
    ctx->pc = 0x1dad80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4892), GPR_U32(ctx, 0));
    // 0x1dad84: 0xa6001320  sh          $zero, 0x1320($s0)
    ctx->pc = 0x1dad84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4896), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dad88: 0xae001328  sw          $zero, 0x1328($s0)
    ctx->pc = 0x1dad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4904), GPR_U32(ctx, 0));
    // 0x1dad8c: 0xae00132c  sw          $zero, 0x132C($s0)
    ctx->pc = 0x1dad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4908), GPR_U32(ctx, 0));
    // 0x1dad90: 0xa6001322  sh          $zero, 0x1322($s0)
    ctx->pc = 0x1dad90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4898), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dad94: 0xa6001324  sh          $zero, 0x1324($s0)
    ctx->pc = 0x1dad94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4900), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dad98: 0xa6001326  sh          $zero, 0x1326($s0)
    ctx->pc = 0x1dad98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4902), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dad9c: 0xae04134c  sw          $a0, 0x134C($s0)
    ctx->pc = 0x1dad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4940), GPR_U32(ctx, 4));
    // 0x1dada0: 0xae001350  sw          $zero, 0x1350($s0)
    ctx->pc = 0x1dada0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4944), GPR_U32(ctx, 0));
    // 0x1dada4: 0xa6041354  sh          $a0, 0x1354($s0)
    ctx->pc = 0x1dada4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4948), (uint16_t)GPR_U32(ctx, 4));
    // 0x1dada8: 0xa6001356  sh          $zero, 0x1356($s0)
    ctx->pc = 0x1dada8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4950), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dadac: 0xae00130c  sw          $zero, 0x130C($s0)
    ctx->pc = 0x1dadacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4876), GPR_U32(ctx, 0));
    // 0x1dadb0: 0xae00133c  sw          $zero, 0x133C($s0)
    ctx->pc = 0x1dadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 0));
    // 0x1dadb4: 0xa2001358  sb          $zero, 0x1358($s0)
    ctx->pc = 0x1dadb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4952), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dadb8: 0xae001478  sw          $zero, 0x1478($s0)
    ctx->pc = 0x1dadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5240), GPR_U32(ctx, 0));
    // 0x1dadbc: 0xae001474  sw          $zero, 0x1474($s0)
    ctx->pc = 0x1dadbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5236), GPR_U32(ctx, 0));
    // 0x1dadc0: 0xae001470  sw          $zero, 0x1470($s0)
    ctx->pc = 0x1dadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5232), GPR_U32(ctx, 0));
    // 0x1dadc4: 0xae03147c  sw          $v1, 0x147C($s0)
    ctx->pc = 0x1dadc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5244), GPR_U32(ctx, 3));
    // 0x1dadc8: 0xae001480  sw          $zero, 0x1480($s0)
    ctx->pc = 0x1dadc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5248), GPR_U32(ctx, 0));
    // 0x1dadcc: 0xae001484  sw          $zero, 0x1484($s0)
    ctx->pc = 0x1dadccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5252), GPR_U32(ctx, 0));
    // 0x1dadd0: 0xae001488  sw          $zero, 0x1488($s0)
    ctx->pc = 0x1dadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5256), GPR_U32(ctx, 0));
    // 0x1dadd4: 0xae00148c  sw          $zero, 0x148C($s0)
    ctx->pc = 0x1dadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5260), GPR_U32(ctx, 0));
    // 0x1dadd8: 0xae001490  sw          $zero, 0x1490($s0)
    ctx->pc = 0x1dadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5264), GPR_U32(ctx, 0));
    // 0x1daddc: 0xae001494  sw          $zero, 0x1494($s0)
    ctx->pc = 0x1daddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5268), GPR_U32(ctx, 0));
    // 0x1dade0: 0xae001348  sw          $zero, 0x1348($s0)
    ctx->pc = 0x1dade0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4936), GPR_U32(ctx, 0));
    // 0x1dade4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dade4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dade8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dade8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dadec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DADECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DADF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DADECu;
            // 0x1dadf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DADF4u;
}
