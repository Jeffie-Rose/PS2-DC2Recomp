#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetDrawEnv__FP10mgCDrawEnvP13mgCVisualAttrP10mgCDrawEnv
// Address: 0x140e20 - 0x141090
void SetDrawEnv__FP10mgCDrawEnvP13mgCVisualAttrP10mgCDrawEnv_0x140e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDrawEnv__FP10mgCDrawEnvP13mgCVisualAttrP10mgCDrawEnv_0x140e20");
#endif

    switch (ctx->pc) {
        case 0x140e40u: goto label_140e40;
        case 0x14107cu: goto label_14107c;
        default: break;
    }

    ctx->pc = 0x140e20u;

    // 0x140e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x140e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x140e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x140e28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x140e2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x140e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x140e30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x140e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x140e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e38: 0xc04e220  jal         func_138880
    ctx->pc = 0x140E38u;
    SET_GPR_U32(ctx, 31, 0x140E40u);
    ctx->pc = 0x140E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E38u;
            // 0x140e3c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E40u; }
        if (ctx->pc != 0x140E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E40u; }
        if (ctx->pc != 0x140E40u) { return; }
    }
    ctx->pc = 0x140E40u;
label_140e40:
    // 0x140e40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x140e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x140e44: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E44u;
    {
        const bool branch_taken_0x140e44 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x140e44) {
            ctx->pc = 0x140E68u;
            goto label_140e68;
        }
    }
    ctx->pc = 0x140E4Cu;
    // 0x140e4c: 0x96250010  lhu         $a1, 0x10($s1)
    ctx->pc = 0x140e4cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x140e50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x140e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x140e54: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x140e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x140e58: 0x2403f00f  addiu       $v1, $zero, -0xFF1
    ctx->pc = 0x140e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x140e5c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140e60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140e64: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x140e64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
label_140e68:
    // 0x140e68: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x140e68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x140e6c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x140e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x140e70: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x140e70u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x140e74: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140e78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140e7c: 0xa2230012  sb          $v1, 0x12($s1)
    ctx->pc = 0x140e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
    // 0x140e80: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x140e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x140e84: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x140E84u;
    {
        const bool branch_taken_0x140e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E84u;
            // 0x140e88: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e84) {
            ctx->pc = 0x140F04u;
            goto label_140f04;
        }
    }
    ctx->pc = 0x140E8Cu;
    // 0x140e8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x140e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x140e90: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140E90u;
    {
        const bool branch_taken_0x140e90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140e90) {
            ctx->pc = 0x140EB4u;
            goto label_140eb4;
        }
    }
    ctx->pc = 0x140E98u;
    // 0x140e98: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x140e98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x140e9c: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x140e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x140ea0: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x140ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x140ea4: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x140ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x140ea8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140eac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140eb0: 0xa2230012  sb          $v1, 0x12($s1)
    ctx->pc = 0x140eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
label_140eb4:
    // 0x140eb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x140eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x140eb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140ebc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140EBCu;
    {
        const bool branch_taken_0x140ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140ebc) {
            ctx->pc = 0x140EDCu;
            goto label_140edc;
        }
    }
    ctx->pc = 0x140EC4u;
    // 0x140ec4: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x140ec4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x140ec8: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x140ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x140ecc: 0x64040004  daddiu      $a0, $zero, 0x4
    ctx->pc = 0x140eccu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x140ed0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140ed4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140ed8: 0xa2230012  sb          $v1, 0x12($s1)
    ctx->pc = 0x140ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
label_140edc:
    // 0x140edc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x140edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x140ee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x140ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140ee4: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x140EE4u;
    {
        const bool branch_taken_0x140ee4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140ee4) {
            ctx->pc = 0x140F04u;
            goto label_140f04;
        }
    }
    ctx->pc = 0x140EECu;
    // 0x140eec: 0x92250012  lbu         $a1, 0x12($s1)
    ctx->pc = 0x140eecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x140ef0: 0x2403fff9  addiu       $v1, $zero, -0x7
    ctx->pc = 0x140ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
    // 0x140ef4: 0x64040006  daddiu      $a0, $zero, 0x6
    ctx->pc = 0x140ef4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
    // 0x140ef8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140efc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140f00: 0xa2230012  sb          $v1, 0x12($s1)
    ctx->pc = 0x140f00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
label_140f04:
    // 0x140f04: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x140f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x140f08: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x140F08u;
    {
        const bool branch_taken_0x140f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F08u;
            // 0x140f0c: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f08) {
            ctx->pc = 0x140F6Cu;
            goto label_140f6c;
        }
    }
    ctx->pc = 0x140F10u;
    // 0x140f10: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140F10u;
    {
        const bool branch_taken_0x140f10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140f10) {
            ctx->pc = 0x140F34u;
            goto label_140f34;
        }
    }
    ctx->pc = 0x140F18u;
    // 0x140f18: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x140f18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x140f1c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x140f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x140f20: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x140f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x140f24: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140f28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140f2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x140F2Cu;
    {
        const bool branch_taken_0x140f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F2Cu;
            // 0x140f30: 0xa2230010  sb          $v1, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f2c) {
            ctx->pc = 0x140F4Cu;
            goto label_140f4c;
        }
    }
    ctx->pc = 0x140F34u;
label_140f34:
    // 0x140f34: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x140f34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x140f38: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x140f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x140f3c: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x140f3cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x140f40: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140f44: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140f48: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x140f48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
label_140f4c:
    // 0x140f4c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x140f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x140f50: 0x2403fff1  addiu       $v1, $zero, -0xF
    ctx->pc = 0x140f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x140f54: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x140f54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x140f58: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x140f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x140f5c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140f60: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x140f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x140f64: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140f68: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x140f68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
label_140f6c:
    // 0x140f6c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x140f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x140f70: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x140F70u;
    {
        const bool branch_taken_0x140f70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F70u;
            // 0x140f74: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f70) {
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x140F78u;
    // 0x140f78: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x140F78u;
    {
        const bool branch_taken_0x140f78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x140F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F78u;
            // 0x140f7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f78) {
            ctx->pc = 0x140FA0u;
            goto label_140fa0;
        }
    }
    ctx->pc = 0x140F80u;
    // 0x140f80: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x140f80u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x140f84: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x140f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x140f88: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x140f8c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x140f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x140f90: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140f94: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140f98: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x140F98u;
    {
        const bool branch_taken_0x140f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140F98u;
            // 0x140f9c: 0xa2230011  sb          $v1, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140f98) {
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x140FA0u;
label_140fa0:
    // 0x140fa0: 0x14a40010  bne         $a1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x140FA0u;
    {
        const bool branch_taken_0x140fa0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x140FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140FA0u;
            // 0x140fa4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fa0) {
            ctx->pc = 0x140FE4u;
            goto label_140fe4;
        }
    }
    ctx->pc = 0x140FA8u;
    // 0x140fa8: 0x92270011  lbu         $a3, 0x11($s1)
    ctx->pc = 0x140fa8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x140fac: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x140facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x140fb0: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x140fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x140fb4: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x140fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x140fb8: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x140fb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x140fbc: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x140fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x140fc0: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x140fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x140fc4: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x140fc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x140fc8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x140fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x140fcc: 0xa2250011  sb          $a1, 0x11($s1)
    ctx->pc = 0x140fccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x140fd0: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x140fd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x140fd4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x140fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x140fd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x140fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x140fdc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x140FDCu;
    {
        const bool branch_taken_0x140fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140FDCu;
            // 0x140fe0: 0xa2230011  sb          $v1, 0x11($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140fdc) {
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x140FE4u;
label_140fe4:
    // 0x140fe4: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x140FE4u;
    {
        const bool branch_taken_0x140fe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x140fe4) {
            ctx->pc = 0x141020u;
            goto label_141020;
        }
    }
    ctx->pc = 0x140FECu;
    // 0x140fec: 0x92270011  lbu         $a3, 0x11($s1)
    ctx->pc = 0x140fecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x140ff0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x140ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x140ff4: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x140ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x140ff8: 0x33180  sll         $a2, $v1, 6
    ctx->pc = 0x140ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x140ffc: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x140ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x141000: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x141000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x141004: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x141004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x141008: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x141008u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x14100c: 0xa2250011  sb          $a1, 0x11($s1)
    ctx->pc = 0x14100cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 5));
    // 0x141010: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x141010u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x141014: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x141014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x141018: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x141018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x14101c: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x14101cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
label_141020:
    // 0x141020: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x141020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x141024: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x141024u;
    {
        const bool branch_taken_0x141024 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x141024) {
            ctx->pc = 0x141044u;
            goto label_141044;
        }
    }
    ctx->pc = 0x14102Cu;
    // 0x14102c: 0x92250024  lbu         $a1, 0x24($s1)
    ctx->pc = 0x14102cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x141030: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x141030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x141034: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x141034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x141038: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x141038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14103c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x14103cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x141040: 0xa2230024  sb          $v1, 0x24($s1)
    ctx->pc = 0x141040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 3));
label_141044:
    // 0x141044: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x141044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x141048: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x141048u;
    {
        const bool branch_taken_0x141048 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x141048) {
            ctx->pc = 0x141068u;
            goto label_141068;
        }
    }
    ctx->pc = 0x141050u;
    // 0x141050: 0x92250024  lbu         $a1, 0x24($s1)
    ctx->pc = 0x141050u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x141054: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x141054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x141058: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x141058u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x14105c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14105cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x141060: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x141060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x141064: 0xa2230024  sb          $v1, 0x24($s1)
    ctx->pc = 0x141064u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 3));
label_141068:
    // 0x141068: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x141068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14106c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14106Cu;
    {
        const bool branch_taken_0x14106c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x141070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14106Cu;
            // 0x141070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14106c) {
            ctx->pc = 0x14107Cu;
            goto label_14107c;
        }
    }
    ctx->pc = 0x141074u;
    // 0x141074: 0xc04e25c  jal         func_138970
    ctx->pc = 0x141074u;
    SET_GPR_U32(ctx, 31, 0x14107Cu);
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14107Cu; }
        if (ctx->pc != 0x14107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14107Cu; }
        if (ctx->pc != 0x14107Cu) { return; }
    }
    ctx->pc = 0x14107Cu;
label_14107c:
    // 0x14107c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x141080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x141084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141088: 0x3e00008  jr          $ra
    ctx->pc = 0x141088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141088u;
            // 0x14108c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141090u;
}
