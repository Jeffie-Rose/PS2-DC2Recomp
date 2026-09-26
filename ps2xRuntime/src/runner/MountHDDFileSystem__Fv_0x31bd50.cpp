#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MountHDDFileSystem__Fv
// Address: 0x31bd50 - 0x31be28
void MountHDDFileSystem__Fv_0x31bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MountHDDFileSystem__Fv_0x31bd50");
#endif

    switch (ctx->pc) {
        case 0x31bd60u: goto label_31bd60;
        case 0x31bd78u: goto label_31bd78;
        case 0x31bd90u: goto label_31bd90;
        case 0x31bda0u: goto label_31bda0;
        case 0x31bdb0u: goto label_31bdb0;
        case 0x31bdc0u: goto label_31bdc0;
        case 0x31bdccu: goto label_31bdcc;
        case 0x31bde8u: goto label_31bde8;
        case 0x31be00u: goto label_31be00;
        case 0x31be18u: goto label_31be18;
        default: break;
    }

    ctx->pc = 0x31bd50u;

    // 0x31bd50: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x31bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x31bd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31bd58: 0xc0c6e90  jal         func_31BA40
    ctx->pc = 0x31BD58u;
    SET_GPR_U32(ctx, 31, 0x31BD60u);
    ctx->pc = 0x31BD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD58u;
            // 0x31bd5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD60u; }
        if (ctx->pc != 0x31BD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD60u; }
        if (ctx->pc != 0x31BD60u) { return; }
    }
    ctx->pc = 0x31BD60u;
label_31bd60:
    // 0x31bd60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BD60u;
    {
        const bool branch_taken_0x31bd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD60u;
            // 0x31bd64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd60) {
            ctx->pc = 0x31BD70u;
            goto label_31bd70;
        }
    }
    ctx->pc = 0x31BD68u;
    // 0x31bd68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x31BD68u;
    {
        const bool branch_taken_0x31bd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD68u;
            // 0x31bd6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd68) {
            ctx->pc = 0x31BE20u;
            goto label_31be20;
        }
    }
    ctx->pc = 0x31BD70u;
label_31bd70:
    // 0x31bd70: 0xc0c6ef0  jal         func_31BBC0
    ctx->pc = 0x31BD70u;
    SET_GPR_U32(ctx, 31, 0x31BD78u);
    ctx->pc = 0x31BBC0u;
    if (runtime->hasFunction(0x31BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x31BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD78u; }
        if (ctx->pc != 0x31BD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstall__Fv_0x31bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD78u; }
        if (ctx->pc != 0x31BD78u) { return; }
    }
    ctx->pc = 0x31BD78u;
label_31bd78:
    // 0x31bd78: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BD78u;
    {
        const bool branch_taken_0x31bd78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31BD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD78u;
            // 0x31bd7c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bd78) {
            ctx->pc = 0x31BD88u;
            goto label_31bd88;
        }
    }
    ctx->pc = 0x31BD80u;
    // 0x31bd80: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x31BD80u;
    {
        const bool branch_taken_0x31bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bd80) {
            ctx->pc = 0x31BE1Cu;
            goto label_31be1c;
        }
    }
    ctx->pc = 0x31BD88u;
label_31bd88:
    // 0x31bd88: 0xc0c6e0c  jal         func_31B830
    ctx->pc = 0x31BD88u;
    SET_GPR_U32(ctx, 31, 0x31BD90u);
    ctx->pc = 0x31B830u;
    if (runtime->hasFunction(0x31B830u)) {
        auto targetFn = runtime->lookupFunction(0x31B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD90u; }
        if (ctx->pc != 0x31BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPassword__FPc_0x31b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BD90u; }
        if (ctx->pc != 0x31BD90u) { return; }
    }
    ctx->pc = 0x31BD90u;
label_31bd90:
    // 0x31bd90: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bd94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bd98: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x31BD98u;
    SET_GPR_U32(ctx, 31, 0x31BDA0u);
    ctx->pc = 0x31BD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BD98u;
            // 0x31bd9c: 0x24a52d70  addiu       $a1, $a1, 0x2D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDA0u; }
        if (ctx->pc != 0x31BDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDA0u; }
        if (ctx->pc != 0x31BDA0u) { return; }
    }
    ctx->pc = 0x31BDA0u;
label_31bda0:
    // 0x31bda0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bda4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bda8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BDA8u;
    SET_GPR_U32(ctx, 31, 0x31BDB0u);
    ctx->pc = 0x31BDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BDA8u;
            // 0x31bdac: 0x24a52dc0  addiu       $a1, $a1, 0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDB0u; }
        if (ctx->pc != 0x31BDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDB0u; }
        if (ctx->pc != 0x31BDB0u) { return; }
    }
    ctx->pc = 0x31BDB0u;
label_31bdb0:
    // 0x31bdb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31bdb4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bdb8: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BDB8u;
    SET_GPR_U32(ctx, 31, 0x31BDC0u);
    ctx->pc = 0x31BDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BDB8u;
            // 0x31bdbc: 0x24a52e08  addiu       $a1, $a1, 0x2E08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDC0u; }
        if (ctx->pc != 0x31BDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDC0u; }
        if (ctx->pc != 0x31BDC0u) { return; }
    }
    ctx->pc = 0x31BDC0u;
label_31bdc0:
    // 0x31bdc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x31bdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bdc4: 0xc04a2da  jal         func_128B68
    ctx->pc = 0x31BDC4u;
    SET_GPR_U32(ctx, 31, 0x31BDCCu);
    ctx->pc = 0x31BDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BDC4u;
            // 0x31bdc8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDCCu; }
        if (ctx->pc != 0x31BDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDCCu; }
        if (ctx->pc != 0x31BDCCu) { return; }
    }
    ctx->pc = 0x31BDCCu;
label_31bdcc:
    // 0x31bdcc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x31bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x31bdd0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31bdd4: 0x24842d58  addiu       $a0, $a0, 0x2D58
    ctx->pc = 0x31bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11608));
    // 0x31bdd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31bdd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31bddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31bddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bde0: 0xc045964  jal         func_116590
    ctx->pc = 0x31BDE0u;
    SET_GPR_U32(ctx, 31, 0x31BDE8u);
    ctx->pc = 0x31BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BDE0u;
            // 0x31bde4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116590u;
    if (runtime->hasFunction(0x116590u)) {
        auto targetFn = runtime->lookupFunction(0x116590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDE8u; }
        if (ctx->pc != 0x31BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMount_0x116590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BDE8u; }
        if (ctx->pc != 0x31BDE8u) { return; }
    }
    ctx->pc = 0x31BDE8u;
label_31bde8:
    // 0x31bde8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BDE8u;
    {
        const bool branch_taken_0x31bde8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BDE8u;
            // 0x31bdec: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bde8) {
            ctx->pc = 0x31BDF8u;
            goto label_31bdf8;
        }
    }
    ctx->pc = 0x31BDF0u;
    // 0x31bdf0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x31BDF0u;
    {
        const bool branch_taken_0x31bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31bdf0) {
            ctx->pc = 0x31BE1Cu;
            goto label_31be1c;
        }
    }
    ctx->pc = 0x31BDF8u;
label_31bdf8:
    // 0x31bdf8: 0xc0458f6  jal         func_1163D8
    ctx->pc = 0x31BDF8u;
    SET_GPR_U32(ctx, 31, 0x31BE00u);
    ctx->pc = 0x31BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BDF8u;
            // 0x31bdfc: 0x24842d50  addiu       $a0, $a0, 0x2D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1163D8u;
    if (runtime->hasFunction(0x1163D8u)) {
        auto targetFn = runtime->lookupFunction(0x1163D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE00u; }
        if (ctx->pc != 0x31BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceChdir_0x1163d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE00u; }
        if (ctx->pc != 0x31BE00u) { return; }
    }
    ctx->pc = 0x31BE00u;
label_31be00:
    // 0x31be00: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31BE00u;
    {
        const bool branch_taken_0x31be00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE00u;
            // 0x31be04: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31be00) {
            ctx->pc = 0x31BE10u;
            goto label_31be10;
        }
    }
    ctx->pc = 0x31BE08u;
    // 0x31be08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31BE08u;
    {
        const bool branch_taken_0x31be08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31be08) {
            ctx->pc = 0x31BE1Cu;
            goto label_31be1c;
        }
    }
    ctx->pc = 0x31BE10u;
label_31be10:
    // 0x31be10: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x31BE10u;
    SET_GPR_U32(ctx, 31, 0x31BE18u);
    ctx->pc = 0x31BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE10u;
            // 0x31be14: 0x24842e30  addiu       $a0, $a0, 0x2E30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE18u; }
        if (ctx->pc != 0x31BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31BE18u; }
        if (ctx->pc != 0x31BE18u) { return; }
    }
    ctx->pc = 0x31BE18u;
label_31be18:
    // 0x31be18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31be1c:
    // 0x31be1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31be1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31be20:
    // 0x31be20: 0x3e00008  jr          $ra
    ctx->pc = 0x31BE20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31BE20u;
            // 0x31be24: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31BE28u;
}
