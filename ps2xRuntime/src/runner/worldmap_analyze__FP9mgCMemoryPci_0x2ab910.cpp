#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: worldmap_analyze__FP9mgCMemoryPci
// Address: 0x2ab910 - 0x2ab978
void worldmap_analyze__FP9mgCMemoryPci_0x2ab910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("worldmap_analyze__FP9mgCMemoryPci_0x2ab910");
#endif

    switch (ctx->pc) {
        case 0x2ab93cu: goto label_2ab93c;
        case 0x2ab94cu: goto label_2ab94c;
        case 0x2ab95cu: goto label_2ab95c;
        case 0x2ab964u: goto label_2ab964;
        default: break;
    }

    ctx->pc = 0x2ab910u;

    // 0x2ab910: 0x27bdf100  addiu       $sp, $sp, -0xF00
    ctx->pc = 0x2ab910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963456));
    // 0x2ab914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ab914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ab91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ab920: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ab920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab924: 0xaf849acc  sw          $a0, -0x6534($gp)
    ctx->pc = 0x2ab924u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941388), GPR_U32(ctx, 4));
    // 0x2ab928: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ab928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab92c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ab92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab930: 0xaf809adc  sw          $zero, -0x6524($gp)
    ctx->pc = 0x2ab930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941404), GPR_U32(ctx, 0));
    // 0x2ab934: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x2AB934u;
    SET_GPR_U32(ctx, 31, 0x2AB93Cu);
    ctx->pc = 0x2AB938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB934u;
            // 0x2ab938: 0xa7809ae0  sh          $zero, -0x6520($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941408), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB93Cu; }
        if (ctx->pc != 0x2AB93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB93Cu; }
        if (ctx->pc != 0x2AB93Cu) { return; }
    }
    ctx->pc = 0x2AB93Cu;
label_2ab93c:
    // 0x2ab93c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x2ab93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x2ab940: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2ab940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab944: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x2AB944u;
    SET_GPR_U32(ctx, 31, 0x2AB94Cu);
    ctx->pc = 0x2AB948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB944u;
            // 0x2ab948: 0x24a54560  addiu       $a1, $a1, 0x4560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB94Cu; }
        if (ctx->pc != 0x2AB94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB94Cu; }
        if (ctx->pc != 0x2AB94Cu) { return; }
    }
    ctx->pc = 0x2AB94Cu;
label_2ab94c:
    // 0x2ab94c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ab94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab950: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab954: 0xc051a60  jal         func_146980
    ctx->pc = 0x2AB954u;
    SET_GPR_U32(ctx, 31, 0x2AB95Cu);
    ctx->pc = 0x2AB958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB954u;
            // 0x2ab958: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB95Cu; }
        if (ctx->pc != 0x2AB95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB95Cu; }
        if (ctx->pc != 0x2AB95Cu) { return; }
    }
    ctx->pc = 0x2AB95Cu;
label_2ab95c:
    // 0x2ab95c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x2AB95Cu;
    SET_GPR_U32(ctx, 31, 0x2AB964u);
    ctx->pc = 0x2AB960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB95Cu;
            // 0x2ab960: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB964u; }
        if (ctx->pc != 0x2AB964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB964u; }
        if (ctx->pc != 0x2AB964u) { return; }
    }
    ctx->pc = 0x2AB964u;
label_2ab964:
    // 0x2ab964: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ab964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab96c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ab96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab970: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB970u;
            // 0x2ab974: 0x27bd0f00  addiu       $sp, $sp, 0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3840));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB978u;
}
