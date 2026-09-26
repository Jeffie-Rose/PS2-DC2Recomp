#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCursorPosition__11CManualMenuFv
// Address: 0x2c18d0 - 0x2c1994
void CalcCursorPosition__11CManualMenuFv_0x2c18d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCursorPosition__11CManualMenuFv_0x2c18d0");
#endif

    switch (ctx->pc) {
        case 0x2c191cu: goto label_2c191c;
        case 0x2c1960u: goto label_2c1960;
        case 0x2c197cu: goto label_2c197c;
        default: break;
    }

    ctx->pc = 0x2c18d0u;

    // 0x2c18d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c18d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c18d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c18d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c18d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c18d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c18dc: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2c18dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2c18e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c18e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c18e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c18e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c18e8: 0xdf839ca0  ld          $v1, -0x6360($gp)
    ctx->pc = 0x2c18e8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294941856)));
    // 0x2c18ec: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x2c18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x2c18f0: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x2c18f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2c18f4: 0x10620001  beq         $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C18F4u;
    {
        const bool branch_taken_0x2c18f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C18F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C18F4u;
            // 0x2c18f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c18f4) {
            ctx->pc = 0x2C18FCu;
            goto label_2c18fc;
        }
    }
    ctx->pc = 0x2C18FCu;
label_2c18fc:
    // 0x2c18fc: 0x8f849c54  lw          $a0, -0x63AC($gp)
    ctx->pc = 0x2c18fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941780)));
    // 0x2c1900: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1900u;
    {
        const bool branch_taken_0x2c1900 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1900) {
            ctx->pc = 0x2C191Cu;
            goto label_2c191c;
        }
    }
    ctx->pc = 0x2C1908u;
    // 0x2c1908: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c1908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c190c: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x2c190cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2c1910: 0x24a5f9e8  addiu       $a1, $a1, -0x618
    ctx->pc = 0x2c1910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965736));
    // 0x2c1914: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2C1914u;
    SET_GPR_U32(ctx, 31, 0x2C191Cu);
    ctx->pc = 0x2C1918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1914u;
            // 0x2c1918: 0x27a7003c  addiu       $a3, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C191Cu; }
        if (ctx->pc != 0x2C191Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C191Cu; }
        if (ctx->pc != 0x2C191Cu) { return; }
    }
    ctx->pc = 0x2C191Cu;
label_2c191c:
    // 0x2c191c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2c191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c1920: 0x27b0003c  addiu       $s0, $sp, 0x3C
    ctx->pc = 0x2c1920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2c1924: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x2c1924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x2c1928: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x2c1928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x2c192c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2c192cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2c1930: 0x8e240110  lw          $a0, 0x110($s1)
    ctx->pc = 0x2c1930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2c1934: 0x8e230114  lw          $v1, 0x114($s1)
    ctx->pc = 0x2c1934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2c1938: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c1938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c193c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2c193cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c1940: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c1940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c1944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1948: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c1948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c194c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1950: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c1950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c1954: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c1954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1958: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x2C1958u;
    SET_GPR_U32(ctx, 31, 0x2C1960u);
    ctx->pc = 0x2C195Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1958u;
            // 0x2c195c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1960u; }
        if (ctx->pc != 0x2C1960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1960u; }
        if (ctx->pc != 0x2C1960u) { return; }
    }
    ctx->pc = 0x2C1960u;
label_2c1960:
    // 0x2c1960: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x2c1960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x2c1964: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1964u;
    {
        const bool branch_taken_0x2c1964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1964) {
            ctx->pc = 0x2C1980u;
            goto label_2c1980;
        }
    }
    ctx->pc = 0x2C196Cu;
    // 0x2c196c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2c196cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2c1970: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2c1970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2c1974: 0xc08f000  jal         func_23C000
    ctx->pc = 0x2C1974u;
    SET_GPR_U32(ctx, 31, 0x2C197Cu);
    ctx->pc = 0x2C1978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1974u;
            // 0x2c1978: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C197Cu; }
        if (ctx->pc != 0x2C197Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C197Cu; }
        if (ctx->pc != 0x2C197Cu) { return; }
    }
    ctx->pc = 0x2C197Cu;
label_2c197c:
    // 0x2c197c: 0xae200174  sw          $zero, 0x174($s1)
    ctx->pc = 0x2c197cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 0));
label_2c1980:
    // 0x2c1980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c1980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1984: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c198c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C198Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C198Cu;
            // 0x2c1990: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1994u;
}
