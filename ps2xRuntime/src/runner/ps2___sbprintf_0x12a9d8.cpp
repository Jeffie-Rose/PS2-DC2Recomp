#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sbprintf
// Address: 0x12a9d8 - 0x12aa8c
void ps2___sbprintf_0x12a9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sbprintf_0x12a9d8");
#endif

    switch (ctx->pc) {
        case 0x12aa3cu: goto label_12aa3c;
        case 0x12aa50u: goto label_12aa50;
        default: break;
    }

    ctx->pc = 0x12a9d8u;

    // 0x12a9d8: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x12a9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x12a9dc: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x12a9dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12a9e0: 0xffb10470  sd          $s1, 0x470($sp)
    ctx->pc = 0x12a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 17));
    // 0x12a9e4: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x12a9e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12a9e8: 0xffb00460  sd          $s0, 0x460($sp)
    ctx->pc = 0x12a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 16));
    // 0x12a9ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9f0: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x12a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
    // 0x12a9f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12a9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9f8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x12a9f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12a9fc: 0x8e280054  lw          $t0, 0x54($s1)
    ctx->pc = 0x12a9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x12aa00: 0x9629000e  lhu         $t1, 0xE($s1)
    ctx->pc = 0x12aa00u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x12aa04: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x12aa08: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x12aa08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x12aa0c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x12aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x12aa10: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x12aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    // 0x12aa14: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x12aa14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12aa18: 0xa7a9000e  sh          $t1, 0xE($sp)
    ctx->pc = 0x12aa18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 14), (uint16_t)GPR_U32(ctx, 9));
    // 0x12aa1c: 0xafa7001c  sw          $a3, 0x1C($sp)
    ctx->pc = 0x12aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 7));
    // 0x12aa20: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x12aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x12aa24: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x12aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
    // 0x12aa28: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x12aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
    // 0x12aa2c: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x12aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
    // 0x12aa30: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x12aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
    // 0x12aa34: 0xc04aaa4  jal         func_12AA90
    ctx->pc = 0x12AA34u;
    SET_GPR_U32(ctx, 31, 0x12AA3Cu);
    ctx->pc = 0x12AA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA34u;
            // 0x12aa38: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AA90u;
    if (runtime->hasFunction(0x12AA90u)) {
        auto targetFn = runtime->lookupFunction(0x12AA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA3Cu; }
        if (ctx->pc != 0x12AA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vfprintf_0x12aa90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA3Cu; }
        if (ctx->pc != 0x12AA3Cu) { return; }
    }
    ctx->pc = 0x12AA3Cu;
label_12aa3c:
    // 0x12aa3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12aa3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa40: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AA40u;
    {
        const bool branch_taken_0x12aa40 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x12AA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA40u;
            // 0x12aa44: 0x97a2000c  lhu         $v0, 0xC($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa40) {
            ctx->pc = 0x12AA5Cu;
            goto label_12aa5c;
        }
    }
    ctx->pc = 0x12AA48u;
    // 0x12aa48: 0xc04953a  jal         func_1254E8
    ctx->pc = 0x12AA48u;
    SET_GPR_U32(ctx, 31, 0x12AA50u);
    ctx->pc = 0x12AA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA48u;
            // 0x12aa4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1254E8u;
    if (runtime->hasFunction(0x1254E8u)) {
        auto targetFn = runtime->lookupFunction(0x1254E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA50u; }
        if (ctx->pc != 0x12AA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fflush_0x1254e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12AA50u; }
        if (ctx->pc != 0x12AA50u) { return; }
    }
    ctx->pc = 0x12AA50u;
label_12aa50:
    // 0x12aa50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x12aa50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aa54: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x12aa54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
    // 0x12aa58: 0x97a2000c  lhu         $v0, 0xC($sp)
    ctx->pc = 0x12aa58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
label_12aa5c:
    // 0x12aa5c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x12aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x12aa60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AA60u;
    {
        const bool branch_taken_0x12aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA60u;
            // 0x12aa64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa60) {
            ctx->pc = 0x12AA78u;
            goto label_12aa78;
        }
    }
    ctx->pc = 0x12AA68u;
    // 0x12aa68: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x12aa68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12aa6c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x12aa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x12aa70: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x12aa70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x12aa74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12aa74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aa78:
    // 0x12aa78: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x12aa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x12aa7c: 0xdfb10470  ld          $s1, 0x470($sp)
    ctx->pc = 0x12aa7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x12aa80: 0xdfb00460  ld          $s0, 0x460($sp)
    ctx->pc = 0x12aa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
    // 0x12aa84: 0x3e00008  jr          $ra
    ctx->pc = 0x12AA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA84u;
            // 0x12aa88: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12AA8Cu;
}
